
/* Void InitializeObjectPreview(AvatarRepositoryItem, MVWorldObjectClient, Transform) */

void Assembly-CSharp.dll::AvatarShopPreviewItem::AvatarShopPreviewItem_InitializeObjectPreview
               (AvatarShopPreviewItem *this,AvatarRepositoryItem *item,MVWorldObjectClient *wo,
               Transform *previewItemsRoot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).previewer;
  (this->fields).item = item;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pAVar1 = (AvatarPreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pAVar1,
                      AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                     );
  (this->fields).previewer = pAVar1;
  iStack_2 = (this->fields).previewWidth;
  iStack_3 = (this->fields).previewHeight;
  if (wo != (MVWorldObjectClient *)0x0) {
    layersToRender =
         PrefabPool::PrefabPool_get_MVSpawnPointYellowPrefab((PrefabPool *)wo,(MethodInfo *)0x0);
    fStack_4 = 0.0;
    uStack_5 = 0;
    func_?(&uStack_5,0,0,0);
    if (item != (AvatarRepositoryItem *)0x0) {
      fStack_6 = 0.0;
      uStack_7 = 0;
      func_?(&uStack_7,0x42c80000,0x42c80000,
                      (float)(item->fields).slotPosition * _UNK_?,0);
      name = (item->fields).name;
      woGameObjectCopy =
           DayNightCycle::DayNightCycle_get_CurrentMoonParam((DayNightCycle *)wo,(MethodInfo *)0x0);
      if (pAVar1 != (AvatarPreviewer *)0x0) {
        cameraOffset.z = fStack_4;
        cameraOffset.x = (float)(undefined4)uStack_5;
        cameraOffset.y = (float)uStack_5._4_4_;
        previewPosition.z = fStack_6;
        previewPosition.x = (float)(undefined4)uStack_7;
        previewPosition.y = (float)uStack_7._4_4_;
        AvatarPreviewer::AvatarPreviewer_Initialize
                  (pAVar1,iStack_2,iStack_3,CameraClearFlags__Enum_Color,
                   (LayerFlags__Enum)layersToRender,cameraOffset,previewItemsRoot,previewPosition,
                   name,wo,(GameObject *)woGameObjectCopy,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
        pAVar1 = (this->fields).previewer;
        if ((pAVar1 != (AvatarPreviewer *)0x0) &&
           (this_00 = (pAVar1->fields)._PreviewGameObject_k__BackingField,
           this_00 != (GameObject *)0x0)) {
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_00,(MethodInfo *)0x0);
          if (this_02 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_3
                      (this_02,0.0,180.0,0.0,(MethodInfo *)0x0);
            pAVar1 = (this->fields).previewer;
            if ((pAVar1 != (AvatarPreviewer *)0x0) &&
               (this_01 = (this->fields).previewImage, this_01 != (RawImage *)0x0)) {
              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                        (this_01,(Texture *)(pAVar1->fields).previewTexture,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SlotPressed() */

void Assembly-CSharp.dll::AvatarShopPreviewItem::AvatarShopPreviewItem_SlotPressed
               (AvatarShopPreviewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarShopPreviewItem___SlotPressed_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).popup;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      AvatarPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarPurchasePopup>_AvatarPurchasePopup_
                     );
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = pXVar1;
    pAVar2 = (this->fields).item;
    if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
      piVar3 = (int *)(pXVar1->fields).layersToRender;
      (pXVar1->fields).xpBoostParticles = (ParticleSystem *)pAVar2;
      if (pAVar2 != (AvatarRepositoryItem *)0x0) {
        uVar4 = func_?(&(pAVar2->fields).priceGold,0);
        if (piVar3 != (int *)0x0) {
          this_03 = *(PrefabPool **)(*piVar3 + 0x30c);
          (**(code **)(*piVar3 + 0x308))(piVar3,uVar4);
          this_00 = (RawImage *)(pXVar1->fields).previewCam;
          if (this_03 != (PrefabPool *)0x0) {
            value = PrefabPool::PrefabPool_get_MVCheckpointPrefab(this_03,(MethodInfo *)0x0);
            if (this_00 != (RawImage *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                        (this_00,(Texture *)value,(MethodInfo *)0x0);
              root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this,(MethodInfo *)0x0);
              this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?(
                                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                          );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_02,(Object *)this_01,
                         MethodInfo__AvatarShopPreviewItem___SlotPressed_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                        );
              if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy_63
                        (root,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarShopPreviewItem::AvatarShopPreviewItem_Update
               (AvatarShopPreviewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).previewer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pAVar1 = (this->fields).previewer;
  if (pAVar1 != (AvatarPreviewer *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pGVar3 = (pAVar1->fields)._PreviewGameObject_k__BackingField;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pGVar3 = (pAVar1->fields)._PreviewGameObject_k__BackingField;
    if (pGVar3 != (GameObject *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar3,(MethodInfo *)0x0);
      uStack_4._0_4_ = (pAVar1->fields).pivotPoint.x;
      uStack_4._4_4_ = (pAVar1->fields).pivotPoint.y;
      fVar5 = (pAVar1->fields).pivotPoint.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                         (&VStack_7,(MethodInfo *)0x0);
      uStack_8._0_4_ = pVVar6->x;
      uStack_8._4_4_ = pVVar6->y;
      fVar9 = pVVar6->z;
      fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      if (this_00 != (Transform *)0x0) {
        point.z = fVar5;
        point.x = (float)(undefined4)uStack_4;
        point.y = (float)uStack_4._4_4_;
        axis.z = fVar9;
        axis.x = (float)(undefined4)uStack_8;
        axis.y = (float)uStack_8._4_4_;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                  (this_00,point,axis,fVar10 * _UNK_?,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

