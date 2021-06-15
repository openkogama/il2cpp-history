
/* Void Awake() */

void Assembly-CSharp.dll::ServerTimeThemeToggle::ServerTimeThemeToggle_Awake
               (ServerTimeThemeToggle *this,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,0,(MethodInfo *)0x0);
  return;
}


/* Void Initialize(BoolAttribute, Action`1[Boolean]) */

void Assembly-CSharp.dll::ServerTimeThemeToggle::ServerTimeThemeToggle_Initialize
               (ServerTimeThemeToggle *this,BoolAttribute *attrib,Action_1_Boolean_ *onChange,
               MethodInfo *method)

{
  ThemeToggle::ThemeToggle_Initialize((ThemeToggle *)this,attrib,onChange,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._.label;
  if (pTVar1 != (Text *)0x0) {
    pSVar2 = (String *)(*(code *)(pTVar1->klass->vtable).get_text.method)();
    (this->fields).labelText = pSVar2;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ServerTimeThemeToggle::ServerTimeThemeToggle_Update
               (ServerTimeThemeToggle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow
                     ((DateTime *)&stack0xffffffd8,(MethodInfo *)0x0);
  uStack_2 = (undefined4)(pDVar1->ticks)._ticks;
  uStack_3 = *(undefined4 *)((int)&(pDVar1->ticks)._ticks + 4);
  iStack_4 = pDVar1->kind;
  uStack_5 = *(undefined4 *)&pDVar1->field_0xc;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    fStack_6 = MVNetworkGame::MVNetworkGame_get_TimeZone(this_00,(MethodInfo *)0x0);
    puVar7 = (undefined4 *)func_?(&stack0xffffffd8,&uStack_2,(double)fStack_6);
    uStack_2 = *puVar7;
    uStack_3 = puVar7[1];
    iStack_4 = puVar7[2];
    uStack_5 = puVar7[3];
    pTVar8 = (this->fields)._.label;
    arg0 = (this->fields).labelText;
    arg1 = (Object *)func_?(&uStack_2,StringLiteral_HH_mm_ss,0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    mscorlib.dll::System::String::String_Format_1
              (StringLiteral__0___1_,(Object *)arg0,arg1,(MethodInfo *)0x0);
    if (pTVar8 != (Text *)0x0) {
      (*(code *)(pTVar8->klass->vtable).set_text.method)();
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* ServerTimeThemeToggle() */

void Assembly-CSharp.dll::ServerTimeThemeToggle::ServerTimeThemeToggle__ctor
               (ServerTimeThemeToggle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  (this->fields).labelText = TypeInfo__System__String->static_fields->Empty;
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

