
v_int vec = {1,2,3,4,5,6};
v_str vec_str1{"A","B","C","D"};
//accumulate：元素求和，前两个参数指定求和元素的范围，第三个参数是和的初值。
auto sum_int = accumulate(vec.cbegin(),vec.cend(),0);
cout << sum_int << endl;
auto sum_str = accumulate(vec_str1.cbegin(),vec_str1.cend(),string(""));//string初始化为空串。
cout << sum_str << endl;
l_char lst_char{"A","B","C","D"};
//equal：用于确定两个序列是否保存相同的值，返回布尔值。第二个序列至少应该和第一个序列一样长。
cout << equal(vec_str1.cbegin(),vec_str1.cend(),lst_char.cbegin()) << endl;
fill(vec.begin(),vec.begin() + vec.size()/2,0);//fill：接受一对迭代器表示范围，用指定值替代范围内的元素。
fill_n(vec.begin()+3,3,1);//fill_n：用指定值替代从指定元素开始的多个元素。
for (const auto s : vec)
{
	cout << s << " ";
}
cout << endl;
 
//back_inserter:通过插入迭代器将元素添加到容器中。
v_int vec2;
auto it = back_inserter(vec2);
*it = 10;
fill_n(back_inserter(vec2),5,0);//向vec2的末尾添加五个元素。
for (const auto s : vec2)
{
	cout << s << " ";
}
cout << endl;
 
//copy：此算法将输入范围中的元素拷贝到新的序列中，三个参数都是迭代器，返回值为尾迭代器。
auto ret = copy(begin(vec),end(vec),begin(vec2));
for (const auto s : vec2)
{
	cout << s << " ";
}
cout << endl;
 
//replace：将序列中某个元素全部替换为指定的元素（最后一个参数）。
replace(begin(vec2),end(vec2),0,1);
for (const auto s : vec2)
{
	cout << s << " ";
}
cout << endl;
 
//replace_copy：原序列不变，新序列是原序列的拷贝，只是替换了原序列中某个元素为新的元素。
replace_copy(begin(vec2),end(vec2),back_inserter(vec),1,0);
for (const auto s : vec)
{
	cout << s << " ";
}
cout << endl;
 
v_int vec3 = {1,2,1,6,3,4,4,5};
//sort：默认使用升序排序，如果要使用降序则用反向迭代器。
sort(vec3.begin(),vec3.end());
for (const auto s : vec3)
{
	cout << s << " ";
}
cout << endl;
//unique：重排输入范围，使得每个元素只出现一次，返回指向不重复区域之后一个位置的迭代器。
auto end_unique = unique(vec3.begin(),vec3.end());
vec3.erase(end_unique,vec3.end());//删除重复元素。
for (const auto s : vec3)
{
	cout << s << " ";
}
cout << endl;