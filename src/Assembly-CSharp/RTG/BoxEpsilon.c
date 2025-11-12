
/* Void set_SizeEps(Vector3) */

void Assembly-CSharp.dll::RTG::BoxEpsilon::BoxEpsilon_set_SizeEps(BoxEpsilon *this,Vector3 *value,MethodInfo *method)

{
  uVar1 = value->y;
  uVar2 = value->x;
  fVar3 = value->z;
  uVar4 = CONCAT44(uVar1,uVar2);
  (this->_sizeEps).x = (float)(int)(uVar4 & 0x7fffffff7fffffff);
  (this->_sizeEps).y = (float)(int)((uVar4 & 0x7fffffff7fffffff) >> 0x20);
  (this->_sizeEps).z = ABS(fVar3);
  return;
}

