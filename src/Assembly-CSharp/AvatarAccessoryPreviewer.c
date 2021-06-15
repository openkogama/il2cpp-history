
/* IEnumerator AnimationEndTrack(Single) */

IEnumerator *
Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_AnimationEndTrack
          (AvatarAccessoryPreviewer *this,float resetDelay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.x = (float)this;
    (this_00->fields).state = (int32_t)resetDelay;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void ChangeAnimation() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_ChangeAnimation
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).animations;
  iVar2 = (this->fields).currentAnimation + 1;
  (this->fields).currentAnimation = iVar2;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<System::String>__get_Count__)
    ;
    if ((int)pOVar3 <= iVar2) {
      (this->fields).currentAnimation = 1;
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pLVar1 = (this->fields).animations;
    if (pLVar1 != (List_1_System_String_ *)0x0) {
      animationName =
           (String *)
           mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
           IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                     ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                      (this->fields).currentAnimation,
                      MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_)
      ;
      AvatarAccessoryPreviewer_PlayAnimation_1(this,animationName,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnDestroy
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarBody;
  if (this_00 != (MVBody *)0x0) {
    MVBody::MVBody_DestroyClone(this_00,(MethodInfo *)0x0);
  }
  pAVar1 = (this->fields).toPreviewer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields).toPreviewer;
    if (pAVar1 == (AvatarPreviewer *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pAVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pTVar4 = (this->fields).avatarResetToTransform;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar4 = (this->fields).avatarResetToTransform;
    if (pTVar4 == (Transform *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pTVar4,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
    (this->fields).avatarResetToTransform = (Transform *)0x0;
  }
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnDrag
               (AvatarAccessoryPreviewer *this,PointerEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).pickedAccessory = 0;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetAxis
                    (StringLiteral_Mouse_X,(MethodInfo *)0x0);
  pAVar2 = (this->fields).toPreviewer;
  (this->fields).currentRotationSpeed =
       (float)((uint)fVar1 ^ _UNK_?) * (this->fields).rotationSensitivity;
  if (pAVar2 != (AvatarPreviewer *)0x0) {
    pCVar3 = (pAVar2->fields).previewCam;
    if (pCVar3 != (Camera *)0x0) {
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                        (pCVar3,(MethodInfo *)0x0);
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetAxis
                        (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
      fVar1 = (this->fields).zoomSpeed;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                (pCVar3,fVar1 * fVar5 * fVar6 + fVar4,(MethodInfo *)0x0);
      pAVar2 = (this->fields).toPreviewer;
      if ((pAVar2 != (AvatarPreviewer *)0x0) &&
         (pCVar3 = (pAVar2->fields).previewCam, pCVar3 != (Camera *)0x0)) {
        fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                          (pCVar3,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                          (fVar1,20.0,60.0,(MethodInfo *)0x0);
        if (pCVar3 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                    (pCVar3,fVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnPointerClick(PointerEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnPointerClick
               (AvatarAccessoryPreviewer *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  fVar2 = 0.0;
  func_?(&stack0xffffff70,0,0x2c);
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_get_mousePosition
                      ((Vector3 *)&stack0xffffffc0,(MethodInfo *)0x0);
  uVar4._0_4_ = pVVar3->x;
  uVar4._4_4_ = pVVar3->y;
  fVar5 = pVVar3->z;
  if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector2);
  }
  v.z = fVar5;
  v.x = (float)(int)uVar4;
  v.y = (float)(int)((ulonglong)uVar4 >> 0x20);
  VVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                     (v,(MethodInfo *)0x0);
  pRVar7 = (this->fields).toImage;
  if (pRVar7 != (RawImage *)0x0) {
    pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)pRVar7,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__RectTransformUtility->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__UnityEngine__RectTransformUtility->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UIModule.dll::UnityEngine::RectTransformUtility::
    RectTransformUtility_ScreenPointToLocalPointInRectangle
              (pRVar8,VVar6,(Camera *)0x0,(Vector2 *)&stack0xfffffff0,(MethodInfo *)0x0);
    pRVar7 = (this->fields).toImage;
    if ((pRVar7 != (RawImage *)0x0) &&
       (pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pRVar7,(MethodInfo *)0x0), pRVar8 != (RectTransform *)0x0)
       ) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffd4,pRVar8,(MethodInfo *)0x0);
      uVar4._0_4_ = SubscribableVariableBase`1[System::Single]::
                     SubscribableVariableBase_1_System_Single__get_Value
                               ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffac,
                                (MethodInfo *)0x0);
      pRVar7 = (this->fields).toImage;
      if ((pRVar7 != (RawImage *)0x0) &&
         (pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pRVar7,(MethodInfo *)0x0),
         pRVar8 != (RectTransform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                  (pRVar8,(MethodInfo *)0x0);
        pRVar7 = (this->fields).toImage;
        if ((pRVar7 != (RawImage *)0x0) &&
           (pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pRVar7,(MethodInfo *)0x0),
           pRVar8 != (RectTransform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                    ((Rect *)&stack0xffffffbc,pRVar8,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)&UNK_?;
          UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
          CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                    ((CrossPlatformInputManager_VirtualAxis *)&stack0xffffff9c,(MethodInfo *)0x0);
          pRVar7 = (this->fields).toImage;
          if ((pRVar7 != (RawImage *)0x0) &&
             (pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                  ((Graphic *)pRVar7,(MethodInfo *)0x0),
             pRVar8 != (RectTransform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                      (pRVar8,(MethodInfo *)0x0);
            puVar9 = &stack0xffffffe4;
            uVar4._0_4_ = (float)uVar4 / (_UNK_? / (float)pRVar7);
            func_?();
            VVar6.y = fVar2;
            VVar6.x = fVar1;
            b.y = (float)uVar4;
            b.x = (float)puVar9;
            VVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Addition
                               (VVar6,b,(MethodInfo *)0x0);
            pAVar10 = (this->fields).toPreviewer;
            if (pAVar10 != (AvatarPreviewer *)0x0) {
              this_00 = (pAVar10->fields).previewCam;
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit_1
                                  ((Vector3 *)&stack0xffffffd8,VVar6,(MethodInfo *)0x0);
              if (this_00 != (Camera *)0x0) {
                pRVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                                    ((Ray *)&stack0xffffffcc,this_00,*pVVar3,(MethodInfo *)0x0);
                if ((this->fields).pickedAccessory != 0) {
                  this_04 = (GameObject__Class *)&stack0xfffffff8;
                  uVar12 = (pRVar11->m_Direction).z;
                  uVar13 = (pRVar11->m_Origin).x;
                  uVar14 = (pRVar11->m_Origin).y;
                  uVar15 = (pRVar11->m_Origin).z;
                  ray.m_Origin.z = (float)uVar15;
                  ray.m_Origin.y = (float)uVar14;
                  ray.m_Origin.x = (float)uVar13;
                  uVar16 = (pRVar11->m_Direction).x;
                  uVar17 = (pRVar11->m_Direction).y;
                  ray.m_Direction.y = (float)uVar17;
                  ray.m_Direction.x = (float)uVar16;
                  ray.m_Direction.z = (float)uVar12;
                  bVar18 = AvatarAccessoryPreviewer_PickAccessory
                                     (this,ray,(GameObject **)this_04,(RaycastHit *)&stack0xffffff70
                                      ,(MethodInfo *)0x0);
                  if (bVar18 != 0) {
                    this_01 = (ScaleAnimationBase *)func_?();
                    ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,method_00);
                    if ((this_04 != (GameObject__Class *)0x0) &&
                       (this_02 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_GetComponentInChildren_6
                                            ((GameObject *)this_04,1,
                                             SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionHelperAvatarAccessory>_bool_
                                            ),
                       this_02 != (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0))
                    {
                      id = System.Core.dll::System::Linq::
                           Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                           Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                     (this_02,(MethodInfo *)0x0);
                      if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
                        func_?();
                      }
                      pAVar19 = AccessoryDataManager::
                                AccessoryDataManager_GetAccessoryDataByStreamingAssetId
                                          (id,(MethodInfo *)0x0);
                      if (this_01 != (ScaleAnimationBase *)0x0) {
                        (this_01->fields)._._._._.m_CachedPtr = pAVar19;
                        root = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                   *)func_?();
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (this_03,(Object *)this_01,
                                   MethodInfo__AvatarAccessoryPreviewer___OnPointerClick_c__AnonStorey1____m__0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                                   ,
                                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>__EventFunction_System__Object__void__
                                  );
                        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).
                                    Equals.methodPtr & 0x2000000) != 0) &&
                           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started
                            == 0)) {
                          func_?();
                        }
                        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                        ExecuteEvents_ExecuteHierarchy_63
                                  (root,(BaseEventData *)0x0,
                                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
                                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                                  );
                        return;
                      }
                    }
                    goto code_?;
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnPointerDown
               (AvatarAccessoryPreviewer *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).currentRotationSpeed = 0.0;
  (this->fields).pickedAccessory = 1;
  return;
}


/* Void OnRestartAnimation() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnRestartAnimation
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).goAnimation;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pAVar1 = (this->fields).goAnimation;
    if (pAVar1 == (Animation *)0x0) {
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       ((GameObject *)pAVar1,
                        ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                       );
    (this->fields).OnAnimationActivators = (ActivateOnAnimationBase__Array *)pUVar4;
    AvatarAccessoryPreviewer_RemoveSkinnedMeshOptimizers(this,(MethodInfo *)0x0);
    AvatarAccessoryPreviewer_PlayAnimation_1(this,StringLiteral_Idle,(MethodInfo *)0x0);
  }
  return;
}


/* Boolean PickAccessory(Ray, GameObject ByRef, RaycastHit ByRef) */

bool Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_PickAccessory
               (AvatarAccessoryPreviewer *this,Ray ray,GameObject **gameObject,
               RaycastHit *raycastHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(auStack_2,&ray,0);
  fVar3 = *(float *)(puVar1 + 1);
  stack0xfffffffc = (float)unaff_EBP;
  uStack_4 = *puVar1;
  pVVar5 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                      ((Vector3 *)&stack0xffffffdc,(InputToPlayerMovementAndroid *)&ray,
                       (MethodInfo *)0x0);
  uStack_6._0_4_ = (AvatarAccessoryPreviewer *)pVVar5->x;
  uStack_6._4_4_ = (UseInteractorHandler *)pVVar5->y;
  fVar7 = pVVar5->z;
  pCVar8 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_red
                      ((Color *)&stack0xffffffd8,(MethodInfo *)0x0);
  puVar9 = (undefined *)pCVar8->r;
  pDVar10 = (Debug_1__Class *)pCVar8->g;
  fVar11 = pCVar8->b;
  fVar12 = pCVar8->a;
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    puVar9 = &UNK_?;
    pDVar10 = TypeInfo__UnityEngine__Debug;
    func_?();
  }
  auVar13 = (undefined1  [12])_uStack_c;
  start.z = fVar3;
  start.x = (float)uStack_4;
  start.y = (float)uStack_4._4_4_;
  dir.z = fVar7;
  dir.x = (float)(AvatarAccessoryPreviewer *)uStack_6;
  dir.y = (float)uStack_6._4_4_;
  color.g = (float)pDVar10;
  color.r = (float)puVar9;
  color.b = fVar11;
  color.a = fVar12;
  _uStack_c = (Vector3)auVar13;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawRay
            (start,dir,color,10.0,(MethodInfo *)0x0);
  fVar7 = ray.m_Direction.x;
  fVar3 = ray.m_Origin.z;
  uStack_6._0_4_ = (AvatarAccessoryPreviewer *)ray.m_Direction.y;
  uStack_6._4_4_ = (UseInteractorHandler *)ray.m_Direction.z;
  fVar11 = ray.m_Origin.y;
  iVar14 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     ((String *)ray.m_Origin.x,(MethodInfo *)ray.m_Origin.y);
  ray.m_Origin.z = (float)(1 << ((byte)iVar14 & 0x1f));
  ray.m_Direction.x = 0.0;
  ray.m_Origin.y = INFINITY;
  uStack_4._4_4_ = (RaycastHit__Array *)fVar11;
  uStack_4._0_4_ = ray.m_Origin.x;
  stack0xfffffffc = fVar3;
  this = (AvatarAccessoryPreviewer *)uStack_6;
  ray.m_Origin.x = SUB84(uStack_6,4);
  uStack_6._0_4_ = this;
  uStack_6._4_4_ = (UseInteractorHandler *)&UNK_?;
  fVar15 = fVar7;
  ray_00 = (Ray)CONCAT1212(ray_00.m_Origin,_uStack_c);
  ray.m_Origin.x = ray.m_Origin.x;
  pRVar16 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_RaycastAll_5
                      (ray_00,INFINITY,(int32_t)ray.m_Origin.z,(MethodInfo *)0x0);
  uStack_4._4_4_ = pRVar16;
  uVar17 = 0;
  if (pRVar16 == (RaycastHit__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    pRVar18 = pRVar16->vector;
    while( true ) {
      if ((int)pRVar16->max_length <= (int)uVar17) {
        *gameObject = (GameObject *)0x0;
        func_?();
        return 0;
      }
      if (pRVar16->max_length <= uVar17) break;
      this_00 = (Component_1 *)func_?();
      if (this_00 == (Component_1 *)0x0) goto code_?;
      pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          (this_00,(MethodInfo *)0x0);
      *gameObject = pGVar19;
      if (*(uint *)((int)uStack_4._4_4_ + 0xc) <= uVar17) break;
      fVar3 = (pRVar18->m_Point).y;
      fVar7 = (pRVar18->m_Point).z;
      fVar11 = (pRVar18->m_Normal).x;
      iVar14 = pRVar18->m_Collider;
      fVar12 = (pRVar18->m_Normal).y;
      fVar20 = (pRVar18->m_Normal).z;
      uVar21 = pRVar18->m_FaceID;
      fVar22 = pRVar18->m_Distance;
      VVar23 = pRVar18->m_UV;
      (raycastHit->m_Point).x = (pRVar18->m_Point).x;
      (raycastHit->m_Point).y = fVar3;
      (raycastHit->m_Point).z = fVar7;
      (raycastHit->m_Normal).x = fVar11;
      (raycastHit->m_Normal).y = fVar12;
      (raycastHit->m_Normal).z = fVar20;
      raycastHit->m_FaceID = uVar21;
      raycastHit->m_Distance = fVar22;
      raycastHit->m_UV = VVar23;
      raycastHit->m_Collider = iVar14;
      if (*gameObject == (GameObject *)0x0) goto code_?;
      uStack_6._4_4_ =
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                     (*gameObject,
                      SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponent<SelectionHelperAvatarAccessory>__
                     );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar24 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)uStack_6._4_4_,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar24 != 0) {
        return 1;
      }
      uVar17 = uVar17 + 1;
      pRVar18 = pRVar18 + 1;
      pRVar16 = uStack_4._4_4_;
    }
  }
  func_?();
  func_?();
  pcVar25 = (code *)swi(3);
  bVar24 = (*pcVar25)();
  return bVar24;
}


/* Void PlayAnimation() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_PlayAnimation
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).animations;
  if (this_00 != (List_1_System_String_ *)0x0) {
    animationName =
         (String *)
         mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
         IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                   ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                    (this->fields).currentAnimation,
                    MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    AvatarAccessoryPreviewer_PlayAnimation_1(this,animationName,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PlayAnimation(String) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_PlayAnimation_1
               (AvatarAccessoryPreviewer *this,String *animationName,MethodInfo *method)

{
  pAVar1 = (this->fields).goAnimation;
  if (pAVar1 != (Animation *)0x0) {
    UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
              (pAVar1,animationName,(MethodInfo *)0x0);
    pAVar2 = (this->fields).OnAnimationActivators;
    uVar3 = 0;
    if (pAVar2 != (ActivateOnAnimationBase__Array *)0x0) {
      iVar4 = 0x10;
      do {
        if ((int)pAVar2->max_length <= (int)uVar3) {
          method_00 = (MethodInfo *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                    ((MonoBehaviour *)this,(MethodInfo *)0x0);
          pAVar1 = (this->fields).goAnimation;
          if ((pAVar1 != (Animation *)0x0) &&
             (this_00 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                  (pAVar1,animationName,(MethodInfo *)0x0),
             this_00 != (AnimationState *)0x0)) {
            UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_get_length
                      (this_00,(MethodInfo *)0x0);
            fVar5 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                     AnimationState_get_speed(this_00,(MethodInfo *)0x0);
            WVar6 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                    AnimationState_get_wrapMode
                              ((AnimationState *)((float)this_00 / fVar5),(MethodInfo *)0x0);
            fVar7 = _UNK_?;
            if (WVar6 != WrapMode__Enum_Loop) {
              fVar7 = _UNK_?;
            }
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            this_01 = (ScaleAnimationBase *)func_?();
            ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,method_00);
            if (this_01 != (ScaleAnimationBase *)0x0) {
              (this_01->fields).state = (int32_t)(((float)this_00 / fVar5) * fVar7);
              (this_01->fields).originalScale.x = (float)this;
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_StartCoroutine_Auto
                        ((MonoBehaviour *)this,(IEnumerator *)this_01,(MethodInfo *)0x0);
              return;
            }
          }
          break;
        }
        if (pAVar2 == (ActivateOnAnimationBase__Array *)0x0) break;
        if (pAVar2->max_length <= uVar3) goto code_?;
        piVar8 = *(int **)((int)pAVar2->vector + iVar4 + -0x10);
        if (piVar8 == (int *)0x0) break;
        (**(code **)(*piVar8 + 0xe8))(piVar8,animationName,*(undefined4 *)(*piVar8 + 0xec));
        pAVar2 = (this->fields).OnAnimationActivators;
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (pAVar2 != (ActivateOnAnimationBase__Array *)0x0);
    }
  }
  func_?(0);
code_?:
  uVar9 = func_?(0,0);
  func_?(uVar9);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void RemoveSkinnedMeshOptimizers() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::
     AvatarAccessoryPreviewer_RemoveSkinnedMeshOptimizers
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bodyClone;
  if (this_00 != (GameObject *)0x0) {
    pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       (this_00,
                        SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                       );
    uVar2 = 0;
    if (pUVar1 != (UseInteratorVisualization__Array *)0x0) {
      ppUVar3 = pUVar1->vector;
      while( true ) {
        if ((int)pUVar1->max_length <= (int)uVar2) {
          return;
        }
        if (pUVar1->max_length <= uVar2) break;
        x = *ppUVar3;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pSVar5 = (SkinnedMeshOptimizer *)func_?();
          if (pSVar5 == (SkinnedMeshOptimizer *)0x0) goto code_?;
          SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer(pSVar5,(MethodInfo *)0x0);
          pSVar5 = (SkinnedMeshOptimizer *)func_?();
          if (pSVar5 == (SkinnedMeshOptimizer *)0x0) goto code_?;
          SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh(pSVar5,(MethodInfo *)0x0);
          obj = (Object_1 *)func_?();
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0)
          ;
        }
        uVar2 = uVar2 + 1;
        ppUVar3 = ppUVar3 + 1;
      }
      uVar6 = func_?(0,0);
      func_?(uVar6);
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ResetPreviewTransform() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_ResetPreviewTransform
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).imagesReady == 0) {
    return;
  }
  this_00 = (this->fields).bodyClone;
  if (this_00 != (GameObject *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       (&QStack_2,(MethodInfo *)0x0);
    QStack_2.x = pQVar1->x;
    QStack_2.y = pQVar1->y;
    QStack_2.z = pQVar1->z;
    QStack_2.w = pQVar1->w;
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                       (&QStack_3,0.0,180.0,0.0,(MethodInfo *)0x0);
    lhs.y = QStack_2.y;
    lhs.x = QStack_2.x;
    lhs.z = QStack_2.z;
    lhs.w = QStack_2.w;
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                       (&QStack_3,lhs,*pQVar1,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (this_02,*pQVar1,(MethodInfo *)0x0);
      pAVar4 = (this->fields).toPreviewer;
      if ((pAVar4 != (AvatarPreviewer *)0x0) &&
         (this_01 = (pAVar4->fields).previewCam, this_01 != (Camera *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                  (this_01,(this->fields).startFov,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupPreviewer(MVBody) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_SetupPreviewer
               (AvatarAccessoryPreviewer *this,MVBody *avatarBody,MethodInfo *method)

{
  pAVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_SETUP,(MethodInfo *)0x0);
  (this->fields).avatarBody = avatarBody;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffff88,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)pQVar2->x;
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                     ((Quaternion *)&stack0xffffff98,0.0,180.0,0.0,method_00);
  lhs.y = pQVar2->x;
  lhs.x = (float)method_00;
  lhs.z = pQVar2->y;
  lhs.w = pQVar2->z;
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                     ((Quaternion *)&stack0xffffff88,lhs,*pQVar2,(MethodInfo *)0x0);
  pGVar3 = (this->fields).bodyClone;
  fVar4 = pQVar2->w;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    pGVar3 = (this->fields).bodyClone;
    if ((pGVar3 == (GameObject *)0x0) ||
       (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar3,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0))
    goto code_?;
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffff88,pTVar6,(MethodInfo *)0x0);
    fVar4 = pQVar2->w;
  }
  if (avatarBody != (MVBody *)0x0) {
    pGVar3 = MVBody::MVBody_CreateClone(avatarBody,(MethodInfo *)0x0);
    (this->fields).bodyClone = pGVar3;
    MVBody::MVBody_set_AccessoryMoveOverride(avatarBody,0,(MethodInfo *)0x0);
    pTVar6 = (this->fields).avatarResetToTransform;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      pTVar6 = (this->fields).avatarResetToTransform;
      if (pTVar6 == (Transform *)0x0) goto code_?;
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pTVar6,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar3,(MethodInfo *)0x0);
    }
    pAVar7 = (this->fields).toPreviewer;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pAVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      pAVar7 = (this->fields).toPreviewer;
      if (pAVar7 == (AvatarPreviewer *)0x0) goto code_?;
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pAVar7,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar3,(MethodInfo *)0x0);
    }
    pGVar3 = (GameObject *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
              (pGVar3,(MethodInfo *)0x0);
    if (pGVar3 != (GameObject *)0x0) {
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar3,(MethodInfo *)0x0);
      pRVar8 = (this->fields).toImage;
      (this->fields).avatarResetToTransform = pTVar6;
      func_?();
      if (pRVar8 != (RawImage *)0x0) {
        (*(code *)(pRVar8->klass->vtable).set_color.method)();
        pGVar3 = (this->fields).bodyClone;
        if (pGVar3 != (GameObject *)0x0) {
          pUVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_GetComponentsInChildren_29
                              (pGVar3,
                               UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                              );
          uVar10 = 0;
          if (pUVar9 != (UseInteratorVisualization__Array *)0x0) {
            ppUVar11 = pUVar9->vector;
            for (; (int)uVar10 < (int)pUVar9->max_length; uVar10 = uVar10 + 1) {
              if (pUVar9->max_length <= uVar10) goto code_?;
              if (*ppUVar11 == (UseInteratorVisualization *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)*ppUVar11,0,(MethodInfo *)0x0);
              ppUVar11 = ppUVar11 + 1;
            }
            pGVar3 = (this->fields).bodyClone;
            if (pGVar3 != (GameObject *)0x0) {
              pUVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponentsInChildren_29
                                  (pGVar3,
                                   PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                                  );
              uVar10 = 0;
              if (pUVar9 != (UseInteratorVisualization__Array *)0x0) {
                ppUVar11 = pUVar9->vector;
                for (; (int)uVar10 < (int)pUVar9->max_length; uVar10 = uVar10 + 1) {
                  if (pUVar9->max_length <= uVar10) goto code_?;
                  if ((*ppUVar11 == (UseInteratorVisualization *)0x0) ||
                     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_gameObject
                                          ((Component_1 *)*ppUVar11,(MethodInfo *)0x0),
                     pGVar3 == (GameObject *)0x0)) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar3,0,(MethodInfo *)0x0);
                  ppUVar11 = ppUVar11 + 1;
                }
                pGVar3 = (this->fields).bodyClone;
                if (pGVar3 != (GameObject *)0x0) {
                  pUVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_GetComponentsInChildren_29
                                      (pGVar3,
                                       AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                                      );
                  uVar10 = 0;
                  if (pUVar9 != (UseInteratorVisualization__Array *)0x0) {
                    ppUVar11 = pUVar9->vector;
                    for (; (int)uVar10 < (int)pUVar9->max_length; uVar10 = uVar10 + 1) {
                      if (pUVar9->max_length <= uVar10) goto code_?;
                      if ((*ppUVar11 == (UseInteratorVisualization *)0x0) ||
                         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_1_get_gameObject
                                              ((Component_1 *)*ppUVar11,(MethodInfo *)0x0),
                         pGVar3 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar3,0,(MethodInfo *)0x0);
                      ppUVar11 = ppUVar11 + 1;
                    }
                    pGVar3 = (this->fields).bodyClone;
                    if (pGVar3 != (GameObject *)0x0) {
                      pCVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_GetComponentsInChildren_20
                                          (pGVar3,1,
                                           SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                                          );
                      uVar10 = 0;
                      if (pCVar12 != (CFX_LightIntensityFade__Array *)0x0) {
                        ppCVar13 = pCVar12->vector;
                        for (; (int)uVar10 < (int)pCVar12->max_length; uVar10 = uVar10 + 1) {
                          if (pCVar12->max_length <= uVar10) goto code_?;
                          if ((*ppCVar13 == (CFX_LightIntensityFade *)0x0) ||
                             (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_1_GetComponent_58
                                                  ((Component_1 *)*ppCVar13,
                                                                                                      
                                                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                                                  ), this_02 == (MVInteractableBase *)0x0))
                          goto code_?;
                          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                                    ((Collider *)this_02,1,(MethodInfo *)0x0);
                          ppCVar13 = ppCVar13 + 1;
                        }
                        pGVar3 = (this->fields).bodyClone;
                        if (pGVar3 != (GameObject *)0x0) {
                          pCVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_GetComponentsInChildren_20
                                              (pGVar3,1,
                                               AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                                              );
                          uVar10 = 0;
                          if (pCVar12 != (CFX_LightIntensityFade__Array *)0x0) {
                            ppCVar13 = pCVar12->vector;
                            for (; (int)uVar10 < (int)pCVar12->max_length; uVar10 = uVar10 + 1) {
                              if (pCVar12->max_length <= uVar10) goto code_?;
                              if (*ppCVar13 == (CFX_LightIntensityFade *)0x0) goto code_?;
                              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                              Behaviour_set_enabled((Behaviour *)*ppCVar13,1,(MethodInfo *)0x0);
                              ppCVar13 = ppCVar13 + 1;
                            }
                            pGVar3 = (this->fields).bodyClone;
                            if (pGVar3 != (GameObject *)0x0) {
                              pCVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_GetComponentsInChildren_20
                                                  (pGVar3,1,
                                                                                                      
                                                  AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                                                  );
                              uVar10 = 0;
                              if (pCVar12 != (CFX_LightIntensityFade__Array *)0x0) {
                                ppCVar13 = pCVar12->vector;
                                for (; (int)uVar10 < (int)pCVar12->max_length; uVar10 = uVar10 + 1)
                                {
                                  if (pCVar12->max_length <= uVar10) goto code_?;
                                  if (*ppCVar13 == (CFX_LightIntensityFade *)0x0)
                                  goto code_?;
                                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                  Behaviour_set_enabled((Behaviour *)*ppCVar13,1,(MethodInfo *)0x0);
                                  ppCVar13 = ppCVar13 + 1;
                                }
                                pGVar3 = (this->fields).bodyClone;
                                if (pGVar3 != (GameObject *)0x0) {
                                  pUVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_GetComponentsInChildren_29
                                                      (pGVar3,
                                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                                  );
                                  uVar10 = 0;
                                  if (pUVar9 != (UseInteratorVisualization__Array *)0x0) {
                                    ppUVar11 = pUVar9->vector;
                                    for (; (int)uVar10 < (int)pUVar9->max_length;
                                        uVar10 = uVar10 + 1) {
                                      if (pUVar9->max_length <= uVar10) goto code_?;
                                      if (*ppUVar11 == (UseInteratorVisualization *)0x0)
                                      goto code_?;
                                      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                                Component_1_get_gameObject
                                                          ((Component_1 *)*ppUVar11,
                                                           (MethodInfo *)0x0);
                                      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.
                                                  methodPtr & 0x2000000) != 0) &&
                                         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                                        func_?();
                                      }
                                      UnityEngine.CoreModule.dll::UnityEngine::Object::
                                      Object_1_Destroy_1((Object_1 *)pGVar3,(MethodInfo *)0x0);
                                      ppUVar11 = ppUVar11 + 1;
                                    }
                                    pGVar3 = (this->fields).bodyClone;
                                    if (pGVar3 != (GameObject *)0x0) {
                                      pUVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_GetComponentsInChildren_29
                                                          (pGVar3,
                                                  InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                                  );
                                      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.
                                                  methodPtr & 0x2000000) != 0) &&
                                         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                                        func_?();
                                      }
                                      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                              Object_1_op_Inequality
                                                        ((Object_1 *)pUVar9,(Object_1 *)0x0,
                                                         (MethodInfo *)0x0);
                                      if (bVar5 != 0) {
                                        if ((pUVar9 == (UseInteratorVisualization__Array *)0x0) ||
                                           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_1_get_gameObject
                                                                ((Component_1 *)pUVar9,
                                                                 (MethodInfo *)0x0),
                                           pGVar3 == (GameObject *)0x0)) goto code_?;
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                                      }
                                      AvatarAccessoryPreviewer_RemoveSkinnedMeshOptimizers
                                                (this,(MethodInfo *)0x0);
                                      pGVar3 = (this->fields).bodyClone;
                                      if (pGVar3 != (GameObject *)0x0) {
                                        pUVar9 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_GetComponentsInChildren_29
                                                            (pGVar3,
                                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                                  );
                                        iVar14 = 0;
                                        if (pUVar9 != (UseInteratorVisualization__Array *)0x0) {
                                          for (; iVar14 < (int)pUVar9->max_length;
                                              iVar14 = iVar14 + 1) {
                                            iVar15 = 0;
                                            while( true ) {
                                              pRVar16 = (Renderer *)func_?();
                                              if ((pRVar16 == (Renderer *)0x0) ||
                                                 (pMVar17 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Renderer::Renderer_get_materials
                                                                      (pRVar16,(MethodInfo *)0x0),
                                                 pMVar17 == (Material__Array *)0x0))
                                              goto code_?;
                                              if ((int)pMVar17->max_length <= iVar15) break;
                                              pRVar16 = (Renderer *)func_?();
                                              if (((pRVar16 == (Renderer *)0x0) ||
                                                  (pMVar17 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::Renderer::Renderer_get_materials
                                                                       (pRVar16,(MethodInfo *)0x0),
                                                  pMVar17 == (Material__Array *)0x0)) ||
                                                 (pMVar18 = (Material *)func_?(),
                                                 pMVar18 == (Material *)0x0)) goto code_?;
                                              bVar5 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Material::Material_HasProperty_1
                                                                (pMVar18,StringLiteral__Color,
                                                                 (MethodInfo *)0x0);
                                              if (bVar5 != 0) {
                                                pRVar16 = (Renderer *)func_?();
                                                if (((pRVar16 == (Renderer *)0x0) ||
                                                    (pMVar17 = UnityEngine.CoreModule.dll::
                                                               UnityEngine::Renderer::
                                                               Renderer_get_materials
                                                                         (pRVar16,(MethodInfo *)0x0)
                                                    , pMVar17 == (Material__Array *)0x0)) ||
                                                   (pMVar18 = (Material *)func_?(),
                                                   pMVar18 == (Material *)0x0))
                                                goto code_?;
                                                pCVar19 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Material::Material_get_color
                                                                    ((Color *)&stack0xffffffb8,
                                                                     pMVar18,(MethodInfo *)0x0);
                                                fVar20 = pCVar19->r;
                                                fVar21 = pCVar19->g;
                                                fVar22 = pCVar19->b;
                                                pRVar16 = (Renderer *)func_?();
                                                if (((pRVar16 == (Renderer *)0x0) ||
                                                    (pMVar17 = UnityEngine.CoreModule.dll::
                                                               UnityEngine::Renderer::
                                                               Renderer_get_materials
                                                                         (pRVar16,(MethodInfo *)0x0)
                                                    , pMVar17 == (Material__Array *)0x0)) ||
                                                   (pMVar18 = (Material *)func_?(),
                                                   pMVar18 == (Material *)0x0))
                                                goto code_?;
                                                value_00.g = fVar21;
                                                value_00.r = fVar20;
                                                value_00.b = fVar22;
                                                value_00.a = 1.0;
                                                UnityEngine.CoreModule.dll::UnityEngine::Material::
                                                Material_set_color(pMVar18,value_00,
                                                                   (MethodInfo *)0x0);
                                              }
                                              iVar15 = iVar15 + 1;
                                            }
                                          }
                                          pGVar3 = (this->fields).bodyClone;
                                          if (pGVar3 != (GameObject *)0x0) {
                                            pUVar9 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::
                                                      GameObject_GetComponentsInChildren_29
                                                                (pGVar3,
                                                  UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                                  );
                                            pLVar23 = (this->fields).animations;
                                            (this->fields).goAnimation = (Animation *)pUVar9;
                                            if ((pLVar23 != (List_1_System_String_ *)0x0) &&
                                               (animation = (String *)
                                                            mscorlib.dll::System::Collections::
                                                            Generic::List`1[UnityEngine::
                                                            EventSystems::IEventSystemHandler]::
                                                                                                                        
                                                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                                            ((
                                                  List_1_UnityEngine_EventSystems_IEventSystemHandler_
                                                  *)pLVar23,(this->fields).currentAnimation,
                                                  MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                                                  ), pUVar9 !=
                                                     (UseInteratorVisualization__Array *)0x0)) {
                                              UnityEngine.AnimationModule.dll::UnityEngine::
                                              Animation::Animation_Play_3
                                                        ((Animation *)pUVar9,animation,
                                                         (MethodInfo *)0x0);
                                              this_00 = (this->fields).goAnimation;
                                              if (this_00 != (Animation *)0x0) {
                                                pUVar9 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          GameObject::
                                                          GameObject_GetComponentsInChildren_29
                                                                    ((GameObject *)this_00,
                                                                                                                                          
                                                  ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                                                  );
                                                (this->fields).OnAnimationActivators =
                                                     (ActivateOnAnimationBase__Array *)pUVar9;
                                                uVar10 = 0;
                                                if (pUVar9 !=
                                                    (UseInteratorVisualization__Array *)0x0) {
                                                  this = (AvatarAccessoryPreviewer *)0x10;
                                                  while ((int)uVar10 < (int)pUVar9->max_length) {
                                                    if (pUVar9 ==
                                                        (UseInteratorVisualization__Array *)0x0)
                                                    goto code_?;
                                                    if (pUVar9->max_length <= uVar10)
                                                    goto code_?;
                                                    pLVar23 = (pAVar1->fields).animations;
                                                    piVar24 = *(int **)((int)pUVar9->vector +
                                                                      (int)&this[-1].fields.
                                                                            goAnimation);
                                                    if ((pLVar23 == (List_1_System_String_ *)0x0) ||
                                                       (mscorlib.dll::System::Collections::Generic::
                                                        List`1[UnityEngine::EventSystems::
                                                        IEventSystemHandler]::
                                                                                                                
                                                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                                            ((
                                                  List_1_UnityEngine_EventSystems_IEventSystemHandler_
                                                  *)pLVar23,(pAVar1->fields).currentAnimation,
                                                  MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                                                  ), piVar24 == (int *)0x0)) goto code_?;
                                                  (**(code **)(*piVar24 + 0xe8))();
                                                  uVar10 = uVar10 + 1;
                                                  pUVar9 = (UseInteratorVisualization__Array *)
                                                            (pAVar1->fields).OnAnimationActivators;
                                                  this = (AvatarAccessoryPreviewer *)&this->monitor;
                                                  if (pUVar9 ==
                                                      (UseInteratorVisualization__Array *)0x0)
                                                  goto code_?;
                                                  }
                                                  pAVar7 = (pAVar1->fields).previewer;
                                                  if ((((uint)(TypeInfo__UnityEngine__Object->vtable
                                                              ).Equals.methodPtr & 0x2000000) != 0)
                                                     && ((TypeInfo__UnityEngine__Object->_1).
                                                         cctor_started == 0)) {
                                                    func_?();
                                                  }
                                                  pAVar7 = (AvatarPreviewer *)
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Object::Object_1_Instantiate_251
                                                                      ((XpBoostParticlePreviewer *)
                                                                       pAVar7,
                                                  AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                                                  );
                                                  iVar25 = (pAVar1->fields).previewDimensionsX;
                                                  (pAVar1->fields).toPreviewer = pAVar7;
                                                  textureHeight =
                                                       (pAVar1->fields).previewDimensionsY;
                                                  if ((((uint)(TypeInfo__MVGameControllerBase->
                                                              vtable).Equals.methodPtr & 0x2000000)
                                                       != 0) &&
                                                     ((TypeInfo__MVGameControllerBase->_1).
                                                      cctor_started == 0)) {
                                                    func_?();
                                                  }
                                                  pMVar26 = MVGameControllerBase::
                                                            MVGameControllerBase_get_LocalPlayer
                                                                      ((MethodInfo *)0x0);
                                                  if ((pMVar26 != (MVLocalPlayer *)0x0) &&
                                                     (this_03 = (PrefabPool *)
                                                                MVLocalPlayer::
                                                                MVLocalPlayer_get_Body
                                                                          (pMVar26,(MethodInfo *)0x0
                                                                          ),
                                                     this_03 != (PrefabPool *)0x0)) {
                                                    layersToRender =
                                                         PrefabPool::
                                                         PrefabPool_get_MVSpawnPointYellowPrefab
                                                                   (this_03,(MethodInfo *)0x0);
                                                    fVar20 = 0.0;
                                                    func_?();
                                                    pTVar6 = (pAVar1->fields).avatarResetToTransform
                                                    ;
                                                    uVar27 = 0;
                                                    func_?();
                                                    uVar28 = 0xADDR;
                                                    pMVar26 = MVGameControllerBase::
                                                              MVGameControllerBase_get_LocalPlayer
                                                                        ((MethodInfo *)0x0);
                                                    if (pMVar26 != (MVLocalPlayer *)0x0) {
                                                      wo = MVLocalPlayer::MVLocalPlayer_get_Body
                                                                     (pMVar26,(MethodInfo *)0x0);
                                                      pGVar3 = (pAVar1->fields).bodyClone;
                                                      puVar29 = &stack0xffffffe0;
                                                      fVar22 = 0.0;
                                                      fVar21 = 0.0;
                                                      uVar30 = 0x41700000;
                                                      puVar31 = &UNK_?;
                                                      func_?();
                                                      if (pAVar7 != (AvatarPreviewer *)0x0) {
                                                        fVar32 = 0.0;
                                                        cameraOffset.z = fVar20;
                                                        cameraOffset.x = (float)(int)uVar28;
                                                        cameraOffset.y =
                                                             (float)(int)((ulonglong)uVar28 >> 0x20)
                                                        ;
                                                        previewPosition.y = (float)puVar31;
                                                        previewPosition.x = (float)uVar27;
                                                        previewPosition.z = (float)puVar29;
                                                        additionalCameraRotation.y = fVar21;
                                                        additionalCameraRotation.x = (float)uVar30;
                                                        additionalCameraRotation.z = fVar22;
                                                        AvatarPreviewer::AvatarPreviewer_Initialize
                                                                  (pAVar7,iVar25,textureHeight,
                                                                   CameraClearFlags__Enum_Color,
                                                                   (LayerFlags__Enum)layersToRender,
                                                                   cameraOffset,pTVar6,
                                                                   previewPosition,
                                                                                                                                      
                                                  StringLiteral_Avatar_accessory_preview,
                                                  (MVWorldObjectClient *)wo,pGVar3,
                                                  additionalCameraRotation,(MethodInfo *)0x0);
                                                  pAVar7 = (pAVar1->fields).toPreviewer;
                                                  if (((pAVar7 != (AvatarPreviewer *)0x0) &&
                                                      (pCVar33 = (pAVar7->fields).previewCam,
                                                      pCVar33 != (Camera *)0x0)) &&
                                                     (pTVar6 = UnityEngine.CoreModule.dll::
                                                               UnityEngine::Component::
                                                               Component_1_get_transform
                                                                         ((Component_1 *)pCVar33,
                                                                          (MethodInfo *)0x0),
                                                     pTVar6 != (Transform *)0x0)) {
                                                    pVVar34 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_position
                                                                        ((Vector3 *)&stack0xffffff9c
                                                                         ,pTVar6,(MethodInfo *)0x0);
                                                    uVar35._0_4_ = pVVar34->x;
                                                    uVar35._4_4_ = pVVar34->y;
                                                    fVar20 = pVVar34->z;
                                                    fVar36 = 0.0;
                                                    fVar37 = 0.0;
                                                    fVar38 = 0.0;
                                                    uVar35 = uVar35 & 0xffffffff00000000;
                                                    func_?();
                                                    if ((((uint)(TypeInfo__UnityEngine__Vector3->
                                                                vtable).Equals.methodPtr & 0x2000000
                                                         ) != 0) &&
                                                       ((TypeInfo__UnityEngine__Vector3->_1).
                                                        cctor_started == 0)) {
                                                      func_?(TypeInfo__UnityEngine__Vector3
                                                                     );
                                                    }
                                                    b.y = fVar38;
                                                    b.x = fVar37;
                                                    a.z = fVar20;
                                                    a.x = (float)(int)uVar35;
                                                    a.y = (float)(int)(uVar35 >> 0x20);
                                                    b.z = fVar36;
                                                    pVVar34 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Vector3::
                                                              Vector3_op_Addition((Vector3 *)
                                                                                  &stack0xffffff9c,a
                                                                                  ,b,(MethodInfo *)
                                                                                     0x0);
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_set_position
                                                              (pTVar6,*pVVar34,(MethodInfo *)0x0);
                                                    pGVar3 = (pAVar1->fields).bodyClone;
                                                    if ((pGVar3 != (GameObject *)0x0) &&
                                                       (pTVar6 = UnityEngine.CoreModule.dll::
                                                                 UnityEngine::GameObject::
                                                                 GameObject_get_transform
                                                                           (pGVar3,(MethodInfo *)
                                                                                    0x0),
                                                       pTVar6 != (Transform *)0x0)) {
                                                      value.y = fVar22;
                                                      value.x = fVar21;
                                                      value.z = fVar32;
                                                      value.w = fVar4;
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_rotation
                                                                (pTVar6,value,(MethodInfo *)0x0);
                                                      pAVar7 = (pAVar1->fields).toPreviewer;
                                                      if ((pAVar7 != (AvatarPreviewer *)0x0) &&
                                                         (pCVar33 = (pAVar7->fields).previewCam,
                                                         pCVar33 != (Camera *)0x0)) {
                                                        fVar4 = UnityEngine.CoreModule.dll::
                                                                 UnityEngine::Camera::
                                                                 Camera_get_fieldOfView
                                                                           (pCVar33,(MethodInfo *)0x0
                                                                           );
                                                        pGVar3 = (pAVar1->fields).bodyClone;
                                                        (pAVar1->fields).startFov = fVar4;
                                                        iVar25 = LayerUtil::LayerUtil_GetLayerNumber
                                                                           (LayerFlags__Enum_Hidden,
                                                                            (MethodInfo *)0x0);
                                                        LayerUtil::LayerUtil_SetLayerRecursively_4
                                                                  (pGVar3,iVar25,(MethodInfo *)0x0)
                                                        ;
                                                        pAVar7 = (pAVar1->fields).toPreviewer;
                                                        pRVar8 = (pAVar1->fields).toImage;
                                                        if ((pAVar7 != (AvatarPreviewer *)0x0) &&
                                                           (value_01 = (Texture *)
                                                                       System.Core.dll::System::Linq
                                                                       ::
                                                  Enumerable+<CreateSelectIterator>c__Iterator10`2[System
                                                  ::Collections::Generic::KeyValuePair`2[System::
                                                  Object,System::Object],System::Object]::
                                                  Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                                            ((
                                                  Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                                  *)pAVar7,(MethodInfo *)0x0),
                                                  pRVar8 != (RawImage *)0x0)) {
                                                    UnityEngine.UI.dll::UnityEngine::UI::RawImage::
                                                    RawImage_set_texture
                                                              (pRVar8,value_01,(MethodInfo *)0x0);
                                                    this_04 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Object::
                                                              Object_1_Instantiate_251
                                                                        ((XpBoostParticlePreviewer *
                                                                         )(pAVar1->fields).
                                                                          dropShadowPlane,
                                                                                                                                                  
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                                  if ((this_04 != (XpBoostParticlePreviewer *)0x0)
                                                     && (pTVar6 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::GameObject::
                                                                  GameObject_get_transform
                                                                            ((GameObject *)this_04,
                                                                             (MethodInfo *)0x0),
                                                        pTVar6 != (Transform *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_SetParent
                                                              (pTVar6,(pAVar1->fields).
                                                                      avatarResetToTransform,
                                                               (MethodInfo *)0x0);
                                                    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::GameObject::GameObject_get_transform
                                                                       ((GameObject *)this_04,
                                                                        (MethodInfo *)0x0);
                                                    this_01 = (
                                                  AddDotsToTruncatedText_Start_c_Iterator0 *)
                                                  (pAVar1->fields).toPreviewer;
                                                  if (((this_01 !=
                                                        (AddDotsToTruncatedText_Start_c_Iterator0 *)
                                                        0x0) && (pGVar3 = (GameObject *)
                                                                                                                                                      
                                                  AddDotsToTruncatedText+<Start>c__Iterator0::
                                                  AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                                                            (this_01,(MethodInfo *)0x0),
                                                  pGVar3 != (GameObject *)0x0)) &&
                                                  (this_05 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::GameObject::GameObject_get_transform
                                                                       (pGVar3,(MethodInfo *)0x0),
                                                  this_05 != (Transform *)0x0)) {
                                                    pVVar34 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_position
                                                                        ((Vector3 *)&stack0xffffff9c
                                                                         ,this_05,(MethodInfo *)0x0)
                                                    ;
                                                    uVar39._0_4_ = pVVar34->x;
                                                    uVar39._4_4_ = pVVar34->y;
                                                    fVar4 = pVVar34->z;
                                                    fVar20 = 0.0;
                                                    uVar27 = 0;
                                                    uVar30 = 0;
                                                    uVar39 = uVar39 & 0xffffffff00000000;
                                                    func_?();
                                                    a_00.z = fVar4;
                                                    a_00.x = (float)(int)uVar39;
                                                    a_00.y = (float)(int)(uVar39 >> 0x20);
                                                    b_00.y = (float)uVar30;
                                                    b_00.x = (float)uVar27;
                                                    b_00.z = fVar20;
                                                    pVVar34 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Vector3::
                                                              Vector3_op_Addition((Vector3 *)
                                                                                  &stack0xffffff9c,
                                                                                  a_00,b_00,
                                                                                  (MethodInfo *)0x0)
                                                    ;
                                                    if (pTVar6 != (Transform *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_position
                                                                (pTVar6,*pVVar34,(MethodInfo *)0x0);
                                                      (pAVar1->fields).imagesReady = 1;
                                                      return;
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
        }
      }
    }
  }
code_?:
  func_?();
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
  return;
code_?:
  func_?();
  func_?();
  goto code_?;
}


/* Void Start() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_Start
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_CharacterEditor) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__AvatarAccessoryPreviewer___Start_m__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
              );
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_00 != (MVLocalPlayer *)0x0) {
    avatarBody = MVLocalPlayer::MVLocalPlayer_get_Body(this_00,(MethodInfo *)0x0);
    AvatarAccessoryPreviewer_SetupPreviewer(this,avatarBody,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_Update
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  MVInputWrapper::MVInputWrapper_SuppressInGameInput((MethodInfo *)0x0);
  MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
  if ((this->fields).imagesReady != 0) {
    this_00 = (this->fields).toPreviewer;
    if (this_00 == (AvatarPreviewer *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AvatarPreviewer::AvatarPreviewer_UpdateRotation
              (this_00,(this->fields).currentRotationSpeed,(MethodInfo *)0x0);
    (this->fields).currentRotationSpeed = 0.0;
  }
  return;
}


/* Void <Start>m__0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer__Start_m__0
               (AvatarAccessoryPreviewer *this,IGetCurrentBody *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<MVBody>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__AvatarAccessoryPreviewer__SetupPreviewer_MVBody_,
             MethodInfo__System__Action<MVBody>__Action_System__Object__void__);
  if (x == (IGetCurrentBody *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = x->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IGetCurrentBody) {
        ppMVar5 = &(&x->klass->vtable)[pIVar2->interfaceOffsets[uVar3].offset].GetCurrentBody.method
        ;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  ppMVar5 = (MethodInfo **)func_?(x,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody,0)
  ;
code_?:
  (*(code *)*ppMVar5)(x,ppMVar5[1]);
  return;
}


/* AvatarAccessoryPreviewer() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer__ctor
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).previewDimensionsX = 0x200;
  (this->fields).previewDimensionsY = 0x400;
  (this->fields).rotationSensitivity = 15.0;
  (this->fields).zoomSpeed = 1.5;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  if (this_00 != (List_1_UnityEngine_Vector4_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)StringLiteral_Idle,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)StringLiteral_Walk,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)StringLiteral_Jump,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)StringLiteral_Swim,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)StringLiteral_Dead,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    (this->fields).animations = (List_1_System_String_ *)this_00;
    UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

