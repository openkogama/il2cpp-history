
/* Void set_SizeEps(Vector3) */

void Assembly-CSharp.dll::RTG::BoxEpsilon::BoxEpsilon_set_SizeEps(BoxEpsilon *this,Vector3 value,MethodInfo *method)

{
  (this->_sizeEps).x = (float)(int)(value._0_8_ & 0x7fffffff7fffffff);
  (this->_sizeEps).y = (float)(int)((value._0_8_ & 0x7fffffff7fffffff) >> 0x20);
  (this->_sizeEps).z = ABS(value.z);
  return;
}

