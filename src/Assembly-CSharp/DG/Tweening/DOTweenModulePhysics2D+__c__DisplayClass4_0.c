
/* Void <DOJump>b__2() */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics2D+<>c__DisplayClass4_0::
     DOTweenModulePhysics2D_c_DisplayClass4_0__DOJump_b__2
               (DOTweenModulePhysics2D_c_DisplayClass4_0 *this,MethodInfo *method)

{
  this_00 = (this->fields).target;
  if (this_00 != (Rigidbody2D *)0x0) {
    VVar1 = UnityEngine.Physics2DModule.dll::UnityEngine::Rigidbody2D::Rigidbody2D_get_position
                      (this_00,(MethodInfo *)0x0);
    fStackX_c = VVar1.y;
    (this->fields).startPosY = fStackX_c;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector2 <DOJump>b__3() */

Vector2 Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics2D+<>c__DisplayClass4_0::
        DOTweenModulePhysics2D_c_DisplayClass4_0__DOJump_b__3
                  (DOTweenModulePhysics2D_c_DisplayClass4_0 *this,MethodInfo *method)

{
  obj = (this->fields).target;
  if (obj == (Rigidbody2D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Rigidbody2D>_UnityEngine__Rigidbody2D_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStackX_8.x = 0.0;
  VStackX_8.y = 0.0;
  if (obj == (Rigidbody2D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  pvVar3 = (obj->fields)._._.m_CachedPtr;
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


/* Void <DOJump>b__4(Vector2) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics2D+<>c__DisplayClass4_0::
     DOTweenModulePhysics2D_c_DisplayClass4_0__DOJump_b__4
               (DOTweenModulePhysics2D_c_DisplayClass4_0 *this,Vector2 x,MethodInfo *method)

{
  obj = (this->fields).target;
  if (obj == (Rigidbody2D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  aVStack_2[0] = x;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Rigidbody2D>_UnityEngine__Rigidbody2D_
                  ,x,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Rigidbody2D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar3 = (obj->fields)._._.m_CachedPtr;
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


/* Void <DOJump>b__5() */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics2D+<>c__DisplayClass4_0::
     DOTweenModulePhysics2D_c_DisplayClass4_0__DOJump_b__5
               (DOTweenModulePhysics2D_c_DisplayClass4_0 *this,MethodInfo *method)

{
  if ((this->fields).offsetYSet == 0) {
    pSVar1 = (this->fields).s;
    (this->fields).offsetYSet = 1;
    if (pSVar1 == (Sequence *)0x0) goto code_?;
    fVar2 = (this->fields).endValue.y;
    if ((pSVar1->fields)._._isRelative_k__BackingField == 0) {
      fVar2 = fVar2 - (this->fields).startPosY;
    }
    (this->fields).offsetY = fVar2;
  }
  pRVar3 = (this->fields).target;
  if (pRVar3 != (Rigidbody2D *)0x0) {
    VVar4 = UnityEngine.Physics2DModule.dll::UnityEngine::Rigidbody2D::Rigidbody2D_get_position
                      (pRVar3,(MethodInfo *)0x0);
    fVar2 = (this->fields).offsetY;
    lifetimePercentage =
         DOTween.dll::DG::Tweening::TweenExtensions::TweenExtensions_ElapsedPercentage
                   ((this->fields).yTween,1,(MethodInfo *)0x0);
    fVar2 = DOTween.dll::DG::Tweening::DOVirtual::DOVirtual_EasedValue
                      (0.0,fVar2,lifetimePercentage,Ease__Enum_OutQuad,(MethodInfo *)0x0);
    pRVar3 = (this->fields).target;
    if (pRVar3 != (Rigidbody2D *)0x0) {
      auStack_5[0] = CONCAT44(fVar2 + VVar4.y,VVar4.x);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Rigidbody2D>_UnityEngine__Rigidbody2D_
                      ,auStack_5[0],0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pRVar3 == (Rigidbody2D *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pvVar7 = (pRVar3->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar3,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar7,auStack_5);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

