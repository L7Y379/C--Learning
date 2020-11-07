
v_int vec = {1,2,3,4,5,6};
v_str vec_str1{"A","B","C","D"};
//accumulate��Ԫ����ͣ�ǰ��������ָ�����Ԫ�صķ�Χ�������������Ǻ͵ĳ�ֵ��
auto sum_int = accumulate(vec.cbegin(),vec.cend(),0);
cout << sum_int << endl;
auto sum_str = accumulate(vec_str1.cbegin(),vec_str1.cend(),string(""));//string��ʼ��Ϊ�մ���
cout << sum_str << endl;
l_char lst_char{"A","B","C","D"};
//equal������ȷ�����������Ƿ񱣴���ͬ��ֵ�����ز���ֵ���ڶ�����������Ӧ�ú͵�һ������һ������
cout << equal(vec_str1.cbegin(),vec_str1.cend(),lst_char.cbegin()) << endl;
fill(vec.begin(),vec.begin() + vec.size()/2,0);//fill������һ�Ե�������ʾ��Χ����ָ��ֵ�����Χ�ڵ�Ԫ�ء�
fill_n(vec.begin()+3,3,1);//fill_n����ָ��ֵ�����ָ��Ԫ�ؿ�ʼ�Ķ��Ԫ�ء�
for (const auto s : vec)
{
	cout << s << " ";
}
cout << endl;
 
//back_inserter:ͨ�������������Ԫ����ӵ������С�
v_int vec2;
auto it = back_inserter(vec2);
*it = 10;
fill_n(back_inserter(vec2),5,0);//��vec2��ĩβ������Ԫ�ء�
for (const auto s : vec2)
{
	cout << s << " ";
}
cout << endl;
 
//copy�����㷨�����뷶Χ�е�Ԫ�ؿ������µ������У������������ǵ�����������ֵΪβ��������
auto ret = copy(begin(vec),end(vec),begin(vec2));
for (const auto s : vec2)
{
	cout << s << " ";
}
cout << endl;
 
//replace����������ĳ��Ԫ��ȫ���滻Ϊָ����Ԫ�أ����һ����������
replace(begin(vec2),end(vec2),0,1);
for (const auto s : vec2)
{
	cout << s << " ";
}
cout << endl;
 
//replace_copy��ԭ���в��䣬��������ԭ���еĿ�����ֻ���滻��ԭ������ĳ��Ԫ��Ϊ�µ�Ԫ�ء�
replace_copy(begin(vec2),end(vec2),back_inserter(vec),1,0);
for (const auto s : vec)
{
	cout << s << " ";
}
cout << endl;
 
v_int vec3 = {1,2,1,6,3,4,4,5};
//sort��Ĭ��ʹ�������������Ҫʹ�ý������÷����������
sort(vec3.begin(),vec3.end());
for (const auto s : vec3)
{
	cout << s << " ";
}
cout << endl;
//unique���������뷶Χ��ʹ��ÿ��Ԫ��ֻ����һ�Σ�����ָ���ظ�����֮��һ��λ�õĵ�������
auto end_unique = unique(vec3.begin(),vec3.end());
vec3.erase(end_unique,vec3.end());//ɾ���ظ�Ԫ�ء�
for (const auto s : vec3)
{
	cout << s << " ";
}
cout << endl;