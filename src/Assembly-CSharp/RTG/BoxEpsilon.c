
/* Void set_SizeEps(Vector3) */

void Assembly-CSharp.dll::RTG::BoxEpsilon::BoxEpsilon_set_SizeEps
               (BoxEpsilon *this,Vector3 *value,MethodInfo *method)

{
  uVar1 = value->y;
  uVar2 = value->x;
  fVar3 = (float)((uint)value->z & _UNK_?);
  uVar4 = uVar1 & _UNK_?;
  (this->_sizeEps).x = (float)(uVar2 & _UNK_?);
  (this->_sizeEps).y = (float)uVar4;
  (this->_sizeEps).z = fVar3;
  return;
}

