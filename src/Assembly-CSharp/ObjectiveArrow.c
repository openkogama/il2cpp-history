
/* Void Initialize(Vector3, Transform, Transform) */

void Assembly-CSharp.dll::ObjectiveArrow::ObjectiveArrow_Initialize
               (ObjectiveArrow *this,Vector3 startPos,Transform *dropOff,Transform *pickup,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = startPos.z;
  (this->fields).startPos.x = startPos.x;
  (this->fields).startPos.y = startPos.y;
  (this->fields).startPos.z = startPos.z;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
    uVar4._0_4_ = pVVar3->y;
    fVar5 = pVVar3->z;
    (this->fields).initialScale.x = pVVar3->x;
    (this->fields).initialScale.y = (float)uVar4;
    (this->fields).initialScale.z = fVar5;
    (this->fields).targetDropOff = dropOff;
    (this->fields).targetPickup = pickup;
    (this->fields).initialHeight = (this->fields).arrowOffset.y;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_00 != (MainCameraManager *)0x0) {
      this_01 = (Camera *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                           (MethodInfo *)0x0);
      if (this_01 != (Camera *)0x0) {
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                          (this_01,(MethodInfo *)0x0);
        pTVar2 = (this->fields).targetDropOff;
        (this->fields).farPlane = fVar5;
        if (pTVar2 != (Transform *)0x0) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
          fVar5 = pVVar3->z;
          pTVar2 = (this->fields).targetPickup;
          if (pTVar2 != (Transform *)0x0) {
            pVVar3 = (Vector3 *)&stack0xffffffcc;
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (pVVar3,pTVar2,(MethodInfo *)0x0);
            uVar4._0_4_ = pVVar6->x;
            uVar4._4_4_ = pVVar6->y;
            fVar7 = pVVar6->z;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              puVar8 = &UNK_?;
              func_?();
              uVar4 = CONCAT44(puVar8,(float)uVar4);
            }
            a_00.y = (float)pTVar2;
            a_00.x = (float)pVVar3;
            a_00.z = fVar5;
            b.z = fVar7;
            b.x = (float)(int)uVar4;
            b.y = (float)(int)((ulonglong)uVar4 >> 0x20);
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                      ((Vector3 *)&stack0xffffffcc,a_00,b,(MethodInfo *)0x0);
            fVar9 = (float10)func_?();
            fVar5 = (this->fields).farPlane;
            uVar4._0_4_ = (float)fVar9;
            if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Mathf);
            }
            fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                              ((float)uVar4,fVar5 - _UNK_?,(MethodInfo *)0x0);
            ObjectiveArrow_SetArrowBobbing(this,fVar5,(MethodInfo *)0x0);
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this,(MethodInfo *)0x0);
            a.z = fVar1;
            a.x = startPos.x;
            a.y = startPos.y;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                               (&startPos,a,(this->fields).arrowOffset,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar2,*pVVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void MoveInDirection(Vector3, Single) */

void Assembly-CSharp.dll::ObjectiveArrow::ObjectiveArrow_MoveInDirection
               (ObjectiveArrow *this,Vector3 dir,float dist,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).targetPickup;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uVar3._0_4_ = pVVar1->x;
    uStack_4 = pVVar1->y;
    fVar5 = pVVar1->z;
    puVar6 = (undefined8 *)func_?(&puStack_7,&dir,0);
    VStack_2._4_8_ = *puVar6;
    fVar8 = *(float *)(puVar6 + 1);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar8;
    a.x = VStack_2.y;
    a.y = VStack_2.z;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&puStack_7,a,dist,(MethodInfo *)0x0);
    a_00.z = fVar5;
    uStack_4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    a_00.x = (float)(undefined4)uVar3;
    a_00.y = (float)uStack_4;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&puStack_7,a_00,*pVVar1,(MethodInfo *)0x0);
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&puStack_7,*pVVar1,(this->fields).arrowOffset,(MethodInfo *)0x0)
    ;
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,*pVVar1,(MethodInfo *)0x0);
      ObjectiveArrow_SetArrowBobbing(this,dist,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::ObjectiveArrow::ObjectiveArrow_OnPositionChanged
               (ObjectiveArrow *this,MVWorldObjectClient *wo,PositionChangedEventArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (args != (PositionChangedEventArgs *)0x0) {
    puStack_1 = (undefined *)(this->fields).arrowOffset.x;
    unique0x0000a404 = (this->fields).arrowOffset.y;
    uVar2._0_4_ = (args->fields).NewPos.x;
    uVar2._4_4_ = (args->fields).NewPos.y;
    fVar3 = (args->fields).NewPos.z;
    fVar4 = (this->fields).arrowOffset.z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar3;
    a.x = (float)(int)uVar2;
    a.y = (float)(int)((ulonglong)uVar2 >> 0x20);
    b.z = fVar4;
    b.x = (float)puStack_1;
    b.y = stack0xfffffff0;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffe8,a,b,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      stack0xfffffff0 = (float)this_00;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,*pVVar5,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetArrowBobbing(Single) */

void Assembly-CSharp.dll::ObjectiveArrow::ObjectiveArrow_SetArrowBobbing
               (ObjectiveArrow *this,float dist,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0);
    fVar3 = pVVar2->z;
    this_00 = (this->fields).bobbleCurve;
    if (this_00 != (AnimationCurve *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                (this_00,(this->fields).animationSpeed * (this->fields).animationTimer,
                 (MethodInfo *)0x0);
      fVar4 = (this->fields).distanceScale;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      fVar5 = 0.0;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
                        (fVar4 * dist,1.0,(MethodInfo *)0x0);
      (this->fields).arrowOffset.y = fVar4 * fVar5 + (this->fields).initialHeight;
      uVar6 = CONCAT44(this,&UNK_?);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        fVar7 = (float)uVar6;
        this = (ObjectiveArrow *)fVar3;
        fVar8 = (float)(int)((ulonglong)uVar6 >> 0x20);
        value = (Vector3)CONCAT84(uVar9,fVar7);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar1,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetScaleFromDistance(Single) */

void Assembly-CSharp.dll::ObjectiveArrow::ObjectiveArrow_SetScaleFromDistance
               (ObjectiveArrow *this,float dist,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  fVar1 = (this->fields).initialScale.z;
  uVar2._0_4_ = (this->fields).initialScale.x;
  uVar2._4_4_ = (this->fields).initialScale.y;
  fVar3 = (this->fields).distanceScale;
  fVar4 = fVar1;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  VVar5.z = fVar4;
  VVar5.x = (float)(int)uVar2;
  VVar5.y = (float)(int)((ulonglong)uVar2 >> 0x20);
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffec,VVar5,fVar3,(MethodInfo *)0x0);
  fVar3 = pVVar6->y;
  uVar2._0_4_ = pVVar6->z;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffec,*pVVar6,dist,(MethodInfo *)0x0);
  uVar7 = pVVar6->x;
  uVar8 = pVVar6->y;
  this = (ObjectiveArrow *)pVVar6->z;
  fVar9 = (float)uVar8;
  a.y = (float)uVar2;
  a.x = fVar3;
  a.z = fVar1;
  VVar5.x = (float)uVar7;
  VVar5 = (Vector3)CONCAT84(uVar10,VVar5.x);
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffe0,a,VVar5,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_00,*pVVar6,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).targetDropOff;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffc0,pTVar1,(MethodInfo *)0x0);
    VStack_3.y = pVVar2->x;
    VStack_3.z = pVVar2->y;
    fVar4 = pVVar2->z;
    pTVar1 = (this->fields).targetPickup;
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffc0,pTVar1,(MethodInfo *)0x0);
      uStack_5._0_4_ = pVVar2->x;
      uStack_5._4_4_ = pVVar2->y;
      fVar6 = pVVar2->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a_01.z = fVar4;
      a_01.x = VStack_3.y;
      a_01.y = VStack_3.z;
      b.z = fVar6;
      b.x = (float)(undefined4)uStack_5;
      b.y = uStack_5._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                ((Vector3 *)&stack0xffffffc0,a_01,b,(MethodInfo *)0x0);
      fVar7 = (float10)func_?();
      fVar4 = (this->fields).farPlane;
      uStack_5 = CONCAT44((float)fVar7,(undefined4)uStack_5);
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                        (uStack_5._4_4_,fVar4 - _UNK_?,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      pTVar1 = (this->fields).targetPickup;
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_3,pTVar1,(MethodInfo *)0x0);
        VStack_8.y = pVVar2->x;
        VStack_8.z = pVVar2->y;
        fVar6 = pVVar2->z;
        puVar9 = (undefined8 *)func_?(auStack_10,&stack0xffffffc0,0);
        VStack_3._4_8_ = *puVar9;
        uStack_5 = CONCAT44(*(undefined4 *)(puVar9 + 1),(undefined4)uStack_5);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a.z = uStack_5._4_4_;
        a.x = VStack_3.y;
        a.y = VStack_3.z;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           (&VStack_3,a,fVar4,(MethodInfo *)0x0);
        a_00.z = fVar6;
        a_00.x = VStack_8.y;
        a_00.y = VStack_8.z;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           (&VStack_8,a_00,*pVVar2,(MethodInfo *)0x0);
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           (&VStack_8,*pVVar2,(this->fields).arrowOffset,(MethodInfo *)0x0);
        if (this_00 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_00,*pVVar2,(MethodInfo *)0x0);
          ObjectiveArrow_SetArrowBobbing(this,fVar4,(MethodInfo *)0x0);
          ObjectiveArrow_SetScaleFromDistance(this,fVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void UpdateLerpAnimation() */

void Assembly-CSharp.dll::ObjectiveArrow::ObjectiveArrow_UpdateLerpAnimation
               (ObjectiveArrow *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).animationSpawnCurve;
  if (this_00 != (AnimationCurve *)0x0) {
    t = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                  (this_00,(this->fields).animationTimer / (this->fields).animationLerpTime,
                   (MethodInfo *)0x0);
    VStack_1.y = (this->fields).startPos.x;
    VStack_1.z = (this->fields).startPos.y;
    pTVar2 = (this->fields).targetDropOff;
    fVar3 = (this->fields).startPos.z;
    if (pTVar2 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_5,pTVar2,(MethodInfo *)0x0);
      VStack_6.y = pVVar4->x;
      VStack_6.z = pVVar4->y;
      fVar7 = pVVar4->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.z = fVar3;
      a.x = VStack_1.y;
      a.y = VStack_1.z;
      b.z = fVar7;
      b.x = VStack_6.y;
      b.y = VStack_6.z;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                         (&VStack_6,a,b,t,(MethodInfo *)0x0);
      VStack_5.y = pVVar4->x;
      VStack_5.z = pVVar4->y;
      fVar3 = pVVar4->z;
      pTVar2 = (this->fields).targetDropOff;
      if (pTVar2 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_1,pTVar2,(MethodInfo *)0x0);
        VStack_6.y = pVVar4->x;
        VStack_6.z = pVVar4->y;
        fVar7 = pVVar4->z;
        pTVar2 = (this->fields).targetPickup;
        if (pTVar2 != (Transform *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_1,pTVar2,(MethodInfo *)0x0);
          a_01.z = fVar7;
          a_01.x = VStack_6.y;
          a_01.y = VStack_6.z;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                    (&VStack_6,a_01,*pVVar4,(MethodInfo *)0x0);
          fVar8 = (float10)func_?(&stack0xffffffcc,0);
          fVar7 = (this->fields).farPlane;
          VStack_6.z = (float)fVar8;
          VStack_1.z = fVar7;
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Mathf);
            fVar7 = VStack_1.z;
          }
          fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                            (VStack_6.z,fVar7 - _UNK_?,(MethodInfo *)0x0);
          ObjectiveArrow_SetArrowBobbing(this,fVar7 * t,(MethodInfo *)0x0);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          a_00.z = fVar3;
          a_00.x = VStack_5.y;
          a_00.y = VStack_5.z;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             (&VStack_5,a_00,(this->fields).arrowOffset,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar2,*pVVar4,(MethodInfo *)0x0);
            ObjectiveArrow_SetScaleFromDistance(this,fVar7 * t,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* ObjectiveArrow() */

void Assembly-CSharp.dll::ObjectiveArrow::ObjectiveArrow__ctor
               (ObjectiveArrow *this,MethodInfo *method)

{
  (this->fields).animationLerpTime = 2.0;
  (this->fields).distanceScale = 0.015;
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

