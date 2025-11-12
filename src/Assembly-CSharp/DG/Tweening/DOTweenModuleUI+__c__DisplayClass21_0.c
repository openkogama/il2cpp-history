
/* Vector2 <DOAnchorMin>b__0() */

Vector2 Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass21_0::
        DOTweenModuleUI_c_DisplayClass21_0__DOAnchorMin_b__0
                  (DOTweenModuleUI_c_DisplayClass21_0 *this,MethodInfo *method)

{
  obj = (this->fields).target;
  if (obj == (RectTransform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStackX_8.x = 0.0;
  VStackX_8.y = 0.0;
  if (obj == (RectTransform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  pvVar3 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar3,&VStackX_8);
  return VStackX_8;
}


/* Void <DOAnchorMin>b__1(Vector2) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass21_0::
     DOTweenModuleUI_c_DisplayClass21_0__DOAnchorMin_b__1
               (DOTweenModuleUI_c_DisplayClass21_0 *this,Vector2 x,MethodInfo *method)

{
  obj = (this->fields).target;
  if (obj == (RectTransform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  aVStack_2[0] = x;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                  ,x,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (RectTransform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar3 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar3,aVStack_2);
  return;
}

