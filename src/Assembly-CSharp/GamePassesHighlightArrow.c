
/* Void OnEnable() */

void Assembly-CSharp.dll::GamePassesHighlightArrow::GamePassesHighlightArrow_OnEnable
               (GamePassesHighlightArrow *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  (this->fields).moveStartTime = fVar3;
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GamePassesHighlightArrow::GamePassesHighlightArrow_Start
               (GamePassesHighlightArrow *this,MethodInfo *method)

{
  obj = (this->fields).transformToMove;
  if (obj == (RectTransform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  fStack_3 = 0.0;
  pvVar4 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
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
  (*pcRam_?)(pvVar4,&uStack_2);
  (this->fields).startPosition.x = (float)(undefined4)uStack_2;
  (this->fields).startPosition.y = (float)uStack_2._4_4_;
  (this->fields).startPosition.z = fStack_3;
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
  fVar6 = (float)(*pcRam_?)();
  (this->fields).moveStartTime = fVar6;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GamePassesHighlightArrow::GamePassesHighlightArrow_Update
               (GamePassesHighlightArrow *this,MethodInfo *method)

{
  pRVar1 = (this->fields).transformToMove;
  if (pRVar1 == (RectTransform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (pRVar1->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar3);
  fVar5 = (this->fields).startPosition.y;
  fVar6 = (this->fields).moveAmount;
  pAVar7 = (this->fields).moveCurve;
  uStack_8 = 0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar9 = (float)(*pcRam_?)();
  if (pAVar7 != (AnimationCurve *)0x0) {
    pvVar3 = (pAVar7->fields).m_Ptr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar7,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar10 = (this->fields).moveStartTime;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar11 = (float)(*pcRam_?)(pvVar3,fVar9 - fVar10);
    pAVar7 = (this->fields).moveCurve;
    fVar9 = (this->fields).moveAmount;
    fVar10 = (this->fields).directionX;
    fVar12 = (this->fields).startPosition.x;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar13 = (float)(*pcRam_?)();
    if (pAVar7 != (AnimationCurve *)0x0) {
      pvVar3 = (pAVar7->fields).m_Ptr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar7,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar14 = (this->fields).moveStartTime;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar13 = (float)(*pcRam_?)(pvVar3,fVar13 - fVar14);
      pRVar1 = (this->fields).transformToMove;
      if (pRVar1 != (RectTransform *)0x0) {
        uStack_8 = CONCAT44(fVar11 * fVar6 * fVar10 + fVar5,
                             fVar13 * fVar9 * (this->fields).directionY + fVar12);
        uStack_15 = 0;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (pRVar1->fields)._._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar3,&uStack_8);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

