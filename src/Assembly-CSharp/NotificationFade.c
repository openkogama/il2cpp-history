
/* Void Activate() */

void Assembly-CSharp.dll::NotificationFade::NotificationFade_Activate
               (NotificationFade *this,MethodInfo *method)

{
  (this->fields).pauseAt = (this->fields).duration;
  this_00 = (this->fields).group;
  (this->fields).playing = 1;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    (this->fields).currentTime = 0.0;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::NotificationFade::NotificationFade_OnDisable
               (NotificationFade *this,MethodInfo *method)

{
  if ((this->fields).playing == 0) {
    return;
  }
  (this->fields).playing = 0;
  if ((this->fields).shouldHideWhenDone != 0) {
    this_01 = (this->fields).group;
    if (this_01 == (CanvasGroup *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_01,0.0,(MethodInfo *)0x0);
  }
  (this->fields).currentTime = 0.0;
  if ((this->fields).OnFinished == (Action *)0x0) {
    return;
  }
  if (*(JumpState_OnWallJumpDelegate **)(in_stack_2 + 0x2c) !=
      (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
              (*(JumpState_OnWallJumpDelegate **)(in_stack_2 + 0x2c),in_stack_3);
  }
  this_00 = *(MethodInfo **)(in_stack_2 + 0x14);
  pcVar1 = *(code **)(in_stack_2 + 8);
  piVar4 = *(int **)(in_stack_2 + 0x10);
  method_00 = this_00;
  piVar5 = piVar4;
  if (this_00->flags == 0xffff) {
    func_?(this_00);
  }
  cVar6 = func_?(this_00);
  if (cVar6 == '\0') {
    if ((char)this_00->iflags == '\0') {
      (*pcVar1)();
      return;
    }
  }
  else if ((this_00->flags != 0xffff) &&
          (((piVar4 == (int *)0x0 || ((*(uint *)(*piVar4 + 0xa0) & 0x100) == 0)) &&
           (*(int *)(in_stack_2 + 0xc) != 0)))) {
    cVar6 = func_?(piVar4);
    if (cVar6 != '\0') {
      return;
    }
    pMVar7 = this_00;
    cVar6 = func_?();
    pOVar8 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_00,pMVar7);
    cVar9 = func_?(pOVar8);
    if (cVar6 == '\0') {
      if (cVar9 != '\0') {
        pOVar8 = mscorlib.dll::System::Collections::Generic::
                 KeyValuePair`2[WinningConditionType,System::Object]::
                 KeyValuePair_2_WinningConditionType_System_Object__get_Value
                           ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_00,method_00)
        ;
        func_?(this_00->flags,pOVar8);
        return;
      }
      (**(code **)(*piVar4 + 0xc0 + (uint)this_00->flags * 8))
                (piVar4,*(undefined4 *)(*piVar4 + 0xc4 + (uint)this_00->flags * 8));
      return;
    }
    uVar10 = (uint)this_00->flags;
    if (cVar9 == '\0') {
      puVar11 = (undefined4 *)func_?(*(undefined4 *)(*piVar4 + 0xc4 + uVar10 * 8),this_00);
      (*(code *)*puVar11)(piVar4,puVar11);
      return;
    }
    uVar12 = 0;
    uVar13 = *(ushort *)(*piVar4 + 0xb6);
    pMVar7 = this_00;
    if (uVar13 != 0) {
      do {
        if (*(char **)(*(int *)(*piVar4 + 0x58) + (uint)uVar12 * 8) == this_00->name) {
          iVar14 = *piVar5 +
                  (*(int *)(*(int *)(*piVar5 + 0x58) + 4 + (uint)uVar12 * 8) +
                  method_00->flags + 0x18) * 8;
          goto code_?;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar13);
      uVar10 = (uint)method_00->flags;
      pMVar7 = method_00;
      piVar4 = piVar5;
    }
    piVar5 = piVar4;
    method_00 = pMVar7;
    iVar14 = func_?(piVar5,this_00->name,uVar10);
code_?:
    puVar11 = (undefined4 *)func_?(*(undefined4 *)(iVar14 + 4),method_00);
    (*(code *)*puVar11)(piVar5,puVar11);
    return;
  }
  (*pcVar1)(piVar4,this_00);
  return;
}


/* Void PauseAt(Single) */

void Assembly-CSharp.dll::NotificationFade::NotificationFade_PauseAt
               (NotificationFade *this,float pausePoint,MethodInfo *method)

{
  (this->fields).pauseAt = pausePoint;
  return;
}


/* Void Unpause() */

void Assembly-CSharp.dll::NotificationFade::NotificationFade_Unpause
               (NotificationFade *this,MethodInfo *method)

{
  fVar1 = (this->fields).pauseAt;
  fVar2 = (this->fields).duration;
  if (fVar1 != fVar2) {
    (this->fields).currentTime = fVar1;
    (this->fields).pauseAt = fVar2;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::NotificationFade::NotificationFade_Update
               (NotificationFade *this,MethodInfo *method)

{
  if ((this->fields).playing != 0) {
    fVar1 = (this->fields).currentTime;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar2 + fVar1;
    fVar1 = (this->fields).pauseAt;
    (this->fields).currentTime = fVar2;
    if (fVar1 < fVar2) {
      (this->fields).currentTime = fVar1;
      fVar2 = fVar1;
    }
    this_00 = (this->fields).textVisibilityCurve;
    this_01 = (this->fields).group;
    if ((this_00 == (AnimationCurve *)0x0) ||
       (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (this_00,fVar2 / (this->fields).duration,(MethodInfo *)0x0),
       this_01 == (CanvasGroup *)0x0)) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_01,fVar1,(MethodInfo *)0x0);
    if ((this->fields).duration <= (this->fields).currentTime) {
      NotificationFade_OnDisable(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* NotificationFade() */

void Assembly-CSharp.dll::NotificationFade::NotificationFade__ctor
               (NotificationFade *this,MethodInfo *method)

{
  (this->fields).duration = 1.0;
  (this->fields).playing = 1;
  (this->fields).pauseAt = 1.0;
  (this->fields).shouldHideWhenDone = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_IsPaused() */

bool Assembly-CSharp.dll::NotificationFade::NotificationFade_get_IsPaused
               (NotificationFade *this,MethodInfo *method)

{
  if ((this->fields).pauseAt == (this->fields).duration) {
    return 0;
  }
  return 1;
}


/* Void set_ShouldHideWhenDone(Boolean) */

void Assembly-CSharp.dll::NotificationFade::NotificationFade_set_ShouldHideWhenDone
               (NotificationFade *this,bool value,MethodInfo *method)

{
  (this->fields).shouldHideWhenDone = value;
  return;
}

