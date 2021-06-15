
/* IAsyncResult BeginInvoke(VoxelHit, Ray, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate_BeginInvoke
          (BulletThrowingStar_OnHitDelegate *this,VoxelHit hit,Ray lineOfFire,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uVar3 = func_?(TypeInfo__VoxelHit,&stack0x00000008);
  uStack_2 = CONCAT44(uStack_2._4_4_,uVar3);
  uVar3 = func_?(TypeInfo__UnityEngine__Ray,(undefined1 *)((int)&hit.interactionFlags + 4))
  ;
  uStack_2 = CONCAT44(uVar3,(undefined4)uStack_2);
  pIVar4 = (IAsyncResult *)func_?(this,&uStack_2,lineOfFire.m_Direction.z,callback);
  return pIVar4;
}


/* Void Invoke(VoxelHit, Ray) */

void Assembly-CSharp.dll::BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate_Invoke
               (BulletThrowingStar_OnHitDelegate *this,VoxelHit hit,Ray lineOfFire,
               MethodInfo *method)

{
  this_00 = (BulletThrowingStar_OnHitDelegate *)(this->fields)._.prev;
  if (this_00 != (BulletThrowingStar_OnHitDelegate *)0x0) {
    BulletThrowingStar_OnHitDelegate_Invoke(this_00,hit,lineOfFire,unaff_EDI);
  }
  method_00 = (this->fields)._._.method;
  pOVar1 = (this->fields)._._.m_target;
  if ((short)method_00[5].key == -1) {
    func_?();
  }
  cVar2 = func_?();
  uVar3 = in_stack_4;
  if (cVar2 == '\0') {
    in_stack_4 = (Object *)hit.normal.x;
    if (*(char *)((int)&method_00[5].key + 2) == '\x02') {
      (*(code *)hit.point.z)();
      return;
    }
  }
  else if (((short)method_00[5].key != -1) &&
          (((pOVar1 == (Object *)0x0 || (((pOVar1->klass->_1).token & 0x100) == 0)) &&
           ((this->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar2 = func_?();
    uVar3 = in_stack_4;
    if (cVar2 != '\0') {
      return;
    }
    if (pOVar1 == (Object *)0x0) {
      in_stack_4 = (Object *)hit.normal.x;
      (*(code *)hit.point.z)(uVar3,hit.point.x);
      return;
    }
    cVar2 = func_?();
    mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::Object]
    ::KeyValuePair_2_WinningConditionType_System_Object__get_Value
              (method_00,(MethodInfo *)method_00);
    cVar5 = func_?();
    if (cVar2 == '\0') {
      if (cVar5 != '\0') {
        mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
        Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                  (method_00,(MethodInfo *)lineOfFire.m_Direction.y);
        in_stack_4 = pOVar1;
        func_?();
        return;
      }
      in_stack_4 = (Object *)hit.point.x;
      func_?((short)method_00[5].key);
      return;
    }
    if (cVar5 != '\0') {
      in_stack_4 = (Object *)hit.point.x;
      func_?(method_00);
      return;
    }
    in_stack_4 = (Object *)hit.point.x;
    func_?(method_00);
    return;
  }
  in_stack_4 = (Object *)hit.normal.x;
  (*(code *)hit.point.z)(pOVar1,uVar3,hit.point.x);
  return;
}

