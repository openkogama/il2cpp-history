
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun+<FetchFOV>d__52::
     PickupItemCustomGun_FetchFOV_d_52_MoveNext
               (PickupItemCustomGun_FetchFOV_d_52 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__UnityEngine__WaitForSecondsRealtime);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pPVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    this_00 = (WaitForSecondsRealtime *)
              func_?(TypeInfo__UnityEngine__WaitForSecondsRealtime);
    UnityEngine.CoreModule.dll::UnityEngine::WaitForSecondsRealtime::WaitForSecondsRealtime__ctor
              (this_00,0.1,(MethodInfo *)0x0);
    (this->fields).__2__current = (Object *)this_00;
    func_?(&(this->fields).__2__current,this_00);
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((this_01 != (MainCameraManager *)0x0) &&
     (pMVar3 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_01,(MethodInfo *)0x0),
     pMVar3 != (MVCameraBase *)0x0)) {
    OStack_4.currentCryptoKey = (int32_t)(pMVar3->klass->vtable).UpdateCamera.methodPtr;
    fVar5 = (float10)(*(code *)(pMVar3->klass->vtable).get_FieldOfView.method)(pMVar3);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit(&OStack_4,(float)fVar5,(MethodInfo *)0x0);
    AVar7 = pOVar6->hiddenValue;
    pBVar8 = pOVar6->hiddenValueOld;
    fVar9 = pOVar6->fakeValue;
    bVar10 = pOVar6->inited;
    uVar11 = *(undefined3 *)&pOVar6->field_0x11;
    if (pPVar2 != (PickupItemCustomGun *)0x0) {
      (pPVar2->fields).initialFOV.currentCryptoKey = pOVar6->currentCryptoKey;
      (pPVar2->fields).initialFOV.hiddenValue = AVar7;
      (pPVar2->fields).initialFOV.hiddenValueOld = pBVar8;
      (pPVar2->fields).initialFOV.fakeValue = fVar9;
      (pPVar2->fields).initialFOV.inited = bVar10;
      *(undefined3 *)&(pPVar2->fields).initialFOV.field_0x11 = uVar11;
      OStack_4.currentCryptoKey = 0;
      func_?(&(pPVar2->fields).initialFOV.hiddenValueOld);
      return 0;
    }
  }
  OStack_4.currentCryptoKey = (int32_t)&UNK_?;
  func_?();
  pcVar12 = (code *)swi(3);
  bVar10 = (*pcVar12)();
  return bVar10;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun+<FetchFOV>d__52::
     PickupItemCustomGun_FetchFOV_d_52_System_Collections_IEnumerator_Reset
               (PickupItemCustomGun_FetchFOV_d_52 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Assets__Scripts__Pickups__PickupItemCustomGun___FetchFOV_d__52__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

