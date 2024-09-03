
/* Void set_SizeEps(Vector3) */

void Assembly-CSharp.dll::RTG::BoxEpsilon::BoxEpsilon_set_SizeEps
               (BoxEpsilon *this,Vector3 value,MethodInfo *method)

{
  uVar1 = (uint)value.y & _UNK_?;
  fVar2 = (float)((uint)value.z & _UNK_?);
  (this->_sizeEps).x = (float)((uint)value.x & _UNK_?);
  (this->_sizeEps).y = (float)uVar1;
  (this->_sizeEps).z = fVar2;
  return;
}

