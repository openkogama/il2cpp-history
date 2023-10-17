
/* Void Initialize(Vector3, Transform, Transform) */

void Assembly-CSharp.dll::ObjectiveArrow::ObjectiveArrow_Initialize
               (ObjectiveArrow *this,Vector3 startPos,Transform *dropOff,Transform *pickup,
               MethodInfo *method)

{
  (this->fields).startPos.x = (float)(int)startPos._0_8_;
  (this->fields).startPos.y = (float)(int)((ulonglong)startPos._0_8_ >> 0x20);
  (this->fields).startPos.z = startPos.z;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
    fVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    (this->fields).initialScale.x = pVVar2->x;
    (this->fields).initialScale.y = fVar4;
    (this->fields).initialScale.z = fVar5;
    (this->fields).targetDropOff = dropOff;
    func_?(&(this->fields).targetDropOff);
    (this->fields).targetPickup = pickup;
    func_?(&(this->fields).targetPickup,pickup);
    (this->fields).initialHeight = (this->fields).arrowOffset.y;
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar6 != (MainCameraManager *)0x0) &&
       (this_00 = (pMVar6->fields).mainCamera, this_00 != (Camera *)0x0)) {
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                        (this_00,(MethodInfo *)0x0);
      pTVar1 = (this->fields).targetDropOff;
      (this->fields).farPlane = fVar5;
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_3,pTVar1,(MethodInfo *)0x0);
        uStack_7._0_4_ = pVVar2->x;
        uStack_7._4_4_ = pVVar2->y;
        fStack_8 = pVVar2->z;
        pTVar1 = (this->fields).targetPickup;
        if (pTVar1 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
          uVar9 = pVVar2->x;
          uVar10 = pVVar2->y;
          VStack_3.z = fStack_8 - pVVar2->z;
          VStack_3.y = uStack_7._4_4_ - (float)uVar10;
          VStack_3.x = (float)uStack_7 - (float)uVar9;
          fStack_8 = VStack_3.z;
          fVar11 = (float10)func_?(&VStack_3);
          fVar4 = (this->fields).farPlane - _UNK_?;
          fVar5 = (float)fVar11;
          if (fVar4 <= (float)fVar11) {
            fVar5 = fVar4;
          }
          ObjectiveArrow_SetArrowBobbing(this,fVar5,(MethodInfo *)0x0);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          VStack_3.x = (this->fields).arrowOffset.x;
          VStack_3.y = (this->fields).arrowOffset.y;
          VStack_3.z = (this->fields).arrowOffset.z;
          uStack_7 = CONCAT44(startPos.y + VStack_3.y,startPos.x + VStack_3.x);
          fStack_8 = startPos.z + VStack_3.z;
          if (pTVar1 != (Transform *)0x0) {
            value.y = startPos.y + VStack_3.y;
            value.x = startPos.x + VStack_3.x;
            value.z = fStack_8;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar1,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void MoveInDirection(Vector3, Single) */

void Assembly-CSharp.dll::ObjectiveArrow::ObjectiveArrow_MoveInDirection
               (ObjectiveArrow *this,Vector3 dir,float dist,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).targetPickup;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uVar3._0_4_ = pVVar1->x;
    uVar3._4_4_ = pVVar1->y;
    fVar4 = pVVar1->z;
    puVar5 = (undefined8 *)func_?(auStack_6,&dir,0);
    VStack_2.x = (float)*puVar5;
    VStack_2.y = (float)((ulonglong)*puVar5 >> 0x20);
    uVar7 = (this->fields).arrowOffset.x;
    uVar8 = (this->fields).arrowOffset.y;
    VStack_2.x = (float)uVar7 + (float)uVar3 + VStack_2.x * dist;
    VStack_2.y = (float)uVar8 + (float)((ulonglong)uVar3 >> 0x20) + VStack_2.y * dist;
    VStack_2.z = (this->fields).arrowOffset.z + fVar4 + *(float *)(puVar5 + 1) * dist;
    if (this_01 != (Transform *)0x0) {
      value.y = VStack_2.y;
      value.x = VStack_2.x;
      value.z = VStack_2.z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,value,(MethodInfo *)0x0);
      ObjectiveArrow_SetArrowBobbing(this,dist,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::ObjectiveArrow::ObjectiveArrow_OnPositionChanged
               (ObjectiveArrow *this,MVWorldObjectClient *wo,PositionChangedEventArgs *args,
               MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (args != (PositionChangedEventArgs *)0x0) {
    uVar1 = (args->fields).NewPos.x;
    uVar2 = (args->fields).NewPos.y;
    uVar3 = (this->fields).arrowOffset.x;
    uVar4 = (this->fields).arrowOffset.y;
    if (this_00 != (Transform *)0x0) {
      value.y = (float)uVar2 + (float)uVar4;
      value.x = (float)uVar3 + (float)uVar1;
      value.z = (this->fields).arrowOffset.z + (args->fields).NewPos.z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetArrowBobbing(Single) */

void Assembly-CSharp.dll::ObjectiveArrow::ObjectiveArrow_SetArrowBobbing
               (ObjectiveArrow *this,float dist,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    this_00 = (this->fields).bobbleCurve;
    if (this_00 != (AnimationCurve *)0x0) {
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (this_00,(this->fields).animationSpeed * (this->fields).animationTimer,
                         (MethodInfo *)0x0);
      fVar7 = dist * (this->fields).distanceScale;
      if (fVar7 <= _UNK_?) {
        fVar7 = _UNK_?;
      }
      (this->fields).arrowOffset.y = fVar7 * fVar6 + (this->fields).initialHeight;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        value.y = (float)uVar4;
        value.x = (float)uVar3;
        value.z = fVar5;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar1,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetScaleFromDistance(Single) */

void Assembly-CSharp.dll::ObjectiveArrow::ObjectiveArrow_SetScaleFromDistance
               (ObjectiveArrow *this,float dist,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  uVar1 = (this->fields).initialScale.x;
  uVar2 = (this->fields).initialScale.y;
  fVar3 = (this->fields).initialScale.z;
  fVar4 = (this->fields).distanceScale;
  if (this_00 != (Transform *)0x0) {
    value.y = (float)uVar2 + (float)uVar2 * fVar4 * dist;
    value.x = (float)uVar1 + (float)uVar1 * fVar4 * dist;
    value.z = fVar3 + fVar3 * fVar4 * dist;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ObjectiveArrow::ObjectiveArrow_Update
               (ObjectiveArrow *this,MethodInfo *method)

{
  fVar1 = (this->fields).animationTimer;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  (this->fields).animationTimer = fVar2;
  if (fVar2 <= (this->fields).animationLerpTime) {
    ObjectiveArrow_UpdateLerpAnimation(this,(MethodInfo *)0x0);
    return;
  }
  pTVar3 = (this->fields).targetDropOff;
  if (pTVar3 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd0,pTVar3,(MethodInfo *)0x0);
    uVar5 = pVVar4->x;
    uVar6 = pVVar4->y;
    pTVar3 = (this->fields).targetPickup;
    if (pTVar3 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&fStack_7,pTVar3,(MethodInfo *)0x0);
      uVar8 = pVVar4->x;
      uVar9 = pVVar4->y;
      fStack_7 = (float)uVar5 - (float)uVar8;
      puStack_10 = (undefined *)((float)uVar6 - (float)uVar9);
      fVar11 = (float10)func_?(&stack0xffffffd0,0);
      fVar2 = (this->fields).farPlane - _UNK_?;
      fVar1 = (float)fVar11;
      if (fVar2 <= (float)fVar11) {
        fVar1 = fVar2;
      }
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      pTVar3 = (this->fields).targetPickup;
      if (pTVar3 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&fStack_7,pTVar3,(MethodInfo *)0x0);
        uVar12 = pVVar4->x;
        uVar13 = pVVar4->y;
        fVar2 = pVVar4->z;
        puVar14 = (undefined8 *)func_?(&fStack_7,&stack0xffffffd0,0);
        uVar15 = (this->fields).arrowOffset.x;
        uVar16 = (this->fields).arrowOffset.y;
        if (this_00 != (Transform *)0x0) {
          value.y = (float)uVar16 + (float)uVar13 + (float)((ulonglong)*puVar14 >> 0x20) * fVar1;
          value.x = (float)uVar15 + (float)uVar12 + (float)*puVar14 * fVar1;
          value.z = (this->fields).arrowOffset.z + fVar2 + *(float *)(puVar14 + 1) * fVar1;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_00,value,(MethodInfo *)0x0);
          ObjectiveArrow_SetArrowBobbing(this,fVar1,(MethodInfo *)0x0);
          ObjectiveArrow_SetScaleFromDistance(this,fVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void UpdateArrowTransform() */

void Assembly-CSharp.dll::ObjectiveArrow::ObjectiveArrow_UpdateArrowTransform
               (ObjectiveArrow *this,MethodInfo *method)

{
  pTVar1 = (this->fields).targetDropOff;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    pTVar1 = (this->fields).targetPickup;
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&puStack_4,pTVar1,(MethodInfo *)0x0);
      uVar5 = pVVar2->x;
      puStack_4 = (undefined *)((float)uVar3 - (float)uVar5);
      fVar6 = (float10)func_?(&stack0xffffffd0,0);
      fVar7 = (this->fields).farPlane - _UNK_?;
      dist = (float)fVar6;
      if (fVar7 <= (float)fVar6) {
        dist = fVar7;
      }
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      pTVar1 = (this->fields).targetPickup;
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&puStack_4,pTVar1,(MethodInfo *)0x0);
        uVar8 = pVVar2->x;
        uVar9 = pVVar2->y;
        fVar7 = pVVar2->z;
        puVar10 = (undefined8 *)func_?(&puStack_4,&stack0xffffffd0,0);
        uVar11 = (this->fields).arrowOffset.x;
        uVar12 = (this->fields).arrowOffset.y;
        if (this_00 != (Transform *)0x0) {
          value.y = (float)uVar12 + (float)uVar9 + (float)((ulonglong)*puVar10 >> 0x20) * dist;
          value.x = (float)uVar11 + (float)uVar8 + (float)*puVar10 * dist;
          value.z = (this->fields).arrowOffset.z + fVar7 + *(float *)(puVar10 + 1) * dist;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_00,value,(MethodInfo *)0x0);
          ObjectiveArrow_SetArrowBobbing(this,dist,(MethodInfo *)0x0);
          ObjectiveArrow_SetScaleFromDistance(this,dist,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateLerpAnimation() */

void Assembly-CSharp.dll::ObjectiveArrow::ObjectiveArrow_UpdateLerpAnimation
               (ObjectiveArrow *this,MethodInfo *method)

{
  this_00 = (this->fields).animationSpawnCurve;
  if (this_00 != (AnimationCurve *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       (this_00,(this->fields).animationTimer / (this->fields).animationLerpTime,
                        (MethodInfo *)0x0);
    fVar2 = (this->fields).startPos.z;
    fVar3 = (this->fields).startPos.x;
    fVar4 = (this->fields).startPos.y;
    pTVar5 = (this->fields).targetDropOff;
    if (pTVar5 != (Transform *)0x0) {
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffc8,pTVar5,(MethodInfo *)0x0);
      uVar7 = pVVar6->x;
      uVar8 = pVVar6->y;
      fVar9 = pVVar6->z;
      fVar10 = 0.0;
      if ((0.0 <= fVar1) && (fVar10 = _UNK_?, fVar1 <= _UNK_?)) {
        fVar10 = fVar1;
      }
      fVar3 = ((float)uVar7 - fVar3) * fVar10 + fVar3;
      fVar4 = ((float)uVar8 - fVar4) * fVar10 + fVar4;
      pTVar5 = (this->fields).targetDropOff;
      if (pTVar5 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                  ((Vector3 *)&stack0xffffffc8,pTVar5,(MethodInfo *)0x0);
        pTVar5 = (this->fields).targetPickup;
        if (pTVar5 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                    ((Vector3 *)&stack0xffffffc8,pTVar5,(MethodInfo *)0x0);
          fVar11 = (float10)func_?();
          fVar12 = (this->fields).farPlane - _UNK_?;
          fVar13 = (float)fVar11;
          if (fVar12 <= (float)fVar11) {
            fVar13 = fVar12;
          }
          ObjectiveArrow_SetArrowBobbing(this,fVar13 * fVar1,(MethodInfo *)0x0);
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          uVar14 = (this->fields).arrowOffset.x;
          uVar15 = (this->fields).arrowOffset.y;
          if (pTVar5 != (Transform *)0x0) {
            value.y = (float)uVar15 + fVar4;
            value.x = (float)uVar14 + fVar3;
            value.z = (this->fields).arrowOffset.z + (fVar9 - fVar2) * fVar10 + fVar2;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar5,value,(MethodInfo *)0x0);
            ObjectiveArrow_SetScaleFromDistance(this,fVar13 * fVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* ObjectiveArrow() */

void Assembly-CSharp.dll::ObjectiveArrow::ObjectiveArrow__ctor
               (ObjectiveArrow *this,MethodInfo *method)

{
  (this->fields).animationLerpTime = 2.0;
  (this->fields).distanceScale = 0.015;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

