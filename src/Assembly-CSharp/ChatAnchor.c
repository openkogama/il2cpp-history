
/* Boolean BindAttachedBubble(ChatBubble) */

bool Assembly-CSharp.dll::ChatAnchor::ChatAnchor_BindAttachedBubble
               (ChatAnchor *this,ChatBubble *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).AttachedBubble;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    (this->fields).AttachedBubble = value;
    if (value != (ChatBubble *)0x0) {
      (value->fields).anchor = this;
      (this->fields).snapTracking = 1;
      return 1;
    }
    func_?(0);
    pcVar2 = (code *)swi(3);
    bVar1 = (*pcVar2)();
    return bVar1;
  }
  return 0;
}


/* Vector3 HandleOfScreenChatBubble(Camera, Vector3) */

Vector3 * Assembly-CSharp.dll::ChatAnchor::ChatAnchor_HandleOfScreenChatBubble
                    (Vector3 *__return_storage_ptr__,ChatAnchor *this,Camera *camera,
                    Vector3 adjustedPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).AttachedBubble;
  pCStack_2 = (CrossPlatformInputManager_VirtualAxis__Class *)0x0;
  pMStack_3 = (MonitorData *)0x0;
  if ((pCVar1 != (ChatBubble *)0x0) &&
     (pRVar4 = ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0),
     pRVar4 != (RectTransform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
              ((Rect *)&stack0xffffffd0,pRVar4,(MethodInfo *)0x0);
    unaff_ESI = 0;
    SubscribableVariableBase`1[System::Single]::SubscribableVariableBase_1_System_Single__get_Value
              ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffc0,(MethodInfo *)0x0);
    pCVar1 = (this->fields).AttachedBubble;
    if (pCVar1 != (ChatBubble *)0x0) {
      pTVar5 = (Transform *)ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0);
      if (pTVar5 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                  (&VStack_6,pTVar5,(MethodInfo *)0x0);
        pCVar1 = (this->fields).AttachedBubble;
        if (((pCVar1 != (ChatBubble *)0x0) &&
            (pRVar4 = ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0),
            pRVar4 != (RectTransform *)0x0)) &&
           (UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                      (pRVar4,(MethodInfo *)0x0), unaff_EDI = camera, camera != (Camera *)0x0)) {
          iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelWidth
                             (camera,(MethodInfo *)0x0);
          pCVar1 = (this->fields).AttachedBubble;
          if ((pCVar1 != (ChatBubble *)0x0) &&
             (pRVar4 = ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0),
             pRVar4 != (RectTransform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                      ((Rect *)&stack0xffffffd0,pRVar4,(MethodInfo *)0x0);
            fVar8 = SubscribableVariableBase`1[System::Single]::
                     SubscribableVariableBase_1_System_Single__get_Value
                               ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffb0,
                                (MethodInfo *)0x0);
            pCVar1 = (this->fields).AttachedBubble;
            if (pCVar1 != (ChatBubble *)0x0) {
              VStack_6.z = (float)&UNK_?;
              pTVar5 = (Transform *)
                        ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0);
              if (pTVar5 != (Transform *)0x0) {
                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_lossyScale(&VStack_6,pTVar5,(MethodInfo *)0x0);
                fVar10 = pVVar9->x;
                pCVar1 = (this->fields).AttachedBubble;
                if ((pCVar1 != (ChatBubble *)0x0) &&
                   (pRVar4 = ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0),
                   pRVar4 != (RectTransform *)0x0)) {
                  min = &UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                            (pRVar4,(MethodInfo *)0x0);
                  pCVar1 = (this->fields).AttachedBubble;
                  fVar8 = ((float)iVar7 - fVar10 * fVar8 * (_UNK_? - 0.0)) - _UNK_?;
                  if ((pCVar1 != (ChatBubble *)0x0) &&
                     (pRVar4 = ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0),
                     pRVar4 != (RectTransform *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                              ((Rect *)&stack0xffffffd0,pRVar4,(MethodInfo *)0x0);
                    adjustedPosition.x = 0.0;
                    fVar10 = UnityStandardAssets::CrossPlatformInput::
                            CrossPlatformInputManager+VirtualAxis::
                            CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                                      ((CrossPlatformInputManager_VirtualAxis *)&stack0xffffffa0,
                                       (MethodInfo *)0x0);
                    pCVar1 = (this->fields).AttachedBubble;
                    if ((pCVar1 != (ChatBubble *)0x0) &&
                       (pTVar5 = (Transform *)
                                  ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0)
                       , pTVar5 != (Transform *)0x0)) {
                      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_lossyScale(&VStack_6,pTVar5,(MethodInfo *)0x0);
                      fVar11 = pVVar9->y;
                      fVar12 = pVVar9->z;
                      pCVar1 = (this->fields).AttachedBubble;
                      if ((pCVar1 != (ChatBubble *)0x0) &&
                         (pRVar4 = ChatBubble::ChatBubble_get_rectTransform
                                              (pCVar1,(MethodInfo *)0x0),
                         pRVar4 != (RectTransform *)0x0)) {
                        VVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                 RectTransform_get_pivot(pRVar4,(MethodInfo *)0x0);
                        fVar10 = fVar11 * fVar10 * VVar13.y + _UNK_?;
                        iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                 Camera_get_pixelHeight(camera,(MethodInfo *)0x0);
                        pCVar1 = (this->fields).AttachedBubble;
                        if ((pCVar1 != (ChatBubble *)0x0) &&
                           (pRVar4 = ChatBubble::ChatBubble_get_rectTransform
                                                (pCVar1,(MethodInfo *)0x0),
                           pRVar4 != (RectTransform *)0x0)) {
                          pRVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                    RectTransform_get_rect
                                              ((Rect *)&stack0xffffffd0,pRVar4,(MethodInfo *)0x0);
                          pCStack_2 = (CrossPlatformInputManager_VirtualAxis__Class *)
                                       pRVar14->m_XMin;
                          pMStack_3 = (MonitorData *)pRVar14->m_YMin;
                          fVar11 = UnityStandardAssets::CrossPlatformInput::
                                  CrossPlatformInputManager+VirtualAxis::
                                  CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                                            ((CrossPlatformInputManager_VirtualAxis *)&pCStack_2,
                                             (MethodInfo *)0x0);
                          pCVar1 = (this->fields).AttachedBubble;
                          if ((pCVar1 != (ChatBubble *)0x0) &&
                             (pTVar5 = (Transform *)
                                        ChatBubble::ChatBubble_get_rectTransform
                                                  (pCVar1,(MethodInfo *)0x0),
                             pTVar5 != (Transform *)0x0)) {
                            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_get_lossyScale
                                                ((Vector3 *)&stack0xffffffe0,pTVar5,
                                                 (MethodInfo *)0x0);
                            VStack_6.x = pVVar9->x;
                            VStack_6.y = pVVar9->y;
                            VStack_6.z = pVVar9->z;
                            pCVar1 = (this->fields).AttachedBubble;
                            if ((pCVar1 != (ChatBubble *)0x0) &&
                               (pRVar4 = ChatBubble::ChatBubble_get_rectTransform
                                                    (pCVar1,(MethodInfo *)0x0),
                               pRVar4 != (RectTransform *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                              RectTransform_get_pivot(pRVar4,(MethodInfo *)0x0);
                              fVar11 = ((float)iVar7 -
                                      VStack_6.y * fVar11 * (_UNK_? - fVar12)) -
                                      _UNK_?;
                              if ((this->fields).KeepInView != 0) {
                                if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr
                                     & 0x2000000) != 0) &&
                                   ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                                  func_?();
                                }
                                adjustedPosition.x =
                                     UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                                               (0.0,(float)min,fVar8,(MethodInfo *)0x0);
                                adjustedPosition.y =
                                     UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                                               (adjustedPosition.y,fVar10,fVar11,(MethodInfo *)0x0);
                              }
                              pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_1_get_transform
                                                  ((Component_1 *)this,(MethodInfo *)0x0);
                              if (pTVar5 != (Transform *)0x0) {
                                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_get_position
                                                    (&VStack_6,pTVar5,(MethodInfo *)0x0);
                                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                          Camera_WorldToViewportPoint_1
                                                    (&VStack_6,camera,*pVVar9,(MethodInfo *)0x0);
                                uVar15 = pVVar9->x;
                                uVar16 = pVVar9->y;
                                if ((((pVVar9->z <= 0.0) || ((float)uVar15 <= 0.0)) ||
                                    (_UNK_? <= (float)uVar15)) ||
                                   (((float)uVar16 <= 0.0 || (_UNK_? <= (float)uVar16)))) {
                                  pCVar1 = (this->fields).AttachedBubble;
                                  if (pCVar1 == (ChatBubble *)0x0) goto code_?;
                                  switch((pCVar1->fields).ExtenderDock) {
                                  case 0:
                                    adjustedPosition.y = fVar10;
                                    break;
                                  case 1:
                                    adjustedPosition.x = (float)min;
                                    break;
                                  case 2:
                                    adjustedPosition.x = fVar8;
                                    break;
                                  case 3:
                                    adjustedPosition.y = fVar11;
                                  }
                                }
                                _UNK_? = CONCAT44(adjustedPosition.y,adjustedPosition.x);
                                _UNK_? = adjustedPosition.z;
                                return (Vector3 *)&UNK_?;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar17 = func_?(0);
  pcVar18 = (char *)((int)&unaff_EDI->klass + (int)((ulonglong)uVar17 >> 0x20));
  *pcVar18 = *pcVar18 << (extraout_CL & 0x1f);
  pCRam551024d2 = unaff_EDI;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = *(Object_1 **)(unaff_ESI + 0xc);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object,(uint)uVar17 & 0xffffff10,this);
  }
  bVar19 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar19 != 0) {
    iVar20 = *(int *)(unaff_ESI + 0xc);
    if (iVar20 != 0) {
      *(undefined4 *)(iVar20 + 0x48) = 0;
      *(undefined4 *)(iVar20 + 0x44) = 0;
      if (*(CanvasGroup **)(iVar20 + 0x30) != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (*(CanvasGroup **)(iVar20 + 0x30),0.0,(MethodInfo *)0x0);
        return extraout_EAX;
      }
    }
    func_?(0);
    pcVar21 = (code *)swi(3);
    pVVar9 = (Vector3 *)(*pcVar21)();
    return pVVar9;
  }
  return (Vector3 *)CONCAT31(extraout_var,bVar19);
}


/* Void HideChatBubble() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_HideChatBubble(ChatAnchor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).AttachedBubble;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pCVar1 = (this->fields).AttachedBubble;
  if (pCVar1 != (ChatBubble *)0x0) {
    (pCVar1->fields).timeUntilFade = 0.0;
    (pCVar1->fields).currentFade = 0.0;
    this_00 = (pCVar1->fields).CanvasGroup;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(Boolean, Avatar) */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_Initialize
               (ChatAnchor *this,bool isLocal,Avatar_1 *avatar,MethodInfo *method)

{
  (this->fields).isLocal = isLocal;
  (this->fields).avatar = avatar;
  return;
}


/* Void InterpolateToNewBubblePosition(Vector3) */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_InterpolateToNewBubblePosition
               (ChatAnchor *this,Vector3 adjustedPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).previousAdjustedPosition.z = adjustedPosition.z;
  uVar1._0_4_ = (this->fields).previousAdjustedPosition.x;
  uVar1._4_4_ = (this->fields).previousAdjustedPosition.y;
  fVar2 = (this->fields).previousAdjustedPosition.z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  rhs.z = fVar2;
  rhs.x = (float)(int)uVar1;
  rhs.y = (float)(int)((ulonglong)uVar1 >> 0x20);
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Inequality
                    (adjustedPosition,rhs,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    fVar2 = (this->fields).currentInterpolationProgress;
  }
  else {
    fVar2 = 0.0;
    (this->fields).currentInterpolationProgress = 0.0;
  }
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  pCVar5 = (this->fields).AttachedBubble;
  (this->fields).currentInterpolationProgress = (this->fields).TrackingSpeed * fVar4 + fVar2;
  if (pCVar5 != (ChatBubble *)0x0) {
    pTVar6 = (Transform *)ChatBubble::ChatBubble_get_rectTransform(pCVar5,(MethodInfo *)0x0);
    pCVar5 = (this->fields).AttachedBubble;
    if ((pCVar5 != (ChatBubble *)0x0) &&
       (pTVar7 = (Transform *)ChatBubble::ChatBubble_get_rectTransform(pCVar5,(MethodInfo *)0x0),
       pTVar7 != (Transform *)0x0)) {
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe8,pTVar7,(MethodInfo *)0x0);
      fVar2 = pVVar8->z;
      fVar4 = _UNK_?;
      if ((this->fields).snapTracking == 0) {
        fVar4 = (this->fields).currentInterpolationProgress;
      }
      uVar9 = pVVar8->x;
      uVar10 = pVVar8->y;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        adjustedPosition.z = (float)TypeInfo__UnityEngine__Vector3;
        func_?();
      }
      a.y = (float)uVar10;
      a.x = (float)uVar9;
      a.z = fVar2;
      b.y = fVar4;
      b.x = adjustedPosition.x;
      b.z = adjustedPosition.z;
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                         ((Vector3 *)&stack0xffffffe8,a,b,fVar4,(MethodInfo *)0x0);
      if (pTVar6 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar6,*pVVar8,(MethodInfo *)0x0);
        pCVar5 = (this->fields).AttachedBubble;
        if (pCVar5 != (ChatBubble *)0x0) {
          pTVar6 = (Transform *)ChatBubble::ChatBubble_get_rectTransform(pCVar5,(MethodInfo *)0x0);
          pCVar5 = (this->fields).AttachedBubble;
          if (((pCVar5 != (ChatBubble *)0x0) &&
              (pTVar7 = (Transform *)
                        ChatBubble::ChatBubble_get_rectTransform(pCVar5,(MethodInfo *)0x0),
              pTVar7 != (Transform *)0x0)) &&
             (pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                 ((Quaternion *)&stack0xffffffe4,pTVar7,(MethodInfo *)0x0),
             pTVar6 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar6,*pQVar11,(MethodInfo *)0x0);
            (this->fields).previousAdjustedPosition.x = adjustedPosition.z;
            (this->fields).previousAdjustedPosition.y = fVar4;
            (this->fields).previousAdjustedPosition.z = 0.0;
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


/* Void OnDestroy() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_OnDestroy(ChatAnchor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).AttachedBubble;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pCVar1 = (this->fields).AttachedBubble;
    if (pCVar1 == (ChatBubble *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)pCVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_OnValidate(ChatAnchor *this,MethodInfo *method)

{
  pfVar1 = &(this->fields).AttachedRadius;
  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
    (this->fields).AttachedRadius = 0.0;
  }
  return;
}


/* Void SkipInterpolation() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_SkipInterpolation
               (ChatAnchor *this,MethodInfo *method)

{
  (this->fields).snapTracking = 1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_Update(ChatAnchor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).AttachedBubble;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pCVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((this->fields).isLocal != 0) {
      pAVar3 = (this->fields).avatar;
      if ((pAVar3 == (Avatar_1 *)0x0) ||
         (pMVar4 = (pAVar3->fields).mvAvatar, pMVar4 == (MVAvatar *)0x0)) goto code_?;
      pPVar5 = MVAvatar::MVAvatar_get_CurrentPickup(pMVar4,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pPVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pAVar3 = (this->fields).avatar;
        if ((pAVar3 == (Avatar_1 *)0x0) ||
           (pMVar4 = (pAVar3->fields).mvAvatar, pMVar4 == (MVAvatar *)0x0)) {
code_?:
          func_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pPVar5 = MVAvatar::MVAvatar_get_CurrentPickup(pMVar4,(MethodInfo *)0x0);
        if (pPVar5 == (PickupItem *)0x0) goto code_?;
        bVar2 = PickupItem::PickupItem_get_IsInFirstPersonMode(pPVar5,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          pCVar1 = (this->fields).AttachedBubble;
          if (pCVar1 != (ChatBubble *)0x0) {
            (pCVar1->fields).currentFade = 0.0;
            (pCVar1->fields).timeUntilFade = 0.0;
            this_00 = (pCVar1->fields).CanvasGroup;
            if (this_00 != (CanvasGroup *)0x0) {
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (this_00,0.0,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
      }
    }
    if ((this->fields).snapTracking != 0) {
      (this->fields).snapTracking = 0;
    }
  }
  return;
}


/* Void UpdateAttachedBubblePosition() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_UpdateAttachedBubblePosition
               (ChatAnchor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).AttachedBubble;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pCVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isPlaying
                    ((MethodInfo *)0x0);
  if (bVar2 == 0) {
    (this->fields).snapTracking = 1;
  }
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
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if ((pTVar3 != (Transform *)0x0) &&
       (pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffdc,pTVar3,(MethodInfo *)0x0),
       this_01 != (Camera *)0x0)) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                         ((Vector3 *)&stack0xffffffdc,this_01,*pVVar4,(MethodInfo *)0x0);
      uVar5 = pVVar4->x;
      uVar6 = pVVar4->y;
      adjustedPosition.y = (float)uVar6;
      adjustedPosition.x = (float)uVar5;
      pCVar1 = (this->fields).AttachedBubble;
      if ((pCVar1 != (ChatBubble *)0x0) &&
         (pTVar3 = (Transform *)ChatBubble::ChatBubble_get_rectTransform(pCVar1,(MethodInfo *)0x0),
         pTVar3 != (Transform *)0x0)) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffd0,pTVar3,(MethodInfo *)0x0);
        adjustedPosition.z = pVVar4->z;
        pVVar4 = ChatAnchor_HandleOfScreenChatBubble
                           ((Vector3 *)&stack0xffffffd0,this,this_01,adjustedPosition,
                            (MethodInfo *)0x0);
        ChatAnchor_InterpolateToNewBubblePosition(this,*pVVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* ChatAnchor() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor__ctor(ChatAnchor *this,MethodInfo *method)

{
  (this->fields).AttachedRadius = 1.0;
  (this->fields).AttachedAngle = 90.0;
  (this->fields).TrackingSpeed = 15.0;
  (this->fields).KeepInView = 1;
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

