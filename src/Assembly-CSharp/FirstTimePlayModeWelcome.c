
/* Void Start() */

void Assembly-CSharp.dll::FirstTimePlayModeWelcome::FirstTimePlayModeWelcome_Start
               (FirstTimePlayModeWelcome *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  str0 = TM::TM__(StringLiteral_Welcome_,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      iVar1 = GamePointGainEffect::GamePointGainEffect_get_ID
                        ((GamePointGainEffect *)this_01,(MethodInfo *)0x0);
      if (iVar1 != 0) {
        str2 = *(String **)(iVar1 + 0xc);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar2 = ::StringLiteral__;
        pSStack3 =
             mscorlib.dll::System::String::String_Concat_3
                       (str0,::StringLiteral__,str2,(MethodInfo *)0x0);
        piStack4 = *(int **)&(pSVar2->fields).start_char;
        if (piStack4 != (int *)0x0) {
          uStack5 = *(undefined4 *)(*piStack4 + 0x30c);
          (**(code **)(*piStack4 + 0x308))();
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

