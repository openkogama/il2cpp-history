
/* Vector2 <DOTiling>b__0() */

Vector2 Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion+<>c__DisplayClass9_0::
        DOTweenModuleUnityVersion_c_DisplayClass9_0__DOTiling_b__0
                  (DOTweenModuleUnityVersion_c_DisplayClass9_0 *this,MethodInfo *method)

{
  obj = (this->fields).target;
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  iVar3 = (this->fields).propertyID;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_4.x = 0.0;
  VStack_4.y = 0.0;
  uStack_5 = 0;
  pvVar6 = (obj->fields)._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar6,iVar3,&VStack_4);
  return VStack_4;
}


/* Void <DOTiling>b__1(Vector2) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion+<>c__DisplayClass9_0::
     DOTweenModuleUnityVersion_c_DisplayClass9_0__DOTiling_b__1
               (DOTweenModuleUnityVersion_c_DisplayClass9_0 *this,Vector2 x,MethodInfo *method)

{
  obj = (this->fields).target;
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = (this->fields).propertyID;
  aVStack_3[0] = x;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                  ,iVar2,x,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar4 = (obj->fields)._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,iVar2,aVStack_3);
  return;
}

