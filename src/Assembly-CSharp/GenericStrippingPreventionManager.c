
/* Void Initialize() */

void Assembly-CSharp.dll::GenericStrippingPreventionManager::
     GenericStrippingPreventionManager_Initialize(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  this = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
         func_?(TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
  TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
  TweenRunner_1_T_Start_c_Iterator0_FloatTween___ctor
            (this,MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__RangeValidator__);
  if (this != (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0) {
    mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    uStack_1 = 2;
    this_00 = (Object *)func_?(TypeInfo__System__Int32,&uStack_1);
    if (this_00 != (Object *)0x0) {
      listType = mscorlib.dll::System::Object::Object_GetType(this_00,(MethodInfo *)0x0);
      puVar2 = (undefined4 *)func_?(this_00);
      uStack_1 = *puVar2;
      list = Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils_CreateGenericList
                       (listType,(MethodInfo *)0x0);
      this_01 = (CollectionWrapper_1_System_Int32_ *)
                func_?(TypeInfo__Newtonsoft__Json__Utilities__CollectionWrapper<int>);
      Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
      CollectionWrapper_1_System_Int32___ctor
                (this_01,list,
                 MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<int>__CollectionWrapper_System__Collections__IList_
                );
      if (this_01 != (CollectionWrapper_1_System_Int32_ *)0x0) {
        mscorlib.dll::System::Object::Object_GetType((Object *)this_01,(MethodInfo *)0x0);
        this_02 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
                  func_?(TypeInfo__MV__WorldObject__AntiCheat__ApplicationDesc__RegistryKey
                                 );
        WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
        WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

