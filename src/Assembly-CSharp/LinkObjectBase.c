
/* Boolean UpdatePositions(Vector3, Vector3) */

bool Assembly-CSharp.dll::LinkObjectBase::LinkObjectBase_UpdatePositions
               (LinkObjectBase *this,Vector3 newStartPos,Vector3 newEndPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).startPos.z;
  uVar2._0_4_ = (this->fields).startPos.x;
  fStack_3 = (this->fields).startPos.y;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  fVar4 = newStartPos.z;
  a.z = fVar1;
  a.x = (float)uVar2;
  a.y = fStack_3;
  b.y = newStartPos.y;
  b.x = newStartPos.x;
  b.z = newStartPos.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
            ((Vector3 *)&stack0xfffffff0,a,b,(MethodInfo *)0x0);
  fVar5 = (float10)func_?(&stack0xffffffe4,0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Approximately
                    ((float)fVar5,0.0,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    (this->fields).startPos.x = newStartPos.x;
    (this->fields).startPos.y = newStartPos.y;
    (this->fields).startPos.z = fVar4;
  }
  uVar2._0_4_ = (this->fields).endPos.z;
  uVar7 = (this->fields).endPos.x;
  uVar8 = (this->fields).endPos.y;
  newStartPos.y = (float)uVar7;
  newStartPos.z = (float)uVar8;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a_00.y = newStartPos.z;
  a_00.x = newStartPos.y;
  a_00.z = (float)uVar2;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
            (&newStartPos,a_00,newEndPos,(MethodInfo *)0x0);
  fVar5 = (float10)func_?();
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    newStartPos.z = (float)&UNK_?;
    func_?();
  }
  newStartPos.z = 0.0;
  newStartPos.x = (float)&UNK_?;
  newStartPos.y = (float)fVar5;
  bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Approximately
                    ((float)fVar5,0.0,(MethodInfo *)0x0);
  if (bVar9 == 0) {
    (this->fields).endPos.x = (float)(int)((ulonglong)(uint)newEndPos.y << 0x20);
    (this->fields).endPos.y = (float)(int)(((ulonglong)(uint)newEndPos.y << 0x20) >> 0x20);
    (this->fields).endPos.z = newEndPos.z;
    return 1;
  }
  return bVar6 == 0;
}

