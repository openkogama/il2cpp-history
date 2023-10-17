
/* Void Start() */

void Assembly-CSharp.dll::FirstTimePlayModeWelcome::FirstTimePlayModeWelcome_Start
               (FirstTimePlayModeWelcome *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Welcome_);
    cRam_? = '\x01';
  }
  str0 = TM::TM__(StringLiteral_Welcome_,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (pUVar2 = (pMVar1->fields)._._UserProfileData_k__BackingField,
       pUVar2 != (UserProfileData *)0x0)) {
      str2 = (pUVar2->fields).UserName;
      pSStack3 =
           mscorlib.dll::System::String::String_Concat_4
                     (str0,::StringLiteral__,str2,(MethodInfo *)0x0);
      piStack4 = *(int **)&(str2->fields)._firstChar;
      if (piStack4 != (int *)0x0) {
        puStack5 = *(undefined **)(*piStack4 + 0x318);
        (**(code **)(*piStack4 + 0x314))();
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

