
/* Void Initialize() */

void Assembly-CSharp.dll::GenericStrippingPreventionManager::
     GenericStrippingPreventionManager_Initialize(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<int>__CollectionWrapper_System__Collections__IList_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__CollectionWrapper<int>);
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__RangeValidator__);
    func_?(&TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
    func_?(&TypeInfo__MV__WorldObject__AntiCheat__ApplicationDesc__RegistryKey);
    cRam_? = '\x01';
  }
  pTVar1 = (TweenRunner_1_FloatTween_ *)
           func_?(TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
  if (pTVar1 != (TweenRunner_1_FloatTween_ *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor
              (pTVar1,MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__RangeValidator__)
    ;
    mscorlib.dll::System::Object::Object_GetType((Object *)pTVar1,(MethodInfo *)0x0);
    uStack_2 = 2;
    this = (Object *)func_?(TypeInfo__System__Int32,&uStack_2);
    listType = mscorlib.dll::System::Object::Object_GetType(this,(MethodInfo *)0x0);
    list = Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_CreateGenericList
                     (listType,(MethodInfo *)0x0);
    this_00 = (CollectionWrapper_1_System_Int32_ *)
              func_?(TypeInfo__Newtonsoft__Json__Utilities__CollectionWrapper<int>);
    if (this_00 != (CollectionWrapper_1_System_Int32_ *)0x0) {
      Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
      CollectionWrapper_1_System_Int32___ctor_1
                (this_00,list,
                 MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<int>__CollectionWrapper_System__Collections__IList_
                );
      mscorlib.dll::System::Object::Object_GetType((Object *)this_00,(MethodInfo *)0x0);
      pTVar1 = (TweenRunner_1_FloatTween_ *)
               func_?(TypeInfo__MV__WorldObject__AntiCheat__ApplicationDesc__RegistryKey);
      if (pTVar1 != (TweenRunner_1_FloatTween_ *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
        TweenRunner_1_FloatTween___ctor(pTVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

