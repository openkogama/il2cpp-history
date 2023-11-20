
/* Void Initialize() */

void Assembly-CSharp.dll::GenericStrippingPreventionManager::
     GenericStrippingPreventionManager_Initialize(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&void_MethodInfo__Newtonsoft__Json__Utilities__AotHelper__EnsureList<int>__);
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__AotHelper);
    func_?(&MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__RangeValidator__);
    func_?(&TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
    func_?(&TypeInfo__MV__WorldObject__AntiCheat__ApplicationDesc__RegistryKey);
    cRam_? = '\x01';
  }
  pUVar1 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
           func_?(TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            (pUVar1,MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__RangeValidator__);
  if (pUVar1 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Object::Object_GetType((Object *)pUVar1,(MethodInfo *)0x0);
    if ((TypeInfo__Newtonsoft__Json__Utilities__AotHelper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    Newtonsoft.Json.dll::Newtonsoft::Json::Utilities::AotHelper::AotHelper_EnsureList_1
              (void_MethodInfo__Newtonsoft__Json__Utilities__AotHelper__EnsureList<int>__);
    pUVar1 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

