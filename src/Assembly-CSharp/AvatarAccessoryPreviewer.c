
/* IEnumerator AnimationEndTrack(Single) */

IEnumerator * Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_AnimationEndTrack(AvatarAccessoryPreviewer *this,float resetDelay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23(value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].monitor = (MonitorData *)this;
    func_?(&value[2].monitor,this);
    value[2].klass = (Object__Class *)resetDelay;
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void ChangeAnimation() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_ChangeAnimation(AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).animations;
  iVar2 = (this->fields).currentAnimation + 1;
  (this->fields).currentAnimation = iVar2;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    if ((pLVar1->fields)._size <= iVar2) {
      iVar2 = 1;
    }
    (this->fields).currentAnimation = iVar2;
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
      cRam_? = '\x01';
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)(this->fields).animations;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      animationName = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::RegexCharClass+SingleRange]::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item(this_00,(this->fields).currentAnimation,MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
      AvatarAccessoryPreviewer_PlayAnimation_1(this,(String *)animationName,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnDestroy(AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).avatarBody != (MVBody *)0x0) {
    MVBody::MVBody_DestroyClone((this->fields).avatarBody,(MethodInfo *)0x0);
  }
  pAVar1 = (this->fields).toPreviewer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields).toPreviewer;
    if (pAVar1 == (AvatarPreviewer *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pAVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pTVar4 = (this->fields).avatarResetToTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar4 = (this->fields).avatarResetToTransform;
    if (pTVar4 == (Transform *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pTVar4,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar3,(MethodInfo *)0x0);
    (this->fields).avatarResetToTransform = (Transform *)0x0;
    func_?();
  }
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnDrag(AvatarAccessoryPreviewer *this,PointerEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Mouse_Y);
    func_?(&StringLiteral_Mouse_X);
    cRam_? = '\x01';
  }
  (this->fields).pickedAccessory = 0;
  fVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetAxis(StringLiteral_Mouse_X,(MethodInfo *)0x0);
  pAVar2 = (this->fields).toPreviewer;
  (this->fields).currentRotationSpeed = -fVar1 * (this->fields).rotationSensitivity;
  if ((pAVar2 != (AvatarPreviewer *)0x0) && (pCVar3 = (pAVar2->fields).previewCam, pCVar3 != (Camera *)0x0)) {
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView(pCVar3,(MethodInfo *)0x0);
    fVar5 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetAxis(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    fVar1 = (this->fields).zoomSpeed;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView(pCVar3,fVar1 * fVar5 * fVar6 + fVar4,(MethodInfo *)0x0);
    pAVar2 = (this->fields).toPreviewer;
    if (pAVar2 != (AvatarPreviewer *)0x0) {
      pCVar3 = (pAVar2->fields).previewCam;
      this_00 = (((this->fields).toPreviewer)->fields).previewCam;
      if (this_00 != (Camera *)0x0) {
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView(this_00,(MethodInfo *)0x0);
        fVar1 = 20.0;
        if ((fVar4 < 20.0) || (fVar1 = 60.0, 60.0 < fVar4)) {
          fVar4 = fVar1;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView(pCVar3,fVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnPointerClick(PointerEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnPointerClick(AvatarAccessoryPreviewer *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>);
    func_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_);
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionHelperAvatarAccessory>_bool_);
    func_?(&TypeInfo__UnityEngine__RectTransformUtility);
    func_?(&MethodInfo__AvatarAccessoryPreviewer____c__DisplayClass30_0___OnPointerClick_b__0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_);
    func_?(&TypeInfo__AvatarAccessoryPreviewer____c__DisplayClass30_0);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  fVar2 = 0.0;
  func_?(&stack0xffffff80,0,0x2c);
  pSStack_3 = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  pVVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition((Vector3 *)&puStack_5,(MethodInfo *)0x0);
  fVar6 = pVVar4->x;
  fVar7 = pVVar4->y;
  pRVar8 = (this->fields).toImage;
  if (pRVar8 != (RawImage *)0x0) {
    pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pRVar8,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__RectTransformUtility->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    VVar10.y = fVar7;
    VVar10.x = fVar6;
    UnityEngine.UIModule.dll::UnityEngine::RectTransformUtility::RectTransformUtility_ScreenPointToLocalPointInRectangle(pRVar9,VVar10,(Camera *)0x0,(Vector2 *)&stack0xffffffe0,(MethodInfo *)0x0);
    pRVar8 = (this->fields).toImage;
    if ((pRVar8 != (RawImage *)0x0) && (pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pRVar8,(MethodInfo *)0x0), pRVar9 != (RectTransform *)0x0)) {
      pRVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect((Rect *)&stack0xffffffc4,pRVar9,(MethodInfo *)0x0);
      pSStack_3 = (SubscribableVariableBase_1_System_Single___Class *)pRVar11->m_XMin;
      fVar6 = SubscribableVariableBase`1[System::Single]::SubscribableVariableBase_1_System_Single__get_Value((SubscribableVariableBase_1_System_Single_ *)&pSStack_3,(MethodInfo *)0x0);
      pRVar8 = (this->fields).toImage;
      if (pRVar8 != (RawImage *)0x0) {
        pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pRVar8,(MethodInfo *)0x0);
        if (pRVar9 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot(pRVar9,(MethodInfo *)0x0);
          pRVar8 = (this->fields).toImage;
          if ((pRVar8 != (RawImage *)0x0) && (pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pRVar8,(MethodInfo *)0x0), pRVar9 != (RectTransform *)0x0)) {
            pRVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect((Rect *)&stack0xffffffc4,pRVar9,(MethodInfo *)0x0);
            pSStack_3 = (SubscribableVariableBase_1_System_Single___Class *)pRVar11->m_XMin;
            fVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::Int32Enum,System::Single]::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_ *)&pSStack_3,(MethodInfo *)0x0);
            pRVar8 = (this->fields).toImage;
            if (pRVar8 != (RawImage *)0x0) {
              puVar12 = &UNK_?;
              pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pRVar8,(MethodInfo *)0x0);
              if (pRVar9 != (RectTransform *)0x0) {
                VVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot(pRVar9,(MethodInfo *)0x0);
                fStack_13 = VVar10.y;
                pAVar14 = (this->fields).toPreviewer;
                if ((pAVar14 != (AvatarPreviewer *)0x0) && (this_00 = (pAVar14->fields).previewCam, this_00 != (Camera *)0x0)) {
                  pos.y = fVar2 + fVar7 / (1.0 / fStack_13);
                  pos.x = fVar1 + fVar6 / (1.0 / (float)puVar12);
                  pos.z = 0.0;
                  pRVar15 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2((Ray *)&stack0xffffffbc,this_00,pos,(MethodInfo *)0x0);
                  if ((this->fields).pickedAccessory != 0) {
                    pGVar16 = (GameObject *)(pRVar15->m_Direction).y;
                    uVar17 = (pRVar15->m_Direction).z;
                    uVar18 = (pRVar15->m_Origin).x;
                    uVar19 = (pRVar15->m_Origin).y;
                    uVar20 = (pRVar15->m_Origin).z;
                    ray.m_Origin.z = (float)uVar20;
                    ray.m_Origin.y = (float)uVar19;
                    ray.m_Origin.x = (float)uVar18;
                    uVar21 = (pRVar15->m_Direction).x;
                    uVar22 = (pRVar15->m_Direction).y;
                    ray.m_Direction.y = (float)uVar22;
                    ray.m_Direction.x = (float)uVar21;
                    method_00 = (MethodInfo *)&UNK_?;
                    ray.m_Direction.z = (float)uVar17;
                    bVar23 = AvatarAccessoryPreviewer_PickAccessory(this,ray,(GameObject **)&stack0xfffffff8,(RaycastHit *)&stack0xffffff80,(MethodInfo *)0x0);
                    if (bVar23 != 0) {
                      value = (Object *)func_?();
                      if (value != (Object *)0x0) {
                        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23(value,ExceptionArgument__Enum_obj,method_00);
                        if ((pGVar16 != (GameObject *)0x0) && (pOVar24 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_2(pGVar16,1,SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionHelperAvatarAccessory>_bool_), pOVar24 != (Object *)0x0)) {
                          pOVar25 = (Object__Class *)AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByStreamingAssetId((int32_t)pOVar24[3].klass,(MethodInfo *)0x0);
                          value[1].klass = pOVar25;
                          func_?();
                          pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                          callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
                          if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,MethodInfo__AvatarAccessoryPreviewer____c__DisplayClass30_0___OnPointerClick_b__0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_,(MethodInfo *)0x0);
                            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy(pGVar16,(BaseEventData *)0x0,callbackFunction,UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_);
                            return;
                          }
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
  }
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnPointerDown(AvatarAccessoryPreviewer *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).currentRotationSpeed = 0.0;
  (this->fields).pickedAccessory = 1;
  return;
}


/* Void OnRestartAnimation() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnRestartAnimation(AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).goAnimation;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pAVar1 = (this->fields).goAnimation;
    if (pAVar1 == (Animation *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pAVar4 = (ActivateOnAnimationBase__Array *)Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pAVar1,ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______);
    (this->fields).OnAnimationActivators = pAVar4;
    func_?(&(this->fields).OnAnimationActivators,pAVar4);
    AvatarAccessoryPreviewer_RemoveSkinnedMeshOptimizers(this,(MethodInfo *)0x0);
    AvatarAccessoryPreviewer_PlayAnimation_1(this,StringLiteral_Idle,(MethodInfo *)0x0);
  }
  return;
}


/* Boolean PickAccessory(Ray, GameObject ByRef, RaycastHit ByRef) */

bool Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_PickAccessory(AvatarAccessoryPreviewer *this,Ray ray,GameObject **gameObject,RaycastHit *raycastHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponent<SelectionHelperAvatarAccessory>__);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Hidden);
    cRam_? = '\x01';
  }
  pRVar1 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key(&RStack_2,(KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)&ray,(MethodInfo *)0x0);
  uVar3 = pRVar1->_options;
  uVar4 = pRVar1->_cultureKey;
  pSVar5 = pRVar1->_pattern;
  puStack_6 = (undefined *)uVar3;
  pRStack_7 = (RaycastHit__Array *)uVar4;
  pRVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current((Regex_CachedCodeEntryKey *)&stack0xffffffdc,(Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)&ray,(MethodInfo *)0x0);
  RStack_2._cultureKey = (String *)pRVar1->_options;
  RStack_2._pattern = pRVar1->_cultureKey;
  pSVar8 = pRVar1->_pattern;
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  start.y = (float)pRStack_7;
  start.x = (float)puStack_6;
  start.z = (float)pSVar5;
  dir.z = (float)pSVar8;
  dir.x = (float)RStack_2._cultureKey;
  dir.y = (float)RStack_2._pattern;
  color.a = 1.0;
  color.r = 1.0;
  color.g = 0.0;
  color.b = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawRay(start,dir,color,10.0,(MethodInfo *)0x0);
  this = (AvatarAccessoryPreviewer *)ray.m_Direction.x;
  RStack_2._cultureKey = (String *)ray.m_Direction.y;
  RStack_2._pattern = (String *)ray.m_Direction.z;
  puVar9 = &UNK_?;
  fVar10 = ray.m_Origin.y;
  pSVar5 = (String *)ray.m_Origin.z;
  iVar11 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer((String *)ray.m_Origin.y,(MethodInfo *)ray.m_Origin.z);
  ray.m_Direction.x = (float)(1 << ((byte)iVar11 & 0x1f));
  ray.m_Direction.y = 0.0;
  ray.m_Origin.z = INFINITY;
  fVar12 = (float)pSVar5;
  ray.m_Origin.x = (float)RStack_2._cultureKey;
  ray.m_Origin.y = (float)RStack_2._pattern;
  stack0xfffffffc = fVar10;
  pRStack_7 = (RaycastHit__Array *)puVar9;
  ray_00 = (Ray)CONCAT168(ray_00._0_16_,uVar13);
  pRStack_7 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_RaycastAll_5(ray_00,INFINITY,(int32_t)ray.m_Direction.x,(MethodInfo *)0x0);
  uVar14 = 0;
  if (pRStack_7 == (RaycastHit__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    this_01 = pRStack_7->vector;
    while( true ) {
      if ((int)pRStack_7->max_length <= (int)uVar14) {
        *gameObject = (GameObject *)0x0;
        func_?();
        uStack15 = 0;
        pRStack16 = raycastHit;
        func_?();
        return 0;
      }
      if (pRStack_7->max_length <= uVar14) break;
      this_00 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider(this_01,(MethodInfo *)0x0);
      if (this_00 == (Collider *)0x0) goto code_?;
      pGVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
      *gameObject = pGVar17;
      func_?();
      if (pRStack_7->max_length <= uVar14) break;
      fVar10 = (this_01->m_Point).y;
      fVar18 = (this_01->m_Point).z;
      fVar19 = (this_01->m_Normal).x;
      iVar11 = this_01->m_Collider;
      fVar20 = (this_01->m_Normal).y;
      fVar21 = (this_01->m_Normal).z;
      uVar22 = this_01->m_FaceID;
      fVar23 = this_01->m_Distance;
      VVar24 = this_01->m_UV;
      (raycastHit->m_Point).x = (this_01->m_Point).x;
      (raycastHit->m_Point).y = fVar10;
      (raycastHit->m_Point).z = fVar18;
      (raycastHit->m_Normal).x = fVar19;
      (raycastHit->m_Normal).y = fVar20;
      (raycastHit->m_Normal).z = fVar21;
      raycastHit->m_FaceID = uVar22;
      raycastHit->m_Distance = fVar23;
      raycastHit->m_UV = VVar24;
      raycastHit->m_Collider = iVar11;
      if (*gameObject == (GameObject *)0x0) goto code_?;
      RStack_2._pattern = (String *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1(*gameObject,SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponent<SelectionHelperAvatarAccessory>__);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar25 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)RStack_2._pattern,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar25 != 0) {
        return 1;
      }
      uVar14 = uVar14 + 1;
      this_01 = this_01 + 1;
    }
  }
  func_?();
  pcVar26 = (code *)swi(3);
  bVar25 = (*pcVar26)();
  return bVar25;
}


/* Void PlayAnimation() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_PlayAnimation(AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)(this->fields).animations;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    animationName = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::RegexCharClass+SingleRange]::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item(this_00,(this->fields).currentAnimation,MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    AvatarAccessoryPreviewer_PlayAnimation_1(this,(String *)animationName,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PlayAnimation(String) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_PlayAnimation_1(AvatarAccessoryPreviewer *this,String *animationName,MethodInfo *method)

{
  pAVar1 = (this->fields).goAnimation;
  if (pAVar1 != (Animation *)0x0) {
    UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2(pAVar1,animationName,(MethodInfo *)0x0);
    pAVar2 = (this->fields).OnAnimationActivators;
    uVar3 = 0;
    if (pAVar2 != (ActivateOnAnimationBase__Array *)0x0) {
      iVar4 = 0x10;
      do {
        if ((int)pAVar2->max_length <= (int)uVar3) {
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines((MonoBehaviour *)this,(MethodInfo *)0x0);
          pAVar1 = (this->fields).goAnimation;
          if ((pAVar1 != (Animation *)0x0) && (this_00 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState(pAVar1,animationName,(MethodInfo *)0x0), this_00 != (AnimationState *)0x0)) {
            UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_get_length(this_00,(MethodInfo *)0x0);
            fVar5 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_get_speed(this_00,(MethodInfo *)0x0);
            WVar6 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_get_wrapMode((AnimationState *)((float)this_00 / fVar5),(MethodInfo *)0x0);
            if (WVar6 == WrapMode__Enum_Loop) {
              fVar7 = 3.0;
            }
            else {
              fVar7 = 1.0;
            }
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            value = (Object *)func_?();
            if (value != (Object *)0x0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23(value,ExceptionArgument__Enum_obj,(MethodInfo *)animationName);
              value[1].klass = (Object__Class *)0x0;
              value[2].monitor = (MonitorData *)this;
              func_?(&value[2].monitor,this);
              value[2].klass = (Object__Class *)(((float)this_00 / fVar5) * fVar7);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
              return;
            }
          }
          break;
        }
        if (pAVar2 == (ActivateOnAnimationBase__Array *)0x0) break;
        if (pAVar2->max_length <= uVar3) goto code_?;
        piVar8 = *(int **)((int)pAVar2->vector + iVar4 + -0x10);
        if (piVar8 == (int *)0x0) break;
        (**(code **)(*piVar8 + 0xe4))(piVar8,animationName,*(undefined4 *)(*piVar8 + 0xe8));
        pAVar2 = (this->fields).OnAnimationActivators;
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (pAVar2 != (ActivateOnAnimationBase__Array *)0x0);
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void RemoveSkinnedMeshOptimizers() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_RemoveSkinnedMeshOptimizers(AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  source = (this->fields).bodyClone;
  if (source != (GameObject *)0x0) {
    pIVar1 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______);
    pMVar2 = (MonitorData *)0x0;
    if (pIVar1 != (IEnumerable_1_System_Object_ *)0x0) {
      pIVar3 = pIVar1 + 2;
code_?:
      if ((int)pIVar1[1].monitor <= (int)pMVar2) {
        return;
      }
      if (pMVar2 < pIVar1[1].monitor) {
        pIVar4 = pIVar3->klass;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pIVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar5 == 0) {
code_?:
          pMVar2 = pMVar2 + 1;
          pIVar3 = (IEnumerable_1_System_Object_ *)&pIVar3->monitor;
          goto code_?;
        }
        if (pMVar2 < pIVar1[1].monitor) {
          if (pIVar3->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
          SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer((SkinnedMeshOptimizer *)pIVar3->klass,(MethodInfo *)0x0);
          if (pMVar2 < pIVar1[1].monitor) {
            if (pIVar3->klass != (IEnumerable_1_System_Object___Class *)0x0) {
              SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh((SkinnedMeshOptimizer *)pIVar3->klass,(MethodInfo *)0x0);
              if (pMVar2 < pIVar1[1].monitor) {
                pIVar4 = pIVar3->klass;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pIVar4,(MethodInfo *)0x0);
                goto code_?;
              }
              goto code_?;
            }
            goto code_?;
          }
        }
      }
code_?:
      func_?();
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ResetPreviewTransform() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_ResetPreviewTransform(AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if ((this->fields).imagesReady == 0) {
    return;
  }
  this_00 = (this->fields).bodyClone;
  if (this_00 != (GameObject *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar2 = (pQVar1->identityQuaternion).x;
    fVar3 = (pQVar1->identityQuaternion).y;
    fVar4 = (pQVar1->identityQuaternion).z;
    fVar5 = (pQVar1->identityQuaternion).w;
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffffa0,(Vector3)ZEXT812(0x40490fdb00000000),(MethodInfo *)0x0);
    fVar7 = pQVar6->y;
    fVar8 = pQVar6->z;
    fVar9 = pQVar6->w;
    if (this_02 != (Transform *)0x0) {
      value.y = (fVar7 * fVar5 + fVar9 * fVar3 + pQVar6->x * fVar4) - fVar8 * fVar2;
      value.x = (pQVar6->x * fVar5 + fVar9 * fVar2 + fVar8 * fVar3) - fVar7 * fVar4;
      value.z = (fVar8 * fVar5 + fVar9 * fVar4 + fVar7 * fVar2) - pQVar6->x * fVar3;
      value.w = ((fVar9 * fVar5 - pQVar6->x * fVar2) - fVar7 * fVar3) - fVar8 * fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(this_02,value,(MethodInfo *)0x0);
      pAVar10 = (this->fields).toPreviewer;
      if ((pAVar10 != (AvatarPreviewer *)0x0) && (this_01 = (pAVar10->fields).previewCam, this_01 != (Camera *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView(this_01,(this->fields).startFov,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetupPreviewer(MVBody) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_SetupPreviewer(AvatarAccessoryPreviewer *this,MVBody *avatarBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__);
    func_?(&ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__);
    func_?(&InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__);
    func_?(&AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____);
    func_?(&AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____);
    func_?(&AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______);
    func_?(&UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______);
    func_?(&UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______);
    func_?(&PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______);
    func_?(&SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______);
    func_?(&SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____);
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    func_?(&AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_);
    func_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral__Color);
    func_?(&StringLiteral_SETUP);
    func_?(&StringLiteral_Avatar_accessory_preview);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)StringLiteral_SETUP,(MethodInfo *)0x0);
  (this->fields).avatarBody = avatarBody;
  func_?(&(this->fields).avatarBody,avatarBody);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffffd0,(Vector3)ZEXT812(0x40490fdb00000000),(MethodInfo *)0x0);
  pGVar1 = (this->fields).bodyClone;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pGVar1 = (this->fields).bodyClone;
    if ((pGVar1 == (GameObject *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar1,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation((Quaternion *)&stack0xffffffa0,pTVar3,(MethodInfo *)0x0);
  }
  if (avatarBody != (MVBody *)0x0) {
    pGVar1 = MVBody::MVBody_CreateClone(avatarBody,1,1,(MethodInfo *)0x0);
    (this->fields).bodyClone = pGVar1;
    func_?();
    MVBody::MVBody_set_AccessoryMoveOverride(avatarBody,0,(MethodInfo *)0x0);
    pTVar3 = (this->fields).avatarResetToTransform;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    puVar4 = (undefined *)0x0;
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pTVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pTVar3 = (this->fields).avatarResetToTransform;
      if (pTVar3 == (Transform *)0x0) goto code_?;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pTVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar1,(MethodInfo *)0x0);
    }
    pAVar5 = (this->fields).toPreviewer;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pAVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pAVar5 = (this->fields).toPreviewer;
      if (pAVar5 == (AvatarPreviewer *)0x0) goto code_?;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pAVar5,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar1,(MethodInfo *)0x0);
    }
    pGVar1 = (GameObject *)func_?();
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar1,(MethodInfo *)0x0);
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
      (this->fields).avatarResetToTransform = pTVar3;
      func_?();
      pRVar6 = (this->fields).toImage;
      if (pRVar6 != (RawImage *)0x0) {
        (*(pRVar6->klass->vtable).set_color.methodPtr)();
        pGVar1 = (this->fields).bodyClone;
        if (pGVar1 != (GameObject *)0x0) {
          pIVar7 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar1,UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______);
          pMVar8 = (MonitorData *)0x0;
          if (pIVar7 != (IEnumerable_1_System_Object_ *)0x0) {
            pIVar9 = pIVar7 + 2;
            for (; (int)pMVar8 < (int)pIVar7[1].monitor; pMVar8 = pMVar8 + 1) {
              if (pIVar7[1].monitor <= pMVar8) goto code_?;
              if (pIVar9->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pIVar9->klass,0,(MethodInfo *)0x0);
              pIVar9 = (IEnumerable_1_System_Object_ *)&pIVar9->monitor;
            }
            pGVar1 = (this->fields).bodyClone;
            if (pGVar1 != (GameObject *)0x0) {
              pIVar7 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar1,PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______);
              pMVar8 = (MonitorData *)0x0;
              if (pIVar7 != (IEnumerable_1_System_Object_ *)0x0) {
                pIVar9 = pIVar7 + 2;
                for (; (int)pMVar8 < (int)pIVar7[1].monitor; pMVar8 = pMVar8 + 1) {
                  if (pIVar7[1].monitor <= pMVar8) goto code_?;
                  if ((pIVar9->klass == (IEnumerable_1_System_Object___Class *)0x0) || (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pIVar9->klass,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0)) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar1,0,(MethodInfo *)0x0);
                  pIVar9 = (IEnumerable_1_System_Object_ *)&pIVar9->monitor;
                }
                pGVar1 = (this->fields).bodyClone;
                if (pGVar1 != (GameObject *)0x0) {
                  pIVar7 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar1,AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______);
                  pMVar8 = (MonitorData *)0x0;
                  if (pIVar7 != (IEnumerable_1_System_Object_ *)0x0) {
                    pIVar9 = pIVar7 + 2;
                    for (; (int)pMVar8 < (int)pIVar7[1].monitor; pMVar8 = pMVar8 + 1) {
                      if (pIVar7[1].monitor <= pMVar8) goto code_?;
                      if ((pIVar9->klass == (IEnumerable_1_System_Object___Class *)0x0) || (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pIVar9->klass,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar1,0,(MethodInfo *)0x0);
                      pIVar9 = (IEnumerable_1_System_Object_ *)&pIVar9->monitor;
                    }
                    pGVar1 = (this->fields).bodyClone;
                    if (pGVar1 != (GameObject *)0x0) {
                      pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_1(pGVar1,1,SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____);
                      uVar11 = 0;
                      if (pOVar10 != (Object__Array *)0x0) {
                        ppOVar12 = pOVar10->vector;
                        for (; (int)uVar11 < (int)pOVar10->max_length; uVar11 = uVar11 + 1) {
                          if (pOVar10->max_length <= uVar11) goto code_?;
                          if (((Component *)*ppOVar12 == (Component *)0x0) || (this_02 = (Collider *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1((Component *)*ppOVar12,UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__), this_02 == (Collider *)0x0)) goto code_?;
                          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled(this_02,1,(MethodInfo *)0x0);
                          ppOVar12 = ppOVar12 + 1;
                        }
                        pGVar1 = (this->fields).bodyClone;
                        if (pGVar1 != (GameObject *)0x0) {
                          pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_1(pGVar1,1,AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____);
                          uVar11 = 0;
                          if (pOVar10 != (Object__Array *)0x0) {
                            ppOVar12 = pOVar10->vector;
                            for (; (int)uVar11 < (int)pOVar10->max_length; uVar11 = uVar11 + 1) {
                              if (pOVar10->max_length <= uVar11) goto code_?;
                              if ((Behaviour *)*ppOVar12 == (Behaviour *)0x0) goto code_?;
                              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)*ppOVar12,1,(MethodInfo *)0x0);
                              ppOVar12 = ppOVar12 + 1;
                            }
                            pGVar1 = (this->fields).bodyClone;
                            if (pGVar1 != (GameObject *)0x0) {
                              pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_1(pGVar1,1,AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____);
                              uVar11 = 0;
                              if (pOVar10 != (Object__Array *)0x0) {
                                ppOVar12 = pOVar10->vector;
                                for (; (int)uVar11 < (int)pOVar10->max_length; uVar11 = uVar11 + 1) {
                                  if (pOVar10->max_length <= uVar11) goto code_?;
                                  if ((Behaviour *)*ppOVar12 == (Behaviour *)0x0) goto code_?;
                                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)*ppOVar12,1,(MethodInfo *)0x0);
                                  ppOVar12 = ppOVar12 + 1;
                                }
                                pGVar1 = (this->fields).bodyClone;
                                if (pGVar1 != (GameObject *)0x0) {
                                  pIVar7 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar1,SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______);
                                  pMVar8 = (MonitorData *)0x0;
                                  if (pIVar7 != (IEnumerable_1_System_Object_ *)0x0) {
                                    pIVar9 = pIVar7 + 2;
                                    for (; (int)pMVar8 < (int)pIVar7[1].monitor; pMVar8 = pMVar8 + 1) {
                                      if (pIVar7[1].monitor <= pMVar8) goto code_?;
                                      if (pIVar9->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
                                      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pIVar9->klass,(MethodInfo *)0x0);
                                      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar1,(MethodInfo *)0x0);
                                      pIVar9 = (IEnumerable_1_System_Object_ *)&pIVar9->monitor;
                                    }
                                    pGVar1 = (this->fields).bodyClone;
                                    if (pGVar1 != (GameObject *)0x0) {
                                      this_03 = (Component *)Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar1,InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__);
                                      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)this_03,(Object_1 *)0x0,(MethodInfo *)0x0);
                                      if (bVar2 != 0) {
                                        if ((this_03 == (Component *)0x0) || (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject(this_03,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0)) goto code_?;
                                        puVar4 = &UNK_?;
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar1,0,(MethodInfo *)0x0);
                                      }
                                      AvatarAccessoryPreviewer_RemoveSkinnedMeshOptimizers(this,(MethodInfo *)0x0);
                                      pGVar1 = (this->fields).bodyClone;
                                      if (pGVar1 != (GameObject *)0x0) {
                                        __return_storage_ptr__ = (Color *)Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar1,UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______);
                                        pMVar13 = (Material *)0x0;
                                        if (__return_storage_ptr__ != (Color *)0x0) {
                                          pCVar14 = __return_storage_ptr__ + 1;
                                          for (; (int)pMVar13 < (int)__return_storage_ptr__->a; pMVar13 = (Material *)((int)&pMVar13->klass + 1)) {
                                            uVar11 = 0;
                                            iVar15 = 0x10;
                                            while( true ) {
                                              if ((Material *)__return_storage_ptr__->a <= pMVar13) goto code_?;
                                              if (((Renderer *)pCVar14->r == (Renderer *)0x0) || (pMVar16 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)pCVar14->r,(MethodInfo *)0x0), pMVar16 == (Material__Array *)0x0)) goto code_?;
                                              if ((int)pMVar16->max_length <= (int)uVar11) break;
                                              if ((Material *)__return_storage_ptr__->a <= pMVar13) goto code_?;
                                              if (((Renderer *)pCVar14->r == (Renderer *)0x0) || (pMVar16 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)pCVar14->r,(MethodInfo *)0x0), pMVar16 == (Material__Array *)0x0)) goto code_?;
                                              if (pMVar16->max_length <= uVar11) goto code_?;
                                              this_00 = *(Material **)((int)pMVar16->vector + iVar15 + -0x10);
                                              if (this_00 == (Material *)0x0) goto code_?;
                                              bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1(this_00,StringLiteral__Color,(MethodInfo *)0x0);
                                              if (bVar2 != 0) {
                                                if ((Material *)__return_storage_ptr__->a <= pMVar13) goto code_?;
                                                if (((Renderer *)pCVar14->r == (Renderer *)0x0) || (pMVar16 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)pCVar14->r,(MethodInfo *)0x0), pMVar16 == (Material__Array *)0x0)) goto code_?;
                                                if (pMVar16->max_length <= uVar11) goto code_?;
                                                pMVar13 = *(Material **)((int)pMVar16->vector + iVar15 + -0x10);
                                                if (pMVar13 == (Material *)0x0) goto code_?;
                                                fVar17 = 0.0;
                                                __return_storage_ptr__ = (Color *)&stack0xffffffd0;
                                                pCVar14 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color(__return_storage_ptr__,pMVar13,(MethodInfo *)0x0);
                                                fVar18 = pCVar14->r;
                                                fVar19 = pCVar14->g;
                                                fVar20 = pCVar14->b;
                                                if ((uint)__return_storage_ptr__->a <= (uint)fVar17) goto code_?;
                                                if ((pMVar13->klass == (Material__Class *)0x0) || (pMVar16 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)pMVar13->klass,(MethodInfo *)0x0), pMVar16 == (Material__Array *)0x0)) goto code_?;
                                                if (pMVar16->max_length <= uVar11) goto code_?;
                                                pMVar13 = *(Material **)((int)pMVar16->vector + iVar15 + -0x10);
                                                if (pMVar13 == (Material *)0x0) goto code_?;
                                                pCVar14 = (Color *)&UNK_?;
                                                value_02.g = fVar19;
                                                value_02.r = fVar18;
                                                value_02.b = fVar20;
                                                value_02.a = 1.0;
                                                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color(pMVar13,value_02,(MethodInfo *)0x0);
                                              }
                                              uVar11 = uVar11 + 1;
                                              iVar15 = iVar15 + 4;
                                            }
                                            pCVar14 = (Color *)&pCVar14->g;
                                          }
                                          pGVar1 = (this->fields).bodyClone;
                                          if (pGVar1 != (GameObject *)0x0) {
                                            pAVar21 = (Animation *)Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar1,UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__);
                                            (this->fields).goAnimation = pAVar21;
                                            func_?();
                                            this_05 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)(this->fields).animations;
                                            pAVar21 = (this->fields).goAnimation;
                                            if (this_05 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                                              fVar18 = (float)(this->fields).currentAnimation;
                                              puVar22 = &UNK_?;
                                              animation = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::RegexCharClass+SingleRange]::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item(this_05,(int32_t)fVar18,MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
                                              if (pAVar21 != (Animation *)0x0) {
                                                UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2(pAVar21,(String *)animation,(MethodInfo *)0x0);
                                                pAVar21 = (this->fields).goAnimation;
                                                if (pAVar21 != (Animation *)0x0) {
                                                  pAVar23 = (ActivateOnAnimationBase__Array *)Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pAVar21,ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______);
                                                  (this->fields).OnAnimationActivators = pAVar23;
                                                  func_?();
                                                  pAVar23 = (this->fields).OnAnimationActivators;
                                                  uVar11 = 0;
                                                  if (pAVar23 != (ActivateOnAnimationBase__Array *)0x0) {
                                                    iVar15 = 0x10;
                                                    while ((int)uVar11 < (int)pAVar23->max_length) {
                                                      pAVar23 = (this->fields).OnAnimationActivators;
                                                      if (pAVar23 == (ActivateOnAnimationBase__Array *)0x0) goto code_?;
                                                      if (pAVar23->max_length <= uVar11) goto code_?;
                                                      piVar24 = *(int **)((int)pAVar23->vector + iVar15 + -0x10);
                                                      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)(this->fields).animations;
                                                      if ((this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) || (mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::RegexCharClass+SingleRange]::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item(this_01,(this->fields).currentAnimation,MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_), piVar24 == (int *)0x0)) goto code_?;
                                                      (**(code **)(*piVar24 + 0xe4))();
                                                      uVar11 = uVar11 + 1;
                                                      pAVar23 = (this->fields).OnAnimationActivators;
                                                      iVar15 = iVar15 + 4;
                                                      if (pAVar23 == (ActivateOnAnimationBase__Array *)0x0) goto code_?;
                                                    }
                                                    pAVar5 = (this->fields).previewer;
                                                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                                                      func_?();
                                                    }
                                                    pAVar5 = (AvatarPreviewer *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pAVar5,AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_);
                                                    (this->fields).toPreviewer = pAVar5;
                                                    func_?();
                                                    iVar25 = (this->fields).previewDimensionsX;
                                                    pAVar5 = (this->fields).toPreviewer;
                                                    textureHeight = (this->fields).previewDimensionsY;
                                                    pMVar26 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
                                                    if ((pMVar26 != (MVLocalPlayer *)0x0) && (pMVar27 = MVLocalPlayer::MVLocalPlayer_get_Body(pMVar26,(MethodInfo *)0x0), pMVar27 != (MVBody *)0x0)) {
                                                      layersToRender = (pMVar27->fields)._._._.previewLayerMask;
                                                      pTVar3 = (this->fields).avatarResetToTransform;
                                                      uVar28 = 0xbf00000000000000;
                                                      fVar19 = -1.0;
                                                      fVar20 = 100.0;
                                                      fVar17 = 100.0;
                                                      fVar29 = 100.0;
                                                      pMVar26 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
                                                      if ((pMVar26 != (MVLocalPlayer *)0x0) && (pMVar27 = MVLocalPlayer::MVLocalPlayer_get_Body(pMVar26,(MethodInfo *)0x0), pAVar5 != (AvatarPreviewer *)0x0)) {
                                                        previewPosition.y = fVar17;
                                                        previewPosition.x = fVar20;
                                                        cameraOffset.z = fVar19;
                                                        cameraOffset.x = (float)(int)uVar28;
                                                        cameraOffset.y = (float)(int)((ulonglong)uVar28 >> 0x20);
                                                        previewPosition.z = fVar29;
                                                        AvatarPreviewer::AvatarPreviewer_Initialize(pAVar5,iVar25,textureHeight,CameraClearFlags__Enum_Color,layersToRender,cameraOffset,pTVar3,previewPosition,StringLiteral_Avatar_accessory_preview,(MVWorldObjectClient *)pMVar27,(this->fields).bodyClone,(Vector3)ZEXT812(0x41700000),(MethodInfo *)0x0);
                                                        pAVar5 = (this->fields).toPreviewer;
                                                        if (((pAVar5 != (AvatarPreviewer *)0x0) && (pCVar30 = (pAVar5->fields).previewCam, pCVar30 != (Camera *)0x0)) && (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pCVar30,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
                                                          pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffc0,pTVar3,(MethodInfo *)0x0);
                                                          uVar32 = pVVar31->x;
                                                          uVar33 = pVVar31->y;
                                                          value.y = (float)uVar33 + 1.22;
                                                          value.x = (float)uVar32 + 0.0;
                                                          value.z = pVVar31->z + 0.0;
                                                          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar3,value,(MethodInfo *)0x0);
                                                          pGVar1 = (this->fields).bodyClone;
                                                          if ((pGVar1 != (GameObject *)0x0) && (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar1,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
                                                            value_00.y = (float)puVar22;
                                                            value_00.x = (float)puVar4;
                                                            value_00.z = (float)this_05;
                                                            value_00.w = fVar18;
                                                            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar3,value_00,(MethodInfo *)0x0);
                                                            pAVar5 = (this->fields).toPreviewer;
                                                            if ((pAVar5 != (AvatarPreviewer *)0x0) && (pCVar30 = (pAVar5->fields).previewCam, pCVar30 != (Camera *)0x0)) {
                                                              fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView(pCVar30,(MethodInfo *)0x0);
                                                              pGVar1 = (this->fields).bodyClone;
                                                              (this->fields).startFov = fVar18;
                                                              iVar25 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Hidden,(MethodInfo *)0x0);
                                                              LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar1,iVar25,(MethodInfo *)0x0);
                                                              pAVar5 = (this->fields).toPreviewer;
                                                              if ((pAVar5 != (AvatarPreviewer *)0x0) && (pRVar6 = (this->fields).toImage, pRVar6 != (RawImage *)0x0)) {
                                                                UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture(pRVar6,(Texture *)(pAVar5->fields).previewTexture,(MethodInfo *)0x0);
                                                                pGVar1 = (GameObject *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)(this->fields).dropShadowPlane,UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                                                if ((pGVar1 != (GameObject *)0x0) && (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar1,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
                                                                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent(pTVar3,(this->fields).avatarResetToTransform,(MethodInfo *)0x0);
                                                                  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
                                                                  pAVar5 = (this->fields).toPreviewer;
                                                                  if (((pAVar5 != (AvatarPreviewer *)0x0) && (pGVar1 = (pAVar5->fields)._PreviewGameObject_k__BackingField, pGVar1 != (GameObject *)0x0)) && (this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar1,(MethodInfo *)0x0), this_04 != (Transform *)0x0)) {
                                                                    pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffc0,this_04,(MethodInfo *)0x0);
                                                                    uVar34 = pVVar31->x;
                                                                    uVar35 = pVVar31->y;
                                                                    if (pTVar3 != (Transform *)0x0) {
                                                                      value_01.y = (float)uVar35 - 0.1;
                                                                      value_01.x = (float)uVar34 + 0.0;
                                                                      value_01.z = pVVar31->z + 0.0;
                                                                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar3,value_01,(MethodInfo *)0x0);
                                                                      (this->fields).imagesReady = 1;
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
code_?:
  func_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_Start(AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AvatarAccessoryPreviewer___Start_b__24_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_);
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>);
    func_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_);
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_CharacterEditor) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
    callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>);
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,MethodInfo__AvatarAccessoryPreviewer___Start_b__24_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy(root,(BaseEventData *)0x0,callbackFunction,UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_);
      return;
    }
  }
  else {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_00 != (MVLocalPlayer *)0x0) {
      avatarBody = MVLocalPlayer::MVLocalPlayer_get_Body(this_00,(MethodInfo *)0x0);
      AvatarAccessoryPreviewer_SetupPreviewer(this,avatarBody,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_Update(AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
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
    AvatarPreviewer::AvatarPreviewer_UpdateRotation(this_00,(this->fields).currentRotationSpeed,(MethodInfo *)0x0);
    (this->fields).currentRotationSpeed = 0.0;
  }
  return;
}


/* Void <Start>b__24_0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer__Start_b__24_0(AvatarAccessoryPreviewer *this,IGetCurrentBody *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MVBody>);
    func_?(&MethodInfo__AvatarAccessoryPreviewer__SetupPreviewer_MVBody_);
    func_?(&TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_Object_ *)func_?(TypeInfo__System__Action<MVBody>);
  if (this_00 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor(this_00,(Object *)this,MethodInfo__AvatarAccessoryPreviewer__SetupPreviewer_MVBody_,(MethodInfo *)0x0);
    if (x != (IGetCurrentBody *)0x0) {
      func_?(0,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* AvatarAccessoryPreviewer() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer__ctor(AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    func_?(&StringLiteral_Dead);
    func_?(&StringLiteral_Jump);
    func_?(&StringLiteral_Walk);
    func_?(&StringLiteral_Idle);
    func_?(&StringLiteral_Swim);
    cRam_? = '\x01';
  }
  (this->fields).previewDimensionsX = 0x200;
  (this->fields).previewDimensionsY = 0x400;
  (this->fields).rotationSensitivity = 15.0;
  (this->fields).zoomSpeed = 1.5;
  this_00 = (List_1_System_String_ *)func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  if (this_00 != (List_1_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::LowLevelList_1_System_Object___ctor((LowLevelList_1_System_Object_ *)this_00,MethodInfo__System__Collections__Generic__List<System::String>__List__);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add((List_1_System_Object_ *)this_00,(Object *)StringLiteral_Idle,MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add((List_1_System_Object_ *)this_00,(Object *)StringLiteral_Walk,MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add((List_1_System_Object_ *)this_00,(Object *)StringLiteral_Jump,MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add((List_1_System_Object_ *)this_00,(Object *)StringLiteral_Swim,MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add((List_1_System_Object_ *)this_00,(Object *)StringLiteral_Dead,MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    (this->fields).animations = this_00;
    ppLStack1 = &(this->fields).animations;
    pLStack2 = this_00;
    func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

