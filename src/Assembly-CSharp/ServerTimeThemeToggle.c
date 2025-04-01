
/* Void Initialize(BoolAttribute, Action`1[Boolean]) */

void Assembly-CSharp.dll::ServerTimeThemeToggle::ServerTimeThemeToggle_Initialize
               (ServerTimeThemeToggle *this,BoolAttribute *attrib,Action_1_Boolean_ *onChange,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ThemeAttributes__NamedThemeAttribute<bool>__get_Name__);
    func_?(&MethodInfo__ThemeAttributes__ThemeAttribute<bool>__get_Value__);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields)._.onChange;
  *ppAVar1 = onChange;
  func_?(ppAVar1,onChange);
  if ((attrib != (BoolAttribute *)0x0) && (pTVar2 = (this->fields)._.label, pTVar2 != (Text *)0x0))
  {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,(attrib->fields)._.name,
               (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    this_00 = (this->fields)._.toggle;
    if (this_00 != (SettingsToggle *)0x0) {
      SettingsToggle::SettingsToggle_Initialize
                (this_00,(attrib->fields)._._._._Key_k__BackingField,(attrib->fields)._._.value,
                 (MethodInfo *)0x0);
      pTVar2 = (this->fields)._.label;
      if (pTVar2 != (Text *)0x0) {
        pSVar3 = (String *)
                 (*(code *)(pTVar2->klass->vtable).get_text.method)
                           (pTVar2,(pTVar2->klass->vtable).set_text.methodPtr);
        ppSVar4 = &(this->fields).labelText;
        *ppSVar4 = pSVar3;
        func_?(ppSVar4,pSVar3);
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ServerTimeThemeToggle::ServerTimeThemeToggle_Update
               (ServerTimeThemeToggle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    func_?(&StringLiteral__0___1_);
    func_?(&StringLiteral_HH_mm_ss);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    method_00 = (MethodInfo *)MVNetworkGame::MVNetworkGame_get_TimeZone(this_00,(MethodInfo *)0x0);
    DVar1 = mscorlib.dll::System::DateTime::DateTime_AddHours
                      ((DateTime *)&stack0xfffffff0,
                       (double)((ulonglong)(double)(float)method_00 >> 0x20),method_00);
    pTVar2 = (this->fields)._.label;
    arg0 = (this->fields).labelText;
    arg1 = mscorlib.dll::System::DateTime::DateTime_ToString_1
                     ((DateTime *)&stack0xfffffff0,(String *)(DVar1._dateData >> 0x20),
                      (MethodInfo *)0x0);
    pSStack3 =
         mscorlib.dll::System::String::String_Format_1
                   (StringLiteral__0___1_,(Object *)arg0,(Object *)arg1,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      pIStack4 = (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
      pTStack5 = pTVar2;
      (*(code *)(pTVar2->klass->vtable).set_text.method)();
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* ServerTimeThemeToggle() */

void Assembly-CSharp.dll::ServerTimeThemeToggle::ServerTimeThemeToggle__ctor
               (ServerTimeThemeToggle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields).labelText;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::Object]::
  Singleton_1_System_Object___ctor((Singleton_1_System_Object_ *)this,(MethodInfo *)0x0);
  return;
}

