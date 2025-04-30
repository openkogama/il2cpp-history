
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
                       (aVStack_3,pTVar1,(MethodInfo *)0x0);
    ppTVar4 = &(this->fields).targetDropOff;
    fVar5 = pVVar2->y;
    fVar6 = pVVar2->z;
    (this->fields).initialScale.x = pVVar2->x;
    (this->fields).initialScale.y = fVar5;
    (this->fields).initialScale.z = fVar6;
    *ppTVar4 = dropOff;
    func_?(ppTVar4);
    ppTVar7 = &(this->fields).targetPickup;
    *ppTVar7 = pickup;
    func_?(ppTVar7,pickup);
    (this->fields).initialHeight = (this->fields).arrowOffset.y;
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar8 != (MainCameraManager *)0x0) &&
       (this_00 = (pMVar8->fields).mainCamera, this_00 != (Camera *)0x0)) {
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                        (this_00,(MethodInfo *)0x0);
      (this->fields).farPlane = fVar6;
      if (*ppTVar4 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                  ((Vector3 *)&stack0xffffffb4,*ppTVar4,(MethodInfo *)0x0);
        if (*ppTVar7 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)(auStack_9 + 4),*ppTVar7,(MethodInfo *)0x0);
          auStack_9._0_4_ = pVVar2->x;
          auStack_9._4_4_ = pVVar2->y;
          fStack_10 = pVVar2->z;
          uVar11._4_4_ = fStack_12 - (float)auStack_9._4_4_;
          uVar11._0_4_ = fStack_13 - (float)auStack_9._0_4_;
          fVar6 = fStack_14 - fStack_10;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Math);
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Math);
          }
          method_00 = (MethodInfo *)0x0;
          dVar15 = (double)((float)uVar11 * (float)uVar11 + SUB84(uVar11,4) * SUB84(uVar11,4) +
                          fVar6 * fVar6);
          if (dVar15 < 0.0) {
            func_?();
          }
          else {
            dVar15 = SQRT(dVar15);
          }
          fVar5 = (this->fields).farPlane - _UNK_?;
          fVar6 = (float)dVar15;
          if (fVar5 <= (float)dVar15) {
            fVar6 = fVar5;
          }
          ObjectiveArrow_SetArrowBobbing(this,fVar6,method_00);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          aVStack_3[0].x = (this->fields).arrowOffset.x;
          aVStack_3[0].y = (this->fields).arrowOffset.y;
          aVStack_3[0].z = (this->fields).arrowOffset.z;
          fStack_10 = startPos.x + aVStack_3[0].x;
          fStack_16 = startPos.y + aVStack_3[0].y;
          fStack_17 = startPos.z + aVStack_3[0].z;
          if (pTVar1 != (Transform *)0x0) {
            value.y = fStack_16;
            value.x = fStack_10;
            value.z = fStack_17;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar1,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
  if ((this->fields).animationLerpTime < fVar2) {
    ObjectiveArrow_UpdateArrowTransform(this,(MethodInfo *)0x0);
    return;
  }
  ObjectiveArrow_UpdateLerpAnimation(this,(MethodInfo *)0x0);
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
    fStack_3 = pVVar2->x;
    puStack_4 = (undefined *)pVVar2->y;
    pTVar1 = (this->fields).targetPickup;
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffec,pTVar1,(MethodInfo *)0x0);
      uVar5 = pVVar2->x;
      uVar6 = pVVar2->y;
      fVar7 = in_stack_8 - (float)uVar5;
      in_stack_9 = in_stack_9 - (float)uVar6;
      in_stack_10 = in_stack_10 - pVVar2->z;
      puStack_4 = (undefined *)in_stack_10;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      dVar11 = (double)(fVar7 * fVar7 + in_stack_9 * in_stack_9 +
                       (float)puStack_4 * (float)puStack_4);
      if (dVar11 < 0.0) {
        func_?();
      }
      else {
        dVar11 = SQRT(dVar11);
      }
      fVar12 = (this->fields).farPlane - _UNK_?;
      fVar13 = (float)dVar11;
      if (fVar12 <= (float)dVar11) {
        fVar13 = fVar12;
      }
      puStack_4 = (undefined *)fVar13;
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      pTVar1 = (this->fields).targetPickup;
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                  ((Vector3 *)&stack0x00000000,pTVar1,(MethodInfo *)0x0);
        puVar14 = (undefined8 *)func_?(&stack0x0000000c,&stack0xfffffffc,0);
        fStack_15 = (float)*puVar14;
        fStack_16 = (float)((ulonglong)*puVar14 >> 0x20);
        dist = (this->fields).arrowOffset.x;
        uVar17 = (this->fields).arrowOffset.y;
        if (this_00 != (Transform *)0x0) {
          value.y = (float)uVar17 + fVar7 + fStack_16 * in_stack_8;
          value.x = (float)dist + in_stack_10 + fStack_15 * in_stack_8;
          value.z = (this->fields).arrowOffset.z +
                    in_stack_9 + *(float *)(puVar14 + 1) * in_stack_8;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_00,value,(MethodInfo *)0x0);
          ObjectiveArrow_SetArrowBobbing(this,(float)dist,(MethodInfo *)0x0);
          ObjectiveArrow_SetScaleFromDistance(this,0.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void UpdateLerpAnimation() */

void Assembly-CSharp.dll::ObjectiveArrow::ObjectiveArrow_UpdateLerpAnimation
               (ObjectiveArrow *this,MethodInfo *method)

{
  this_00 = (this->fields).animationSpawnCurve;
  if (this_00 != (AnimationCurve *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
              (this_00,(this->fields).animationTimer / (this->fields).animationLerpTime,
               (MethodInfo *)0x0);
    pTVar1 = (this->fields).targetDropOff;
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff4,pTVar1,(MethodInfo *)0x0);
      uVar3 = pVVar2->y;
      fVar4 = 0.0;
      if ((0.0 <= in_stack_5) && (fVar4 = _UNK_?, in_stack_5 <= _UNK_?)
         ) {
        fVar4 = in_stack_5;
      }
      fVar6 = ((float)uVar3 - (float)puStack_7) * fVar4 + (float)puStack_7;
      unaff_EBP = (pVVar2->z - unaff_EBP) * fVar4 + unaff_EBP;
      pTVar1 = (this->fields).targetDropOff;
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                  ((Vector3 *)&stack0x00000000,pTVar1,(MethodInfo *)0x0);
        pTVar1 = (this->fields).targetPickup;
        if (pTVar1 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0x0000000c,pTVar1,(MethodInfo *)0x0);
          uVar8 = pVVar2->x;
          uVar9 = pVVar2->y;
          fVar4 = pVVar2->z;
          fVar10 = in_stack_11 - (float)uVar8;
          fVar12 = in_stack_13 - (float)uVar9;
          fVar14 = in_stack_15 - fVar4;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Math,fVar6);
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Math);
          }
          dVar16 = (double)(fVar12 * fVar12 + fVar10 * fVar10 + fVar14 * fVar14);
          if (dVar16 < 0.0) {
            func_?();
          }
          else {
            dVar16 = SQRT(dVar16);
          }
          fVar10 = (this->fields).farPlane - _UNK_?;
          fVar6 = (float)dVar16;
          if (fVar10 <= (float)dVar16) {
            fVar6 = fVar10;
          }
          ObjectiveArrow_SetArrowBobbing(this,fVar6 * unaff_EBP,(MethodInfo *)0x0);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          in_stack_17._0_4_ = (this->fields).arrowOffset.x;
          in_stack_17._4_4_ = (this->fields).arrowOffset.y;
          in_stack_18 = (this->fields).arrowOffset.z;
          in_stack_15 = (float)(undefined4)in_stack_17 + fVar4;
          in_stack_19 = (float)in_stack_17._4_4_ + in_stack_11;
          in_stack_20 = in_stack_18 + in_stack_13;
          if (pTVar1 != (Transform *)0x0) {
            value.y = in_stack_19;
            value.x = in_stack_15;
            value.z = in_stack_20;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar1,value,(MethodInfo *)0x0);
            ObjectiveArrow_SetScaleFromDistance(this,in_stack_19,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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

