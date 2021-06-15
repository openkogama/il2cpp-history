
/* Void AddElement(Int32, RectTransform) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_AddElement
               (TextBubbleController *this,int32_t bubbleId,RectTransform *element,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).textBubbles;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    pTVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (this_00,bubbleId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                       );
    if ((pTVar1 != (TerrainUtility_TerrainMap *)0x0) &&
       (this_01 = (TextBubble *)(pTVar1->fields).m_patchSize.z, this_01 != (TextBubble *)0x0)) {
      TextBubble::TextBubble_Add(this_01,element,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddFirstElement(Int32, RectTransform) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_AddFirstElement
               (TextBubbleController *this,int32_t bubbleId,RectTransform *element,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).textBubbles;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    pTVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (this_00,bubbleId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                       );
    if ((pTVar1 != (TerrainUtility_TerrainMap *)0x0) &&
       (this_01 = (TextBubble *)(pTVar1->fields).m_patchSize.z, this_01 != (TextBubble *)0x0)) {
      TextBubble::TextBubble_Add(this_01,element,(MethodInfo *)0x0);
      if (element != (RectTransform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                  ((Transform *)element,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 CalculateOffSet(Vector2, Vector3) */

Vector3 * Assembly-CSharp.dll::TextBubbleController::TextBubbleController_CalculateOffSet
                    (Vector3 *__return_storage_ptr__,TextBubbleController *this,Vector2 offset,
                    Vector3 screenSpacePos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar3 = 0.0;
  fVar4 = 0.0;
  func_?(&stack0xfffffff4,(float)iVar1,(float)iVar2);
  if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
    func_?();
  }
  VVar5.y = fVar4;
  VVar5.x = fVar3;
  VVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Division_1
                    (VVar5,2.0,(MethodInfo *)0x0);
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit_1
                     ((Vector3 *)&stack0xffffffdc,VVar5,(MethodInfo *)0x0);
  uVar7 = pVVar6->x;
  fVar3 = pVVar6->z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a.y = screenSpacePos.x;
  a.x = (float)uVar7;
  a.z = fVar3;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     ((Vector3 *)&stack0xffffffdc,a,screenSpacePos,(MethodInfo *)0x0);
  f = pVVar6->x;
  uVar8 = pVVar6->y;
  screenSpacePos.y = (float)uVar8;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    screenSpacePos.y = (float)&UNK_?;
    func_?();
  }
  if ((float)(double)CONCAT44((uint)((ulonglong)(double)screenSpacePos.y >> 0x20) & _UNK_?,
                              SUB84((double)screenSpacePos.y,0) & _UNK_?) <
      (float)(double)CONCAT44((uint)((ulonglong)(double)(float)f >> 0x20) & _UNK_?,
                              SUB84((double)(float)f,0) & _UNK_?)) {
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Sign((float)f,(MethodInfo *)0x0);
  }
  else {
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      screenSpacePos.y = (float)&UNK_?;
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Sign(screenSpacePos.y,(MethodInfo *)0x0);
  }
  uVar9 = 0;
  uVar7 = 0;
  uStack10 = 0;
  fVar3 = 0.0;
  func_?();
  __return_storage_ptr__->x = (float)uVar7;
  __return_storage_ptr__->y = (float)uVar9;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Void ClearBubblesOfTypeImmediately(Int32) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_ClearBubblesOfTypeImmediately
               (TextBubbleController *this,int32_t bubbleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).textBubbles;
  if (this_00 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,bubbleId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return;
    }
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).textBubbles;
    if ((pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)0x0) &&
       (pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                           (pDVar2,bubbleId,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           ), pTVar3 != (TerrainUtility_TerrainMap *)0x0)) {
      (pTVar3->fields).m_patchSize.x = 0.0;
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).textBubbles;
      if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                           (pDVar2,bubbleId,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           );
        TextBubbleController_UpdateBubble
                  (this,(TextBubbleController_BubbleTracker *)pTVar3,(MethodInfo *)0x0);
        pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).textBubbles;
        if (((pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) &&
            (pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                (pDVar2,bubbleId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                ), pTVar3 != (TerrainUtility_TerrainMap *)0x0)) &&
           (this_01 = (TextBubble *)(pTVar3->fields).m_patchSize.z, this_01 != (TextBubble *)0x0)) {
          TextBubble::TextBubble_OnRemoved(this_01,(MethodInfo *)0x0);
          pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this->fields).textBubbles;
          if ((pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)0x0) &&
             (pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                       Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                 (pDVar2,bubbleId,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                 ), pTVar3 != (TerrainUtility_TerrainMap *)0x0)) {
            TextBubbleController+BubbleTracker::TextBubbleController_BubbleTracker_Clear
                      ((TextBubbleController_BubbleTracker *)pTVar3,(MethodInfo *)0x0);
            pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)(this->fields).textBubbles;
            if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                        (pDVar2,bubbleId,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Remove_int_
                        );
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ClearBubblesWithId(Int32) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_ClearBubblesWithId
               (TextBubbleController *this,int32_t bubbleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).textBubbles;
  if (this_00 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,bubbleId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return;
    }
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).textBubbles;
    if ((this_01 !=
         (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *
         )0x0) &&
       (pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                           (this_01,bubbleId,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           ), pTVar2 != (TerrainUtility_TerrainMap *)0x0)) {
      (pTVar2->fields).m_patchSize.x = (this->fields).bubbleLifeTime;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 ShowBubble2D(Vector2, Vector2, Single, List`1[UnityEngine.RectTransform], Transform) */

int32_t Assembly-CSharp.dll::TextBubbleController::TextBubbleController_ShowBubble2D
                  (TextBubbleController *this,Vector2 anchoredPosition,Vector2 targetCenterPoint,
                  float lifeTime,List_1_UnityEngine_RectTransform_ *content,
                  Transform *parentTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (MethodInfo *)(this->fields).currentBubbleId;
  (this->fields).currentBubbleId = (int32_t)((int)&key->methodPointer + 1);
  pMStack_1 = key;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&pMStack_1);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_Show_bubble_2d_,pOVar2,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0);
  pTVar3 = (this->fields).textBubblePrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  pTVar3 = (TextBubble *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pTVar3,
                      TextBubble_MethodInfo__UnityEngine__Object__Instantiate<TextBubble>_TextBubble_
                     );
  pXStack_4 = (XpBoostParticlePreviewer *)0x0;
  if (content != (List_1_UnityEngine_RectTransform_ *)0x0) {
    while (index = pXStack_4,
          pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)content,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                             ), (int)pXStack_4 < (int)pOVar2) {
      key = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_;
      pXStack_4 = (XpBoostParticlePreviewer *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)content,
                             (int32_t)index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                            );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      transformContent =
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXStack_4,
                      UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
      if (pTVar3 == (TextBubble *)0x0) goto code_?;
      TextBubble::TextBubble_Add(pTVar3,(RectTransform *)transformContent,(MethodInfo *)0x0);
      pXStack_4 = (XpBoostParticlePreviewer *)((int)&index->klass + 1);
    }
    if (pTVar3 != (TextBubble *)0x0) {
      (pTVar3->fields).centerPoint.x = targetCenterPoint.x;
      (pTVar3->fields).bubbleId = (int32_t)key;
      (pTVar3->fields).centerPoint.y = targetCenterPoint.y;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)parentTransform,(Object_1 *)0x0,(MethodInfo *)0x0);
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pTVar3,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        if (pGVar6 == (GameObject *)0x0) goto code_?;
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar6,(MethodInfo *)0x0);
        parentTransform =
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar7 == (Transform *)0x0) goto code_?;
        content._0_1_ = 0;
      }
      else {
        if ((pGVar6 == (GameObject *)0x0) ||
           (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
        goto code_?;
        content._0_1_ = 1;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar7,parentTransform,(bool)content,(MethodInfo *)0x0);
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pTVar3,(MethodInfo *)0x0);
      if (pGVar6 != (GameObject *)0x0) {
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar6,(MethodInfo *)0x0);
        if (pTVar7 != (Transform *)0x0) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                             ((Vector3 *)&stack0xffffffd8,pTVar7,(MethodInfo *)0x0);
          uVar9._0_4_ = pVVar8->x;
          uVar9._4_4_ = pVVar8->y;
          fVar10 = pVVar8->z;
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?();
          }
          dVar11 = (double)(float)uVar9;
          uVar12 = (uint)_UNK_?;
          uVar13 = (uint)((ulonglong)_UNK_? >> 0x20);
          fVar14 = (float)((ulonglong)uVar9 >> 0x20);
          dVar15 = (double)fVar14;
          uVar9 = CONCAT44(fVar14 / (float)(double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                                             uVar13,SUB84(dVar15,0) & uVar12),
                            (float)uVar9 /
                            (float)(double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar13,
                                                    SUB84(dVar11,0) & uVar12));
          fVar10 = fVar10 / (float)(double)CONCAT44((uint)((ulonglong)(double)fVar10 >> 0x20) &
                                                    uVar13,SUB84((double)fVar10,0) & uVar12);
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pTVar3,(MethodInfo *)0x0);
          if ((pGVar6 != (GameObject *)0x0) &&
             (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar6,(MethodInfo *)0x0), pTVar16 != (Transform *)0x0)) {
            lifeTime = (float)uVar9;
            value.z = fVar10;
            value.x = (float)(int)uVar9;
            value.y = (float)(int)((ulonglong)uVar9 >> 0x20);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar16,value,(MethodInfo *)0x0);
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pTVar3,(MethodInfo *)0x0);
            if (pGVar6 != (GameObject *)0x0) {
              pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar6,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                 ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
              if (pTVar16 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar16,*pVVar8,(MethodInfo *)0x0);
                TextBubble::TextBubble_set_Position
                          (pTVar3,(Vector2)0x103b219d00000000,(MethodInfo *)0x0);
                this_00 = (Dictionary_2_System_Int32_System_Object_ *)pTVar7[2].monitor;
                this_01 = (ScaleAnimationBase *)func_?();
                ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,in_stack_17);
                if (this_00 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__Add
                            (this_00,(int32_t)key,(Object *)this_01,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Add_int__TextBubbleController__BubbleTracker_
                            );
                  if (((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                        *)pTVar7[2].monitor !=
                       (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                        *)0x0) &&
                     (pTVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Int32,UnityEngine::Experimental::TerrainAPI::
                               TerrainUtility+TerrainMap]::
                               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                         ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                           *)pTVar7[2].monitor,(int32_t)key,
                                          MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                         ), pTVar18 != (TerrainUtility_TerrainMap *)0x0)) {
                    TextBubbleController+BubbleTracker::
                    TextBubbleController_BubbleTracker_set_Bubble
                              ((TextBubbleController_BubbleTracker *)pTVar18,pTVar3,(MethodInfo *)0x0
                              );
                    if (((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)pTVar7[2].monitor !=
                         (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)0x0) &&
                       (pTVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Int32,UnityEngine::Experimental::TerrainAPI::
                                 TerrainUtility+TerrainMap]::
                                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                           ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                             *)pTVar7[2].monitor,(int32_t)key,
                                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                           ), pTVar18 != (TerrainUtility_TerrainMap *)0x0)) {
                      (pTVar18->fields).m_patchSize.y = 0.0;
                      if (((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)pTVar7[2].monitor !=
                           (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)0x0) &&
                         (pTVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Int32,UnityEngine::Experimental::TerrainAPI::
                                   TerrainUtility+TerrainMap]::
                                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                             ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                               *)pTVar7[2].monitor,(int32_t)key,
                                              MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                             ), pTVar18 != (TerrainUtility_TerrainMap *)0x0)) {
                        (pTVar18->fields).m_patchSize.x = lifeTime;
                        return (int32_t)key;
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
  pcVar19 = (code *)swi(3);
  iVar20 = (*pcVar19)();
  return iVar20;
}


/* Int32 ShowBubble3D(Vector3, String, Single, Transform, Int32, Boolean, Boolean) */

int32_t Assembly-CSharp.dll::TextBubbleController::TextBubbleController_ShowBubble3D
                  (TextBubbleController *this,Vector3 worldPosition,String *text,float lifeTime,
                  Transform *parentTransform,int32_t bubbleId,bool positionUpdate,bool contentUpdate
                  ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  original = (this->fields).textPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_00 = (Graphic *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                      ((XpBoostParticlePreviewer *)original,
                       UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text_
                      );
  if (this_00 != (Graphic *)0x0) {
    (*this_00->klass[1].vtable.Equals.methodPtr)
              (this_00,text,this_00->klass[1].vtable.Equals.method);
    this_01 = (List_1_UnityEngine_Vector4_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<UnityEngine::RectTransform>
                             );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__List__);
    item = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                     (this_00,(MethodInfo *)0x0);
    if (this_01 != (List_1_UnityEngine_Vector4_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)item,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__Add_UnityEngine__RectTransform_
                );
      if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector2);
      }
      VVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_one((MethodInfo *)0x0);
      VVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Multiply_1
                        (VVar1,0.1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pCVar2 = (this->fields).mainCamera;
      if (pCVar2 != (Camera *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                           ((Vector3 *)&puStack_4,pCVar2,worldPosition,(MethodInfo *)0x0);
        fVar5 = pVVar3->z;
        method_00 = (MethodInfo *)pVVar3->y;
        fVar6 = pVVar3->z;
        pVVar3 = TextBubbleController_CalculateOffSet
                           ((Vector3 *)&stack0xffffffdc,this,VVar1,*pVVar3,method_00);
        uVar7._0_4_ = pVVar3->x;
        uVar7._4_4_ = pVVar3->y;
        fVar8 = pVVar3->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          worldPosition.y = (float)TypeInfo__UnityEngine__Vector3;
          worldPosition.x = (float)&UNK_?;
          func_?();
        }
        a.y = (float)method_00;
        a.x = fVar6;
        a.z = fVar5;
        b.z = fVar8;
        b.x = (float)(int)uVar7;
        b.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xffffffdc,a,b,(MethodInfo *)0x0);
        uVar9._0_4_ = pVVar3->x;
        uVar9._4_4_ = pVVar3->y;
        uVar7._0_4_ = pVVar3->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector2);
        }
        v.z = (float)uVar7;
        v.x = (float)(int)uVar9;
        v.y = (float)(int)((ulonglong)uVar9 >> 0x20);
        VVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                          (v,(MethodInfo *)0x0);
        pCVar2 = (this->fields).mainCamera;
        if (pCVar2 != (Camera *)0x0) {
          position.y = worldPosition.y;
          position.x = worldPosition.x;
          position.z = worldPosition.z;
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                             ((Vector3 *)&stack0xffffffdc,pCVar2,position,(MethodInfo *)0x0);
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             ((Vector3 *)&stack0xffffffdc,*pVVar3,2.0,(MethodInfo *)0x0);
          targetCenterPoint =
               UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                         (*pVVar3,(MethodInfo *)0x0);
          iVar10 = TextBubbleController_ShowBubble2D
                            (this,VVar1,targetCenterPoint,lifeTime,
                             (List_1_UnityEngine_RectTransform_ *)0x0,parentTransform,
                             (MethodInfo *)0x0);
          return iVar10;
        }
      }
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  iVar10 = (*pcVar11)();
  return iVar10;
}


/* Int32 ShowBubble3D(Vector3, Single, List`1[UnityEngine.RectTransform], Transform, Vector2) */

int32_t Assembly-CSharp.dll::TextBubbleController::TextBubbleController_ShowBubble3D_1
                  (TextBubbleController *this,Vector3 worldPosition,float lifeTime,
                  List_1_UnityEngine_RectTransform_ *content,Transform *parentTransform,
                  Vector2 offset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).mainCamera;
  if (pCVar1 != (Camera *)0x0) {
    VVar2.y = worldPosition.y;
    VVar2.x = worldPosition.x;
    VVar2.z = worldPosition.z;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                       ((Vector3 *)&stack0xfffffff0,pCVar1,VVar2,(MethodInfo *)0x0);
    VVar2 = *pVVar3;
    pVVar3 = TextBubbleController_CalculateOffSet
                       ((Vector3 *)&stack0xffffffdc,this,offset,*pVVar3,(MethodInfo *)0x0);
    uVar4._0_4_ = pVVar3->x;
    uVar4._4_4_ = pVVar3->y;
    fVar5 = pVVar3->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    b.z = fVar5;
    b.x = (float)(int)uVar4;
    b.y = (float)(int)((ulonglong)uVar4 >> 0x20);
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffdc,VVar2,b,(MethodInfo *)0x0);
    VVar2 = *pVVar3;
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector2);
    }
    anchoredPosition =
         UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                   (VVar2,(MethodInfo *)0x0);
    pCVar1 = (this->fields).mainCamera;
    if (pCVar1 != (Camera *)0x0) {
      position.y = worldPosition.y;
      position.x = worldPosition.x;
      position.z = worldPosition.z;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                         (&worldPosition,pCVar1,position,(MethodInfo *)0x0);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         (&worldPosition,*pVVar3,2.0,(MethodInfo *)0x0);
      targetCenterPoint =
           UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                     (*pVVar3,(MethodInfo *)0x0);
      worldPosition.y = 0.0;
      worldPosition.x = (float)parentTransform;
      iVar6 = TextBubbleController_ShowBubble2D
                        (this,anchoredPosition,targetCenterPoint,lifeTime,content,parentTransform,
                         (MethodInfo *)0x0);
      return iVar6;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  iVar6 = (*pcVar7)();
  return iVar6;
}


