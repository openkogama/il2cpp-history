
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun+<FetchFOV>d__54::
     PickupItemCustomGun_FetchFOV_d_54_MoveNext
               (PickupItemCustomGun_FetchFOV_d_54 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pPVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    pOVar3 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSecondsRealtime);
    bVar4 = iRam_? != 0;
    *(undefined4 *)((longlong)&pOVar3[1].klass + 4) = 0xbf800000;
    *(undefined4 *)&pOVar3[1].klass = 0x3dcccccd;
    (this->fields).__2__current = pOVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
  pMVar9 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((((pMVar9 != (MainCameraManager *)0x0) &&
       (pMVar10 = (pMVar9->fields).cameraController, pMVar10 != (MVCameraController *)0x0)) &&
      (this_00 = (pMVar10->fields).cameraStack, this_00 != (MVCameraController_CameraStack *)0x0)) &&
     (pMVar11 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                          (this_00,(MethodInfo *)0x0), pMVar11 != (MVCameraBase *)0x0)) {
    value_00 = (float)(*(pMVar11->klass->vtable).get_FieldOfView.methodPtr)(pMVar11);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aOStack_12[0].fakeValue = 0.0;
    aOStack_12[0].inited = 0;
    aOStack_12[0]._21_3_ = 0;
    aOStack_12[0].currentCryptoKey = 0;
    aOStack_12[0].hiddenValue.b1 = 0;
    aOStack_12[0].hiddenValue.b2 = 0;
    aOStack_12[0].hiddenValue.b3 = 0;
    aOStack_12[0].hiddenValue.b4 = 0;
    aOStack_12[0].hiddenValueOld = (Byte__Array *)0x0;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_InternalEncrypt(value_00,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
    ObscuredFloat__ctor(aOStack_12,value,(MethodInfo *)0x0);
    bVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
            ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    if (bVar13 != 0) {
      aOStack_12[0].fakeValue = value_00;
    }
    if (pPVar2 != (PickupItemCustomGun *)0x0) {
      bVar4 = iRam_? == 0;
      (pPVar2->fields).initialFOV.currentCryptoKey = aOStack_12[0].currentCryptoKey;
      (pPVar2->fields).initialFOV.hiddenValue = aOStack_12[0].hiddenValue;
      (pPVar2->fields).initialFOV.hiddenValueOld = aOStack_12[0].hiddenValueOld;
      (pPVar2->fields).initialFOV.fakeValue = aOStack_12[0].fakeValue;
      (pPVar2->fields).initialFOV.inited = aOStack_12[0].inited;
      *(undefined3 *)&(pPVar2->fields).initialFOV.field_0x15 = aOStack_12[0]._21_3_;
      if (bVar4) {
        return 0;
      }
      uVar5 = (uint)((ulonglong)&(pPVar2->fields).initialFOV.hiddenValueOld >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
      return 0;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  bVar13 = (*pcVar14)();
  return bVar13;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun+<FetchFOV>d__54::
     PickupItemCustomGun_FetchFOV_d_54_System_Collections_IEnumerator_Reset
               (PickupItemCustomGun_FetchFOV_d_54 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__Assets__Scripts__Pickups__PickupItemCustomGun___FetchFOV_d__54__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

