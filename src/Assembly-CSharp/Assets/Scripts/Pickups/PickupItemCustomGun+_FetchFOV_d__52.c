
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
    ppOVar3 = &(this->fields).__2__current;
    *ppOVar3 = (Object *)this_00;
    func_?(ppOVar3,this_00);
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((this_01 != (MainCameraManager *)0x0) &&
     (pMVar4 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_01,(MethodInfo *)0x0),
     pMVar4 != (MVCameraBase *)0x0)) {
    OStack_5.currentCryptoKey = (int32_t)(pMVar4->klass->vtable).UpdateCamera.methodPtr;
    fVar6 = (float10)(*(code *)(pMVar4->klass->vtable).get_FieldOfView.method)(pMVar4);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit(&OStack_5,(float)fVar6,(MethodInfo *)0x0);
    AVar8 = pOVar7->hiddenValue;
    pBVar9 = pOVar7->hiddenValueOld;
    fVar10 = pOVar7->fakeValue;
    bVar11 = pOVar7->inited;
    uVar12 = *(undefined3 *)&pOVar7->field_0x11;
    if (pPVar2 != (PickupItemCustomGun *)0x0) {
      (pPVar2->fields).initialFOV.currentCryptoKey = pOVar7->currentCryptoKey;
      (pPVar2->fields).initialFOV.hiddenValue = AVar8;
      (pPVar2->fields).initialFOV.hiddenValueOld = pBVar9;
      (pPVar2->fields).initialFOV.fakeValue = fVar10;
      (pPVar2->fields).initialFOV.inited = bVar11;
      *(undefined3 *)&(pPVar2->fields).initialFOV.field_0x11 = uVar12;
      OStack_5.currentCryptoKey = 0;
      func_?(&(pPVar2->fields).initialFOV.hiddenValueOld);
      return 0;
    }
  }
  OStack_5.currentCryptoKey = (int32_t)&UNK_?;
  func_?();
  pcVar13 = (code *)swi(3);
  bVar11 = (*pcVar13)();
  return bVar11;
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