/* Void Start() */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_Start
               (TextBubbleController *this,MethodInfo *method)

{
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  (this->fields).mainCamera = pCVar1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_Update
               (TextBubbleController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  this_00 = (this->fields).textBubbles;
  puStack_8 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  if (this_00 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
    puStack_8 = (undefined4 *)&stack0xffffffa8;
    puStack_4 = &stack0xffffffa8;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffb4,(Dictionary_2_WinningConditionType_System_Object_ *)this_00
                        ,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar9->dictionary;
    auStack_6._4_4_ = pDVar9->next;
    auStack_6._8_4_ = pDVar9->stamp;
    auStack_6._12_4_ = (pDVar9->current).key;
    auStack_6._16_4_ = (pDVar9->current).value;
    uStack_1 = 0;
    while (cVar10 = func_?(), cVar10 != '\0') {
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TextBubbleController::BubbleTracker>__get_Current__
                            );
      bubble = (TextBubbleController_BubbleTracker *)func_?();
      bVar11 = TextBubbleController_UpdateBubble(this,bubble,(MethodInfo *)0x0);
      if (bVar11 != 0) {
        this_01 = (List_1_UIPushOption_ *)(this->fields).removeList;
        item = func_?();
        unaff_EDI = (Object *)0x0;
        if (this_01 == (List_1_UIPushOption_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  (this_01,item,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
    }
    unaff_EDI = (Object *)0x0;
    *puStack_8 = 0x5c;
    uStack_1 = 0xffffffff;
    func_?();
    pLVar12 = (this->fields).removeList;
    if (pLVar12 != (List_1_System_Int32_ *)0x0) {
      unaff_EDI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar12,
                             MethodInfo__System__Collections__Generic__List<int>__get_Count__);
      while (unaff_EDI = (Object *)((int)&unaff_EDI[-1].monitor + 3), -1 < (int)unaff_EDI) {
        pDVar13 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).textBubbles;
        pLVar12 = (this->fields).removeList;
        if ((((pLVar12 == (List_1_System_Int32_ *)0x0) ||
             (iVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                      List_1_System_Int32__get_Item
                                (pLVar12,(int32_t)unaff_EDI,
                                 MethodInfo__System__Collections__Generic__List<int>__get_Item_int_)
             , pDVar13 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)0x0)) ||
            (pTVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                       Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                 (pDVar13,iVar14,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                 ), pTVar15 == (TerrainUtility_TerrainMap *)0x0)) ||
           (fVar16 = (pTVar15->fields).m_patchSize.z, fVar16 == 0.0)) goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_OnRemoved,(MethodInfo *)0x0);
        *(undefined4 *)((int)fVar16 + 0x28) = 0xffffffff;
        pDVar13 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).textBubbles;
        pLVar12 = (this->fields).removeList;
        if (((pLVar12 == (List_1_System_Int32_ *)0x0) ||
            (iVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                     List_1_System_Int32__get_Item
                               (pLVar12,(int32_t)unaff_EDI,
                                MethodInfo__System__Collections__Generic__List<int>__get_Item_int_),
            pDVar13 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0)) ||
           (pTVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                (pDVar13,iVar14,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                ), pTVar15 == (TerrainUtility_TerrainMap *)0x0))
        goto code_?;
        TextBubbleController+BubbleTracker::TextBubbleController_BubbleTracker_Clear
                  ((TextBubbleController_BubbleTracker *)pTVar15,(MethodInfo *)0x0);
        pDVar13 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).textBubbles;
        pLVar12 = (this->fields).removeList;
        if ((pLVar12 == (List_1_System_Int32_ *)0x0) ||
           (iVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                    List_1_System_Int32__get_Item
                              (pLVar12,(int32_t)unaff_EDI,
                               MethodInfo__System__Collections__Generic__List<int>__get_Item_int_),
           pDVar13 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0)) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                  (pDVar13,iVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Remove_int_
                  );
      }
      this_02 = (List_1_UnityEngine_UIVertex_ *)(this->fields).removeList;
      if (this_02 != (List_1_UnityEngine_UIVertex_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
        List_1_UnityEngine_UIVertex__Clear
                  (this_02,MethodInfo__System__Collections__Generic__List<int>__Clear__);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  func_?(0);
  func_?(unaff_EDI,0,0);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Boolean UpdateBubble(TextBubbleController+BubbleTracker) */

bool Assembly-CSharp.dll::TextBubbleController::TextBubbleController_UpdateBubble
               (TextBubbleController *this,TextBubbleController_BubbleTracker *bubble,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bubble != (TextBubbleController_BubbleTracker *)0x0) {
    fVar1 = (bubble->fields).currentLifeTime;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (bubble->fields).currentLifeTime = fVar2 + fVar1;
    fVar1 = (bubble->fields).timeToLive;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar2;
    (bubble->fields).timeToLive = fVar1;
    fVar2 = (bubble->fields).currentLifeTime;
    fVar3 = (this->fields).bubbleFadeIn;
    fVar1 = fVar1 / (this->fields).bubbleLifeTime;
    if (fVar2 <= fVar3) {
      fVar1 = fVar2 / fVar3;
    }
    pTVar4 = (bubble->fields).bubble;
    if ((pTVar4 != (TextBubble *)0x0) &&
       (this_00 = (pTVar4->fields).fadeGroup, this_00 != (CanvasGroup *)0x0)) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,fVar1,(MethodInfo *)0x0);
      if (0.0 < (bubble->fields).timeToLive) {
        return 0;
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Time_out,(MethodInfo *)0x0);
      return 1;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void UpdateContent(Int32, List`1[UnityEngine.RectTransform]) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_UpdateContent
               (TextBubbleController *this,int32_t bubbleId,
               List_1_UnityEngine_RectTransform_ *content,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).textBubbles;
  if (((this_00 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) && (pTVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                    (this_00,bubbleId,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                    ), pTVar1 != (TerrainUtility_TerrainMap *)0x0)) &&
     (this_01 = (TextBubble *)(pTVar1->fields).m_patchSize.z, this_01 != (TextBubble *)0x0)) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    index = 0;
    this_02 = (this_01->fields).content;
    while (this_02 != (List_1_UnityEngine_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__get_Count__
                         );
      this_03 = (List_1_UnityEngine_UIVertex_ *)(this_01->fields).content;
      if ((int)pOVar2 <= index) {
        if (this_03 != (List_1_UnityEngine_UIVertex_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
          List_1_UnityEngine_UIVertex__Clear
                    (this_03,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Clear__);
          this = (TextBubbleController *)0x0;
          if (content != (List_1_UnityEngine_RectTransform_ *)0x0) {
            for (; pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                            ::Json::Serialization::JsonProperty]::
                            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                       content,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                                      ), (int)this < (int)pOVar2;
                this = (TextBubbleController *)((int)&this->klass + 1)) {
              pXVar3 = (XpBoostParticlePreviewer *)
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)content,
                                  (int32_t)this,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                                 );
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?();
              }
              pXVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                 (pXVar3,
                                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                 );
              TextBubble::TextBubble_Add(this_01,(RectTransform *)pXVar3,(MethodInfo *)0x0);
            }
            return;
          }
        }
        break;
      }
      if (this_03 == (List_1_UnityEngine_UIVertex_ *)0x0) break;
      obj = (Object_1 *)
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
            IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,index,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__get_Item_int_
                      );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0);
      index = index + 1;
      this_02 = (this_01->fields).content;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdatePosition(Int32, Vector2, Vector2) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_UpdatePosition
               (TextBubbleController *this,int32_t bubbleId,Vector2 anchoredPosition,
               Vector2 targetCenterPoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).textBubbles;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
    pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (pDVar1,bubbleId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                       );
    if ((pTVar2 != (TerrainUtility_TerrainMap *)0x0) &&
       (fVar3 = (pTVar2->fields).m_patchSize.z, fVar3 != 0.0)) {
      *(float *)((int)fVar3 + 0x20) = targetCenterPoint.x;
      *(float *)((int)fVar3 + 0x24) = targetCenterPoint.y;
      *(int32_t *)((int)fVar3 + 0x28) = bubbleId;
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).textBubbles;
      if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                           (pDVar1,bubbleId,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           );
        if ((pTVar2 != (TerrainUtility_TerrainMap *)0x0) &&
           (this_00 = (TextBubble *)(pTVar2->fields).m_patchSize.z, this_00 != (TextBubble *)0x0)) {
          TextBubble::TextBubble_set_Position(this_00,(Vector2)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdatePosition3D(Int32, Vector3, Vector2) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_UpdatePosition3D
               (TextBubbleController *this,int32_t bubbleId,Vector3 worldPosition,Vector2 offset,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).mainCamera;
  if (pCVar1 != (Camera *)0x0) {
    VVar2.y = worldPosition.y;
    VVar2.x = worldPosition.x;
    VVar2.z = worldPosition.z;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                       (&VStack_4,pCVar1,VVar2,(MethodInfo *)0x0);
    fVar5 = pVVar3->z;
    if (fVar5 <= 0.0) {
      return;
    }
    uVar6 = pVVar3->x;
    uVar7 = pVVar3->y;
    a.y = (float)uVar7;
    a.x = (float)uVar6;
    screenSpacePos.z = fVar5;
    screenSpacePos.x = (float)uVar6;
    screenSpacePos.y = (float)uVar7;
    pVVar3 = TextBubbleController_CalculateOffSet
                       ((Vector3 *)&stack0xffffffd8,this,offset,screenSpacePos,(MethodInfo *)0x0);
    VStack_4.y = pVVar3->x;
    VStack_4.z = pVVar3->y;
    fVar8 = pVVar3->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = fVar5;
    b.z = fVar8;
    b.x = VStack_4.y;
    b.y = VStack_4.z;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffd8,a,b,(MethodInfo *)0x0);
    VVar2 = *pVVar3;
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector2);
    }
    value = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                      (VVar2,(MethodInfo *)0x0);
    pCVar1 = (this->fields).mainCamera;
    if (pCVar1 != (Camera *)0x0) {
      position.y = worldPosition.y;
      position.x = worldPosition.x;
      position.z = worldPosition.z;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                         (&worldPosition,pCVar1,position,(MethodInfo *)0x0);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         (&worldPosition,*pVVar3,2.0,(MethodInfo *)0x0);
      VVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                         (*pVVar3,(MethodInfo *)0x0);
      worldPosition.y = VVar9.x;
      worldPosition.z = VVar9.y;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pDVar10 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).textBubbles;
      if (((pDVar10 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) &&
          (pTVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                     Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                               (pDVar10,bubbleId,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                               ), pTVar11 != (TerrainUtility_TerrainMap *)0x0)) &&
         (fVar5 = (pTVar11->fields).m_patchSize.z, fVar5 != 0.0)) {
        *(float *)((int)fVar5 + 0x20) = worldPosition.y;
        *(int32_t *)((int)fVar5 + 0x28) = bubbleId;
        *(float *)((int)fVar5 + 0x24) = worldPosition.z;
        pDVar10 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).textBubbles;
        if (((pDVar10 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) &&
            (pTVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                       Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                 (pDVar10,bubbleId,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                 ), pTVar11 != (TerrainUtility_TerrainMap *)0x0)) &&
           (this_00 = (TextBubble *)(pTVar11->fields).m_patchSize.z, this_00 != (TextBubble *)0x0))
        {
          TextBubble::TextBubble_set_Position(this_00,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* TextBubbleController() */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController__ctor
               (TextBubbleController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).bubbleLifeTime = 2.0;
  (this->fields).bubbleFadeIn = 0.2;
  this_00 = (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Dictionary__
            );
  (this->fields).textBubbles = this_00;
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).removeList = (List_1_System_Int32_ *)this_01;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

