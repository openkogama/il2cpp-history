
/* Void <>m__0(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase+<OnHealthChange>c__AnonStorey0::
     MVVehicleBase_LocalObjectsBase_OnHealthChange_c_AnonStorey0___m__0
               (MVVehicleBase_LocalObjectsBase_OnHealthChange_c_AnonStorey0 *this,
               MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    pMVar1 = wo->klass;
    bVar2 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
    bVar3 = (pMVar1->_1).naturalAligment;
    if ((bVar3 < bVar2) ||
       ((MVAvatarLocal__Class *)(pMVar1->_1).typeHierarchy[bVar2 - 1] != TypeInfo__MVAvatarLocal)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pMVar5 = (MVWorldObjectClient *)0x0;
    if (bVar4) {
      pMVar5 = wo;
    }
    if (pMVar5 != (MVWorldObjectClient *)0x0) {
      bVar2 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if ((bVar3 < bVar2) ||
         ((MVAvatarLocal__Class *)(pMVar1->_1).typeHierarchy[bVar2 - 1] != TypeInfo__MVAvatarLocal))
      {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pMVar6 = (MVAvatarLocal *)0x0;
      if (bVar4) {
        pMVar6 = (MVAvatarLocal *)wo;
      }
      if (pMVar6 == (MVAvatarLocal *)0x0) {
        func_?(wo,TypeInfo__MVAvatarLocal);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->fields).localAvatar = pMVar6;
    }
  }
  return;
}

