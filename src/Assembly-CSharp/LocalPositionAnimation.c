
/* Void Awake() */

void Assembly-CSharp.dll::LocalPositionAnimation::LocalPositionAnimation_Awake
               (LocalPositionAnimation *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
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
  pvVar4 = (obj->fields)._._.m_CachedPtr;
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
  uVar6 = (this->fields).deltaMovement.x;
  uVar7 = (this->fields).deltaMovement.y;
  fVar8 = uStack_2._4_4_;
  fVar9 = (float)uStack_2 + (float)uVar6;
  (this->fields).startPos.x = (float)uStack_2;
  (this->fields).startPos.y = uStack_2._4_4_;
  fVar10 = (this->fields).deltaMovement.z;
  (this->fields).startPos.z = fStack_3;
  (this->fields).endPos.x = fVar9;
  (this->fields).endPos.y = fVar8 + (float)uVar7;
  (this->fields).endPos.z = fStack_3 + fVar10;
  (this->fields).animatedTime = 0.0;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::LocalPositionAnimation::LocalPositionAnimation_Update
               (LocalPositionAnimation *this,MethodInfo *method)

{
  fVar1 = (this->fields).animatedTime;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  fVar1 = (float)FUN_?(fVar4 + fVar1,(this->fields).animationTime);
  (this->fields).animatedTime = fVar1;
  fVar1 = (fVar1 / (this->fields).animationTime) * _UNK_?;
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  uVar5 = (this->fields).endPos.x;
  uVar6 = (this->fields).endPos.y;
  uStack_7._0_4_ = (this->fields).startPos.x;
  uStack_7._4_4_ = (this->fields).startPos.y;
  fVar1 = (float)FUN_?(fVar1);
  fVar1 = (fVar1 + _UNK_?) * _UNK_?;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (_UNK_? < fVar1) {
    fVar1 = _UNK_?;
  }
  fStack_8 = ((this->fields).endPos.z - (this->fields).startPos.z) * fVar1 +
              (this->fields).startPos.z;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_7 = CONCAT44(((float)uVar6 - uStack_7._4_4_) * fVar1 + uStack_7._4_4_,
                       ((float)uVar5 - (float)uStack_7) * fVar1 + (float)uStack_7);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar9 = (obj->fields)._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar9,&uStack_7);
  return;
}

