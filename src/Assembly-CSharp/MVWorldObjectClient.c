
/* Void AddPreviewBox() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_AddPreviewBox
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&PreviewBox_MethodInfo__UnityEngine__GameObject__AddComponent<PreviewBox>__);
    func_?(&
                    PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_PreviewBox);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    this_00 = (PreviewBox *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_1
                        (pGVar1,
                         PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__
                        );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = MVWorldObjectClient_CreateBox(this,StringLiteral_PreviewBox,1.005,(MethodInfo *)0x0);
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      this_00 = (PreviewBox *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar1,
                           PreviewBox_MethodInfo__UnityEngine__GameObject__AddComponent<PreviewBox>__
                          );
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar3 != (PrefabPool *)0x0) {
      material = (pPVar3->fields).previewBoxMaterial;
      corners = MVWorldObjectClient_GetBoundsCornersLocal
                          (this,BoundsContext__Enum_BoxVisualization,(MethodInfo *)0x0);
      if (this_00 != (PreviewBox *)0x0) {
        PreviewBox::PreviewBox_Show(this_00,material,corners,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AddSelectionBox() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_AddSelectionBox
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&SelectionBox_MethodInfo__UnityEngine__GameObject__AddComponent<SelectionBox>__)
    ;
    func_?(&
                    SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_SelectionBox);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    this_00 = (SelectionBox *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_1
                        (pGVar1,
                         SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__
                        );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = MVWorldObjectClient_CreateBox
                         (this,StringLiteral_SelectionBox,1.001,(MethodInfo *)0x0);
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      this_00 = (SelectionBox *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar1,
                           SelectionBox_MethodInfo__UnityEngine__GameObject__AddComponent<SelectionBox>__
                          );
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar3 != (PrefabPool *)0x0) {
      material = (pPVar3->fields).selectBoxMaterial;
      corners = MVWorldObjectClient_GetBoundsCornersLocal
                          (this,BoundsContext__Enum_BoxVisualization,(MethodInfo *)0x0);
      if (this_00 != (SelectionBox *)0x0) {
        SelectionBox::SelectionBox_FadeIn(this_00,0.2,material,corners,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ApplyData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ApplyData
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    func_?(&StringLiteral_Nan_scale_detected);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)
           func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffffb);
  this_01 = data;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  uVar3 = CONCAT44(TypeInfo__System__Int32,TVar2.m_Index);
  if (TVar2.m_Index == 0) goto code_?;
  if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) == (TypeInfo__System__Int32->_0).element_class
     ) {
    piVar4 = (int32_t *)func_?(TVar2.m_Index);
    (this->fields)._.id = *piVar4;
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffffa);
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar3 = CONCAT44(TypeInfo__System__Int32,TVar2.m_Index);
    if (TVar2.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar4 = (int32_t *)func_?(TVar2.m_Index);
      (this->fields)._.groupId = *piVar4;
      pOVar1 = (Object *)
               func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffff9
                              );
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                         pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Int32,TVar2.m_Index);
      if (TVar2.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar4 = (int32_t *)func_?(TVar2.m_Index);
        (this->fields)._.itemId = *piVar4;
        pOVar1 = (Object *)
                 func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                 &stack0xfffffff8);
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                           pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        uVar3 = CONCAT44(TypeInfo__MV__WorldObject__WorldObjectType,TVar2.m_Index);
        if (TVar2.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
            (TypeInfo__MV__WorldObject__WorldObjectType->_0).element_class) {
          piVar4 = (int32_t *)func_?(TVar2.m_Index);
          (this->fields)._.type = *piVar4;
          pOVar1 = (Object *)
                   func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                   &stack0xfffffff7);
          TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01
                             ,pOVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          uVar3 = CONCAT44(TypeInfo__UnityEngine__Vector3,TVar2.m_Index);
          if (TVar2.m_Index == 0) goto code_?;
          if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
              (TypeInfo__UnityEngine__Vector3->_0).element_class) {
            pVVar5 = (Vector3 *)func_?(TVar2.m_Index);
            uVar3._0_4_ = pVVar5->x;
            uVar3._4_4_ = pVVar5->y;
            fVar6 = pVVar5->z;
            bVar7 = MathFunctions::MathFunctions_VectorIsNan(*pVVar5,(MethodInfo *)0x0);
            if (bVar7 != 0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_Nan_scale_detected,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar3._0_4_ = (pVVar8->oneVector).x;
              uVar3._4_4_ = (pVVar8->oneVector).y;
              fVar6 = (pVVar8->oneVector).z;
            }
            this_00 = (this->fields).transform;
            if (this_00 == (Transform *)0x0) goto code_?;
            value.z = fVar6;
            value.x = (float)(int)uVar3;
            value.y = (float)(int)((ulonglong)uVar3 >> 0x20);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (this_00,value,(MethodInfo *)0x0);
            data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(7,data._0_3_);
            pOVar1 = (Object *)
                     func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                     (int)&data + 3);
            data = (Dictionary_2_System_Object_System_Object_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                              this_01,pOVar1,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
            if ((data == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
               (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment <= *(byte *)(*(int *)data + 0xb8) &&
                (*(Dictionary_2_System_Object_System_Object___Class **)
                  (*(int *)(*(int *)data + 100) + -4 +
                  (uint)(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment * 4) ==
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
                ))) {
              (this->fields)._.data = data;
              func_?();
              pOVar1 = (Object *)func_?();
              bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 this_01,pOVar1,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar7 == 0) {
                worldObjectType = (this->fields)._.type;
                if ((TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                method = (MethodInfo *)&UNK_?;
                MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
                RuntimeVariablesRepository_GetRuntimeVariables(worldObjectType,(MethodInfo *)0x0);
                method = (MethodInfo *)this;
                data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                (*(code *)(this->klass->vtable).set_RunTimeData.method)();
              }
              else {
                data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(8,data._0_3_);
                method = (MethodInfo *)&UNK_?;
                pOVar1 = (Object *)func_?();
                TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                   this_01,pOVar1,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
                if ((TVar2.m_Index != 0) &&
                   ((*(byte *)(*(int *)TVar2.m_Index + 0xb8) <
                     (
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment ||
                    (*(Dictionary_2_System_Object_System_Object___Class **)
                      (*(int *)(*(int *)TVar2.m_Index + 100) + -4 +
                      (uint)(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            ->_1).naturalAligment * 4) !=
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    )))) goto code_?;
                data = (Dictionary_2_System_Object_System_Object_ *)
                       (this->klass->vtable).get_HasOutputConnector.methodPtr;
                (*(code *)(this->klass->vtable).set_RunTimeData.method)();
              }
              data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,data._0_3_);
              pOVar1 = (Object *)func_?();
              method = (MethodInfo *)this_01;
              data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
              bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 this_01,pOVar1,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar7 != 0) {
                data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,data._0_3_);
                pOVar1 = (Object *)func_?();
                TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                   this_01,pOVar1,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
                uVar3 = CONCAT44(TypeInfo__System__Int32,TVar2.m_Index);
                if (TVar2.m_Index == 0) goto code_?;
                if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
                    (TypeInfo__System__Int32->_0).element_class) goto code_?;
                piVar4 = (int32_t *)func_?(TVar2.m_Index);
                (this->fields)._.ownerActorNr = *piVar4;
              }
              data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(10,data._0_3_);
              pOVar1 = (Object *)func_?();
              bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 this_01,pOVar1,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar7 == 0) {
                return;
              }
              data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(10,data._0_3_);
              pOVar1 = (Object *)func_?();
              TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 this_01,pOVar1,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
              uVar3 = CONCAT44(TypeInfo__System__Int32,TVar2.m_Index);
              if (TVar2.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
                  (TypeInfo__System__Int32->_0).element_class) {
                piVar4 = (int32_t *)func_?(TVar2.m_Index);
                (this->fields)._.previewOwnerProfileId = *piVar4;
                return;
              }
            }
            else {
code_?:
              data = (Dictionary_2_System_Object_System_Object_ *)
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
              ;
              uVar3 = func_?();
            }
          }
        }
      }
    }
  }
code_?:
  func_?(uVar3);
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* MVWorldObjectClient Clone(Int32, Int32, CloneBookkeeping,
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_Clone
          (MVWorldObjectClient *this,int32_t ownerActorNumber,int32_t cloneGroupId,
          CloneBookkeeping *cloneBookkeeping,
          Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
          Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    func_?(&StringLiteral_This_is_a_hack_created_for_spawn);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  pOVar2 = (Object *)
           (*(code *)(this->klass->vtable).get_RunTimeData.method)
                     (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
           ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                     (pOVar2,(MethodInfo *)0x0);
  if ((pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       naturalAligment <= (pDVar3->klass->_1).naturalAligment &&
      ((Dictionary_2_System_Object_System_Object___Class *)
       (pDVar3->klass->_1).typeHierarchy
       [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
        naturalAligment - 1] ==
       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
    (pMVar1->fields)._.runTimeData = pDVar3;
    func_?(&(pMVar1->fields)._.runTimeData,pDVar3);
    this_01 = (Int32__Array *)
              MVWorldObject.dll::MV::WorldObject::MVWorldObject::
              MVWorldObject_DeepCopyWorldObjectDataParameters
                        ((MVWorldObject *)pMVar1,(MethodInfo *)0x0);
    pIVar4 = this_01;
    (*(code *)(pMVar1->klass->vtable).set_RunTimeData.method)
              (pMVar1,(pMVar1->fields)._.runTimeData,
               (pMVar1->klass->vtable).get_HasOutputConnector.methodPtr);
    this = (MVWorldObjectClient *)((uint)this & 0xffffff);
    key = (Dictionary_2_System_Int32_MVWorldObjectClient___Class *)
          func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,(int)&this + 3);
    pCVar5 = cloneBookkeeping;
    if (cloneBookkeeping != (CloneBookkeeping *)0x0) {
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32);
      if (this_01 != (Int32__Array *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)key,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters);
        pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)pIVar4,pOVar2,pOVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        if (((pMVar1->fields)._.ownerActorNr == -1) && (ownerActorNumber == 0)) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            this = (MVWorldObjectClient *)TypeInfo__UnityEngine__Debug;
            func_?();
          }
          this = (MVWorldObjectClient *)0x0;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_This_is_a_hack_created_for_spawn,(MethodInfo *)0x0);
          this = (MVWorldObjectClient *)&stack0xfffffffa;
          pOVar2 = (Object *)func_?();
          pOVar6 = (Object *)func_?();
          pIVar4 = (Int32__Array *)
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
          ;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     ,pOVar2,pOVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        }
        else {
          this = (MVWorldObjectClient *)&stack0xfffffffa;
          pIVar4 = (Int32__Array *)func_?();
          pOVar2 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)pIVar4,(Object *)pIVar4,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        }
        method = (MethodInfo *)&stack0xfffffffa;
        prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)
                     TypeInfo__MV__WorldObject__WorldObjectDataParameters;
        worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)&UNK_?;
        pMVar7 = (MVWorldObjectClient *)func_?();
        worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)&stack0xffffffec;
        cloneBookkeeping = (CloneBookkeeping *)TypeInfo__System__Int32;
        cloneGroupId = (int32_t)&UNK_?;
        ownerActorNumber = func_?();
        cloneGroupId = (int32_t)
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
        ;
        this = pMVar7;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)pIVar4,(Object *)pMVar7,
                   (Object *)ownerActorNumber,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        cloneGroupId = (int32_t)&stack0xfffffff9;
        ownerActorNumber = (int32_t)TypeInfo__MV__WorldObject__WorldObjectDataParameters;
        this = (MVWorldObjectClient *)&UNK_?;
        pOVar2 = (Object *)func_?();
        this = (MVWorldObjectClient *)&stack0xffffffe4;
        pOVar6 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)pIVar4,pOVar2,pOVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        pMVar7 = KoGaMaPackageClient::KoGaMaPackageClient_WorldObjectFactory
                           ((Dictionary_2_System_Object_System_Object_ *)pIVar4,worldObjects,
                            prototypes,(MethodInfo *)0x0);
        if ((pMVar7 != (MVWorldObjectClient *)0x0) &&
           (this_00 = (pCVar5->fields).worldObjectIdsMaps,
           this_00 != (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
          Dictionary_2_System_Int32_System_Int32__Add
                    (this_00,(pMVar1->fields)._.id,(pMVar7->fields)._.id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
          this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_02 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_AddCloneToWorldObjects(this_02,pMVar7,(MethodInfo *)0x0);
            MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetLinksForClone
                      ((MVWorldObject *)pMVar1,(pCVar5->fields).linkIds,(MethodInfo *)0x0);
            MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetObjectLinksForClone
                      ((MVWorldObject *)pMVar1,(pCVar5->fields).objectLinkIds,(MethodInfo *)0x0);
            (pCVar5->fields).cloneIdIncrement = (pCVar5->fields).cloneIdIncrement + 1;
            return pMVar7;
          }
        }
      }
    }
  }
  else {
    func_?(pDVar3,
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar8)();
  return pMVar1;
}


/* Single ComputeObjectRadius() */

float Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ComputeObjectRadius
                (MVWorldObjectClient *this,MethodInfo *method)

{
  iVar1 = (*(code *)(this->klass->vtable).GetLocalBounds.method)
                    (&fStack_2,this,3,(this->klass->vtable).Select.methodPtr);
  fStack_3 = *(float *)(iVar1 + 0xc);
  uVar4 = *(undefined8 *)(iVar1 + 0x10);
  fStack_2 = fStack_3 * _UNK_?;
  uStack_5._0_4_ = (float)uVar4;
  fVar6 = (float)uStack_5 * _UNK_?;
  uStack_5._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
  fVar7 = uStack_5._4_4_ * _UNK_?;
  uStack_5 = uVar4;
  fStack_8 = fStack_3;
  fStack_9 = fStack_3;
  pVVar10 = (Vector3 *)
           (*(code *)(this->klass->vtable).get_Scale.method)
                     (&VStack_11,this,(this->klass->vtable).set_Scale.methodPtr);
  a.y = fVar6;
  a.x = fStack_2;
  a.z = fVar7;
  pVVar10 = MathFunctions::MathFunctions_Multiply(&VStack_11,a,*pVVar10,(MethodInfo *)0x0);
  uStack_5._0_4_ = pVVar10->x;
  uStack_5._4_4_ = pVVar10->y;
  fStack_2 = pVVar10->z;
  VStack_11.y = (float)uStack_5 * _UNK_?;
  VStack_11.z = uStack_5._4_4_ * _UNK_?;
  fStack_12 = fStack_2 * _UNK_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar13 = (double)(VStack_11.y * VStack_11.y + VStack_11.z * VStack_11.z + fStack_12 * fStack_12);
  if (0.0 <= dVar13) {
    return (float)SQRT(dVar13);
  }
  func_?();
  return (float)dVar13;
}


/* Single ComputeObjectSqrRadius() */

float Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ComputeObjectSqrRadius
                (MVWorldObjectClient *this,MethodInfo *method)

{
  iVar1 = (*(code *)(this->klass->vtable).GetLocalBounds.method)
                    (auStack_2,this,3,(this->klass->vtable).Select.methodPtr);
  fStack_3 = *(float *)(iVar1 + 0xc);
  VStack_4._4_8_ = *(undefined8 *)(iVar1 + 0x10);
  fStack_5 = fStack_3 * _UNK_?;
  fVar6 = VStack_4.y * _UNK_?;
  fStack_7 = VStack_4.z * _UNK_?;
  fStack_8 = fStack_3;
  fStack_9 = fStack_3;
  pVVar10 = (Vector3 *)
           (*(code *)(this->klass->vtable).get_Scale.method)
                     (&VStack_4,this,(this->klass->vtable).set_Scale.methodPtr);
  a.y = fVar6;
  a.x = fStack_5;
  a.z = fStack_7;
  pVVar10 = MathFunctions::MathFunctions_Multiply(&VStack_4,a,*pVVar10,(MethodInfo *)0x0);
  uVar11 = pVVar10->x;
  uVar12 = pVVar10->y;
  fVar6 = pVVar10->z * _UNK_?;
  return (float)uVar11 * _UNK_? * (float)uVar11 * _UNK_? +
         (float)uVar12 * _UNK_? * (float)uVar12 * _UNK_? + fVar6 * fVar6;
}


/* GameObject CreateBox(String, Single) */

GameObject *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_CreateBox
          (MVWorldObjectClient *this,String *name,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    cRam_? = '\x01';
  }
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar1,name,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).gameObject;
    if (this_00 != (GameObject *)0x0) {
      value_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar2,value_00,(MethodInfo *)0x0);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar2,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                     (MethodInfo *)0x0);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar1,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar2,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                       (MethodInfo *)0x0);
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar1,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar4 = (pVVar3->oneVector).x;
            uVar5 = (pVVar3->oneVector).y;
            if (pTVar2 != (Transform *)0x0) {
              value.y = (float)uVar5 * 4.1778946e-29;
              value.x = (float)uVar4 * 4.1778946e-29;
              value.z = (pVVar3->oneVector).z * 4.1778946e-29;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar2,value,(MethodInfo *)0x0);
              return pGVar1;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pGVar1 = (GameObject *)(*pcVar6)();
  return pGVar1;
}


/* Void CreateConnectors() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_CreateConnectors
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasInputConnector.method)
                    (this,(this->klass->vtable).get_HasObjectConnector.methodPtr);
  if (cVar1 != '\0') {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar2 == (PrefabPool *)0x0) goto code_?;
    pGVar3 = (pPVar2->fields).logicInputConnectorPrefab;
    puVar4 = (undefined8 *)
             (*(code *)(this->klass->vtable).get_InputConnectorOffset.method)
                       (&uStack_5,this,(this->klass->vtable).get_OutputConnectorOffset.methodPtr);
    uStack_6 = *puVar4;
    fVar7 = *(float *)(puVar4 + 1);
    puVar8 = (undefined4 *)
             (*(code *)(this->klass->vtable).get_InputConnectorRotation.method)
                       (&uStack_9,this,(this->klass->vtable).get_OutputConnectorRotation.methodPtr)
    ;
    uStack_9 = *puVar8;
    uStack_5 = puVar8[1];
    uStack_10 = puVar8[2];
    fStack_11 = (float)puVar8[3];
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    position_01.z = fVar7;
    position_01.x = (float)(undefined4)uStack_6;
    position_01.y = (float)uStack_6._4_4_;
    rotation_01.y = (float)uStack_5;
    rotation_01.x = (float)uStack_9;
    rotation_01.z = (float)uStack_10;
    rotation_01.w = fStack_11;
    pGVar3 = (GameObject *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                       ((Object *)pGVar3,position_01,rotation_01,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                       );
    (this->fields).inputConnectorObject = pGVar3;
    func_?(&(this->fields).inputConnectorObject,pGVar3);
    pGVar3 = (this->fields).inputConnectorObject;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    pGVar3 = (this->fields).gameObject;
    if ((pGVar3 == (GameObject *)0x0) ||
       (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar3,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar12,pTVar13,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasOutputConnector.method)
                    (this,(this->klass->vtable).get_HasInputConnector.methodPtr);
  if (cVar1 != '\0') {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar2 == (PrefabPool *)0x0) goto code_?;
    pGVar3 = (pPVar2->fields).logicOutputConnectorPrefab;
    puVar4 = (undefined8 *)
             (*(code *)(this->klass->vtable).get_OutputConnectorOffset.method)
                       (&uStack_5,this,(this->klass->vtable).get_ObjectConnectorOffset.methodPtr);
    uStack_6 = *puVar4;
    fVar7 = *(float *)(puVar4 + 1);
    puVar8 = (undefined4 *)
             (*(code *)(this->klass->vtable).get_OutputConnectorRotation.method)
                       (&uStack_9,this,(this->klass->vtable).get_ObjectConnectorRotation.methodPtr)
    ;
    uStack_9 = *puVar8;
    uStack_5 = puVar8[1];
    uStack_10 = puVar8[2];
    fStack_11 = (float)puVar8[3];
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    position.z = fVar7;
    position.x = (float)(undefined4)uStack_6;
    position.y = (float)uStack_6._4_4_;
    rotation.y = (float)uStack_5;
    rotation.x = (float)uStack_9;
    rotation.z = (float)uStack_10;
    rotation.w = fStack_11;
    pGVar3 = (GameObject *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                       ((Object *)pGVar3,position,rotation,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                       );
    (this->fields).outputConnectorObject = pGVar3;
    func_?(&(this->fields).outputConnectorObject,pGVar3);
    pGVar3 = (this->fields).outputConnectorObject;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    pGVar3 = (this->fields).gameObject;
    if ((pGVar3 == (GameObject *)0x0) ||
       (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar3,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar12,pTVar13,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasObjectConnector.method)
                    (this,(this->klass->vtable).OnInputStateChanged.methodPtr);
  if (cVar1 == '\0') {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 != (PrefabPool *)0x0) {
    pGVar3 = (pPVar2->fields).logicObjectConnectorPrefab;
    puVar4 = (undefined8 *)
             (*(code *)(this->klass->vtable).get_ObjectConnectorOffset.method)
                       (&uStack_5,this,(this->klass->vtable).get_InputConnectorRotation.methodPtr);
    uStack_6 = *puVar4;
    fVar7 = *(float *)(puVar4 + 1);
    puVar8 = (undefined4 *)
             (*(code *)(this->klass->vtable).get_ObjectConnectorRotation.method)
                       (&uStack_9,this,(this->klass->vtable).get_DocumentationType.methodPtr);
    uStack_9 = *puVar8;
    uStack_5 = puVar8[1];
    uStack_10 = puVar8[2];
    fStack_11 = (float)puVar8[3];
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    position_00.z = fVar7;
    position_00.x = (float)(undefined4)uStack_6;
    position_00.y = (float)uStack_6._4_4_;
    rotation_00.y = (float)uStack_5;
    rotation_00.x = (float)uStack_9;
    rotation_00.z = (float)uStack_10;
    rotation_00.w = fStack_11;
    pGVar3 = (GameObject *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                       ((Object *)pGVar3,position_00,rotation_00,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                       );
    (this->fields).objectConnectorObject = pGVar3;
    func_?(&(this->fields).objectConnectorObject,pGVar3);
    pGVar3 = (this->fields).objectConnectorObject;
    if (pGVar3 != (GameObject *)0x0) {
      pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar3,(MethodInfo *)0x0);
      pGVar3 = (this->fields).gameObject;
      if ((pGVar3 != (GameObject *)0x0) &&
         (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar3,(MethodInfo *)0x0), pTVar12 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar12,pTVar13,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void CreateWorldObject(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_CreateWorldObject
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVGroup);
    func_?(&TypeInfo__MVRuntimeDataVariables);
    cRam_? = '\x01';
  }
  MVWorldObjectClient_CreateConnectors(this,(MethodInfo *)0x0);
  MVWorldObjectClient_ApplyData(this,data,(MethodInfo *)0x0);
  this_00 = (this->fields).gameObject;
  value = (String *)
          (*(code *)(this->klass->vtable).ToString.method)
                    (this,(this->klass->vtable).get_Position.methodPtr);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)this_00,value,(MethodInfo *)0x0);
    value_00 = (MVRuntimeDataVariables *)func_?();
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)value_00,ExceptionArgument__Enum_obj,method);
    (value_00->fields).owner = this;
    func_?();
    this_02 = (List_1_MVRuntimeDataVariable_ *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
               MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__List__);
    (value_00->fields).variables = this_02;
    func_?(&(value_00->fields).variables);
    (this->fields).runtimeDataVariables = value_00;
    func_?(&(this->fields).runtimeDataVariables,value_00);
    if ((this->fields)._.groupId == -1) {
code_?:
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (this_01 = (pMVar1->fields).itemBusinessLogic, this_01 != (MVItemBusinessLogic *)0x0)) {
        bVar2 = MVItemBusinessLogic::MVItemBusinessLogic_CanAddItemToInventory
                          (this_01,(this->fields)._.itemId,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          uVar3 = *(undefined4 *)((int)&(this->fields).interactionFlags + 4);
          piVar4 = &(this->fields).interactionFlags;
          *(uint *)piVar4 = (uint)*piVar4 | 0x4000;
          *(undefined4 *)((int)&(this->fields).interactionFlags + 4) = uVar3;
        }
        return;
      }
    }
    else if (this != (MVWorldObjectClient *)0x0) {
      pMVar5 = (MVGroup *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this,(this->fields)._.groupId,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pMVar5 == (MVGroup *)0x0) {
        (this->fields).group = (MVGroup *)0x0;
      }
      else {
        if (((pMVar5->klass->_1).naturalAligment < (TypeInfo__MVGroup->_1).naturalAligment) ||
           ((MVGroup__Class *)
            (pMVar5->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).naturalAligment - 1] !=
            TypeInfo__MVGroup)) goto code_?;
        (this->fields).group = pMVar5;
        if (((pMVar5->klass->_1).naturalAligment < (TypeInfo__MVGroup->_1).naturalAligment) ||
           ((MVGroup__Class *)
            (pMVar5->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).naturalAligment - 1] !=
            TypeInfo__MVGroup)) goto code_?;
      }
      func_?();
      pMVar5 = (this->fields).group;
      if (pMVar5 != (MVGroup *)0x0) {
        (*(code *)(pMVar5->klass->vtable).AddChild.method)(pMVar5,this);
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_DeSelect
               (MVWorldObjectClient *this,MethodInfo *method)

{
  pMVar1 = this->klass;
  (this->fields).selectedConnector = 0;
  (*(code *)(pMVar1->vtable).RemoveSelectionBox.method)
            (this,(pMVar1->vtable).RemovePreviewBox.methodPtr);
  if ((this->fields).selected != 0) {
    pMVar1 = this->klass;
    (this->fields).selected = 0;
    (*(code *)(pMVar1->vtable).OnSelectedChanged.method)
              (this,0,(pMVar1->vtable).ValidateObjectLinkTarget.methodPtr);
  }
  return;
}


/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_Delete
               (MVWorldObjectClient *this,MVWorldObjectClientManager *worldObjectClientManager,
               String **errorText,MethodInfo *method)

{
  this_00 = (this->fields).gameObject;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    if (worldObjectClientManager != (MVWorldObjectClientManager *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                (worldObjectClientManager,(this->fields)._.id,(MethodInfo *)0x0);
      return 1;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_Destroy
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pGVar1 = (this->fields).gameObject;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar1,(MethodInfo *)0x0);
  }
  if ((this->fields).initializedFromInventory == 0) {
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 == (MVNetworkGame *)0x0) ||
       (pRVar4 = (pMVar3->fields).runtimeVariableNetworkManager,
       pRVar4 == (RuntimeVariableNetworkManager *)0x0)) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar2 = RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_ContainsRuntimeVariables
                      (pRVar4,(this->fields)._.id,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 == (MVNetworkGame *)0x0) ||
         (pRVar4 = (pMVar3->fields).runtimeVariableNetworkManager,
         pRVar4 == (RuntimeVariableNetworkManager *)0x0)) goto code_?;
      RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                (pRVar4,(this->fields)._.id,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void DestroyRecursive(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive
               (MVWorldObjectClient *wo,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&TypeInfo__MVGroup);
    func_?(&TypeInfo__MVWorldObjectClient);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if (wo != (MVWorldObjectClient *)0x0) {
    if (((TypeInfo__MVGroup->_1).naturalAligment <= (wo->klass->_1).naturalAligment) &&
       ((MVGroup__Class *)(wo->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).naturalAligment - 1]
        == TypeInfo__MVGroup)) {
      this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             MVGroup::MVGroup_get_Children((MVGroup *)wo,(MethodInfo *)0x0);
      if (this == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      method_00 = (MethodInfo *)&UNK_?;
      pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_8,this,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                         );
      LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
      LStack_6._index = pLVar7->_index;
      LStack_6._version = pLVar7->_version;
      LStack_6._current = *(Object **)&pLVar7->_current;
      LStack_8._version = 0;
      uStack_1 = 1;
      LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                          );
        wo_00 = LStack_6._current;
        if (bVar9 == 0) break;
        if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVWorldObjectClient);
        }
        MVWorldObjectClient_DestroyRecursive((MVWorldObjectClient *)wo_00,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&LStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
    }
    (*(code *)(wo->klass->vtable).Destroy.method)(wo,(wo->klass->vtable).OnDataUpdate.methodPtr);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  uVar10 = func_?();
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean DoesScreenPointHitCollider(Vector3, Collider) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_DoesScreenPointHitCollider
               (MVWorldObjectClient *this,Vector3 point,Collider *collider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Physics);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (this_00 = (pMVar1->fields).mainCamera, this_00 != (Camera *)0x0)) {
    pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                       ((Ray *)&stack0xffffffcc,this_00,point,(MethodInfo *)0x0);
    uVar3 = (pRVar2->m_Origin).x;
    uVar4 = (pRVar2->m_Origin).y;
    uVar5 = (pRVar2->m_Origin).z;
    ray.m_Origin.z = (float)uVar5;
    ray.m_Origin.y = (float)uVar4;
    ray.m_Origin.x = (float)uVar3;
    uVar6 = (pRVar2->m_Direction).x;
    ray.m_Direction.x = (float)uVar6;
    uVar7._0_4_ = (pRVar2->m_Direction).y;
    uVar7._4_4_ = (pRVar2->m_Direction).z;
    if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pRVar8 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer;
    if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ray.m_Direction.y = (float)(int)uVar7;
    ray.m_Direction.z = (float)(int)((ulonglong)uVar7 >> 0x20);
    iVar9 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_RaycastNonAlloc_3
                       (ray,pRVar8,(MethodInfo *)0x0);
    uVar10 = 0;
    if (0 < iVar9) {
      iVar11 = 0;
      do {
        if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pRVar8 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer;
        if (pRVar8 == (RaycastHit__Array *)0x0) goto code_?;
        if (pRVar8->max_length <= uVar10) goto code_?;
        x = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                      ((RaycastHit *)((int)&pRVar8->vector[0].m_Point.x + iVar11),(MethodInfo *)0x0)
        ;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x,(Object_1 *)collider,(MethodInfo *)0x0);
        if (bVar12 != 0) {
          return 1;
        }
        uVar10 = uVar10 + 1;
        iVar11 = iVar11 + 0x2c;
      } while ((int)uVar10 < (int)x);
    }
    return 0;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  bVar12 = (*pcVar13)();
  return bVar12;
}


/* Vector3[] GetBoundsCornersLocal(BoundsContext) */

Vector3__Array *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetBoundsCornersLocal
          (MVWorldObjectClient *this,BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  puVar1 = (undefined4 *)
           (*(code *)(this->klass->vtable).GetLocalBounds.method)
                     (auStack_2,this,boundsContext,(this->klass->vtable).Select.methodPtr);
  uStack_3 = *puVar1;
  uStack_4 = puVar1[1];
  uStack_5 = puVar1[2];
  uStack_6 = puVar1[3];
  uStack_7 = *(undefined8 *)(puVar1 + 4);
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  bounds.m_Center.y = (float)uStack_4;
  bounds.m_Center.x = (float)uStack_3;
  bounds.m_Center.z = (float)uStack_5;
  bounds.m_Extents.x = (float)uStack_6;
  bounds.m_Extents.y = (float)(int)uStack_7;
  bounds.m_Extents.z = (float)((ulonglong)uStack_7 >> 0x20);
  pVVar8 = SharedCubeFunctions::SharedCubeFunctions_GetCorners_1(bounds,(MethodInfo *)0x0);
  return pVVar8;
}


/* Vector3[] GetBoundsCornersWorld(BoundsContext) */

Vector3__Array *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetBoundsCornersWorld
          (MVWorldObjectClient *this,BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_MethodInfo__System__Linq__Enumerable__Select<UnityEngine::Vector3,_UnityEngine::Vector3>_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>__System__Func<UnityEngine::Vector3,_UnityEngine::Vector3>_
                   );
    func_?(&
                    UnityEngine__Vector3__MethodInfo__System__Linq__Enumerable__ToArray<UnityEngine::Vector3>_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_____
                   );
    func_?(&TypeInfo__System__Func<UnityEngine::Vector3,_UnityEngine::Vector3>);
    func_?(&
                    MethodInfo__MVWorldObjectClient____c__DisplayClass164_0___GetBoundsCornersWorld_b__0_UnityEngine__Vector3_
                   );
    func_?(&TypeInfo__MVWorldObjectClient____c__DisplayClass164_0);
    cRam_? = '\x01';
  }
  this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__MVWorldObjectClient____c__DisplayClass164_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                        ((Matrix4x4 *)&stack0xffffffbc,this_00,(MethodInfo *)0x0);
    pUVar2 = (UxmlObjectListAttributeDescription_1_System_Object___Class *)pMVar1->m10;
    pMVar3 = (MonitorData *)pMVar1->m20;
    pLVar4 = (List_1_System_Object_ *)pMVar1->m30;
    pUVar5 = (UxmlObjectListAttributeDescription_1_System_Object___Class *)pMVar1->m01;
    pMVar6 = (MonitorData *)pMVar1->m11;
    pLVar7 = (List_1_System_Object_ *)pMVar1->m21;
    pUVar8 = (UxmlObjectListAttributeDescription_1_System_Object___Class *)pMVar1->m31;
    pMVar9 = (MonitorData *)pMVar1->m02;
    pLVar10 = (List_1_System_Object_ *)pMVar1->m12;
    pUVar11 = (UxmlObjectListAttributeDescription_1_System_Object___Class *)pMVar1->m22;
    pMVar12 = (MonitorData *)pMVar1->m32;
    pLVar13 = (List_1_System_Object_ *)pMVar1->m03;
    pUVar14 = (UxmlObjectListAttributeDescription_1_System_Object___Class *)pMVar1->m13;
    pMVar15 = (MonitorData *)pMVar1->m23;
    pLVar16 = (List_1_System_Object_ *)pMVar1->m33;
    if (this_01 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
      (this_01->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)pMVar1->m00;
      this_01[1].klass = pUVar2;
      this_01[1].monitor = pMVar3;
      this_01[1].fields._._defaultValue_k__BackingField = pLVar4;
      this_01[2].klass = pUVar5;
      this_01[2].monitor = pMVar6;
      this_01[2].fields._._defaultValue_k__BackingField = pLVar7;
      this_01[3].klass = pUVar8;
      this_01[3].monitor = pMVar9;
      this_01[3].fields._._defaultValue_k__BackingField = pLVar10;
      this_01[4].klass = pUVar11;
      this_01[4].monitor = pMVar12;
      this_01[4].fields._._defaultValue_k__BackingField = pLVar13;
      this_01[5].klass = pUVar14;
      this_01[5].monitor = pMVar15;
      this_01[5].fields._._defaultValue_k__BackingField = pLVar16;
      pVVar17 = MVWorldObjectClient_GetBoundsCornersLocal(this,boundsContext,(MethodInfo *)0x0);
      this_02 = (Func_2_UnityEngine_Vector3Int_UnityEngine_Vector3Int_ *)func_?();
      mscorlib.dll::System::Func`2[UnityEngine::Vector3Int,UnityEngine::Vector3Int]::
      Func_2_UnityEngine_Vector3Int_UnityEngine_Vector3Int___ctor
                (this_02,(Object *)this_01,
                 MethodInfo__MVWorldObjectClient____c__DisplayClass164_0___GetBoundsCornersWorld_b__0_UnityEngine__Vector3_
                 ,(MethodInfo *)0x0);
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_6
                         ((IEnumerable_1_UnityEngine_Vector3_ *)pVVar17,
                          (Func_2_UnityEngine_Vector3_UnityEngine_Vector3_ *)this_02,
                          System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_MethodInfo__System__Linq__Enumerable__Select<UnityEngine::Vector3,_UnityEngine::Vector3>_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>__System__Func<UnityEngine::Vector3,_UnityEngine::Vector3>_
                         );
      pVVar17 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_3
                          (source,
                           UnityEngine__Vector3__MethodInfo__System__Linq__Enumerable__ToArray<UnityEngine::Vector3>_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_____
                          );
      return pVVar17;
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  pVVar17 = (Vector3__Array *)(*pcVar18)();
  return pVVar17;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffd8,pTVar2,(MethodInfo *)0x0);
      fVar4 = pQVar3->x;
      pGVar1 = (this->fields).gameObject;
      if (pGVar1 != (GameObject *)0x0) {
        puVar5 = &UNK_?;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          pVVar6 = (Vector3 *)&stack0xffffffe8;
          puVar7 = &UNK_?;
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                             (pVVar6,pTVar2,(MethodInfo *)0x0);
          uVar9._0_4_ = pVVar8->x;
          uVar9._4_4_ = pVVar8->y;
          fVar10 = pVVar8->z;
          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
            puVar11 = &UNK_?;
            pSVar12 = TypeInfo__SharedCubeFunctions;
            func_?();
            uVar9 = CONCAT44(pSVar12,puVar11);
          }
          worldPosition.z = position.z;
          worldPosition.x = position.x;
          worldPosition.y = position.y;
          rotation.y = (float)puVar5;
          rotation.x = fVar4;
          rotation.z = (float)puVar7;
          rotation.w = (float)pVVar6;
          scale.z = fVar10;
          scale.x = (float)(int)uVar9;
          scale.y = (float)(int)((ulonglong)uVar9 >> 0x20);
          pVVar6 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                             (&position,worldPosition,rotation,gridSize,scale,(MethodInfo *)0x0);
          fVar10 = pVVar6->y;
          fVar4 = pVVar6->z;
          __return_storage_ptr__->x = pVVar6->x;
          __return_storage_ptr__->y = fVar10;
          __return_storage_ptr__->z = fVar4;
          return __return_storage_ptr__;
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar13)();
  return pVVar6;
}


/* MVWorldObjectClient GetHitInteractionHandlingWO() */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetHitInteractionHandlingWO
          (MVWorldObjectClient *this,MethodInfo *method)

{
code_?:
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug,unaff_EBP);
    func_?(&StringLiteral_WorldObject_has_ParentHandlesHit);
    cRam_? = '\x01';
  }
  switch((this->fields)._PlayInteractionType_k__BackingField) {
  default:
    return (MVWorldObjectClient *)0x0;
  case 1:
    return this;
  case 2:
    break;
  }
  if ((this->fields)._.groupId == -1) {
    context = (this->fields).gameObject;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug,unaff_ESI);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
              ((Object *)StringLiteral_WorldObject_has_ParentHandlesHit,(Object_1 *)context,
               (MethodInfo *)0x0);
    return (MVWorldObjectClient *)0x0;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_00 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar1 = (MVWorldObjectClient *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_00,(this->fields)._.groupId,(MethodInfo *)0x0),
     unaff_ESI = (MVWorldObjectClient *)method, pMVar1 == (MVWorldObjectClient *)0x0)) {
    bVar2 = true;
    bVar3 = false;
    pMVar1 = (MVWorldObjectClient *)func_?();
    unaff_ESI = this;
    if (!bVar3 && !bVar2) {
      pbVar4 = (byte *)((int)&pMVar1[-1].fields.interactionFlags + 6);
      bVar5 = *pbVar4;
      bVar6 = (byte)pMVar1;
      bVar7 = *pbVar4;
      *pbVar4 = bVar7 + bVar6 + bVar3;
      pcVar8 = (char *)((int)&this[-1].fields.interactionFlags + 6);
      *pcVar8 = *pcVar8 + extraout_DH +
                (CARRY1(bStackY_1e,bVar6) ||
                CARRY1(bStackY_1e + bVar6,CARRY1(bVar5,bVar6) || CARRY1(bVar7 + bVar6,bVar3)));
      pcVar9 = (code *)swi(3);
      pMVar1 = (MVWorldObjectClient *)(*pcVar9)();
      return pMVar1;
    }
  }
  method = (MethodInfo *)0x0;
  unaff_EBP = in_stack_10;
  this = pMVar1;
  goto code_?;
}


/* Vector3 GetInputConnectorPos() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetInputConnectorPos
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_HasInputConnector.method)
                    (this,(this->klass->vtable).get_HasObjectConnector.methodPtr);
  if (cVar1 == '\0') {
    this_00 = (this->fields).gameObject;
  }
  else {
    this_00 = (this->fields).inputConnectorObject;
  }
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
      fVar3 = pVVar2->y;
      fVar4 = pVVar2->z;
      __return_storage_ptr__->x = pVVar2->x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar5)();
  return pVVar2;
}


/* Vector3 GetLocalAxis(RotationMode) */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetLocalAxis
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,
                    RotationMode__Enum rotationMode,MethodInfo *method)

{
  if (rotationMode == RotationMode__Enum_X) {
    pTVar1 = (this->fields).transform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
  }
  else if ((rotationMode == RotationMode__Enum_Y) || (rotationMode != RotationMode__Enum_Z)) {
    pTVar1 = (this->fields).transform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
  }
  else {
    pTVar1 = (this->fields).transform;
    if (pTVar1 == (Transform *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar4)();
      return pVVar2;
    }
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
  }
  fVar5 = pVVar2->y;
  fVar6 = pVVar2->z;
  __return_storage_ptr__->x = pVVar2->x;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVWorldObjectClient *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_GetLocalBounds_has_not_been_impl);
    cRam_? = '\x01';
  }
  pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Type *)0x0) {
    arg0 = (Object *)
           (*(code *)(pTVar1->klass->vtable).__unknown.method)
                     (pTVar1,(pTVar1->klass->vtable).get_DeclaringType.methodPtr);
    message = mscorlib.dll::System::String::String_Format
                        (StringLiteral_GetLocalBounds_has_not_been_impl,arg0,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)message,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar3._0_4_ = (pVVar2->zeroVector).x;
    uVar3._4_4_ = (pVVar2->zeroVector).y;
    fVar4 = (pVVar2->zeroVector).z;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    (__return_storage_ptr__->m_Center).x = (float)(int)uVar3;
    fVar5 = _UNK_?;
    (__return_storage_ptr__->m_Center).y = (float)(int)((ulonglong)uVar3 >> 0x20);
    uVar6 = (pVVar2->zeroVector).x;
    uVar7 = (pVVar2->zeroVector).y;
    fVar8 = (pVVar2->zeroVector).z * _UNK_?;
    (__return_storage_ptr__->m_Center).z = fVar4;
    (__return_storage_ptr__->m_Extents).x = (float)uVar6 * fVar5;
    (__return_storage_ptr__->m_Extents).y = (float)uVar7 * fVar5;
    (__return_storage_ptr__->m_Extents).z = fVar8;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pBVar10 = (Bounds *)(*pcVar9)();
  return pBVar10;
}


/* Vector3 GetObjectConnectorPos() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetObjectConnectorPos
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_HasObjectConnector.method)
                    (this,(this->klass->vtable).OnInputStateChanged.methodPtr);
  if (cVar1 == '\0') {
    this_00 = (this->fields).gameObject;
  }
  else {
    this_00 = (this->fields).objectConnectorObject;
  }
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
      fVar3 = pVVar2->y;
      fVar4 = pVVar2->z;
      __return_storage_ptr__->x = pVVar2->x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar5)();
  return pVVar2;
}


/* Vector3 GetOutputConnectorPos() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetOutputConnectorPos
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_HasOutputConnector.method)
                    (this,(this->klass->vtable).get_HasInputConnector.methodPtr);
  if (cVar1 == '\0') {
    this_00 = (this->fields).gameObject;
  }
  else {
    this_00 = (this->fields).outputConnectorObject;
  }
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
      fVar3 = pVVar2->y;
      fVar4 = pVVar2->z;
      __return_storage_ptr__->x = pVVar2->x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar5)();
  return pVVar2;
}


/* Vector3 GetTargetPosition() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetTargetPosition
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Did_not_find_collider__Using_tra);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_02 = (Collider *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_1
                        (this_00,
                         UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                        );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
    pSVar2 = StringLiteral_Did_not_find_collider__Using_tra;
    if (bVar1 == 0) {
      if (this_02 != (Collider *)0x0) {
        pBVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                           ((Bounds *)&stack0xffffffe4,this_02,(MethodInfo *)0x0);
        fVar4 = (pBVar3->m_Center).y;
        fVar5 = (pBVar3->m_Center).z;
        __return_storage_ptr__->x = (pBVar3->m_Center).x;
        __return_storage_ptr__->y = fVar4;
        __return_storage_ptr__->z = fVar5;
        return __return_storage_ptr__;
      }
    }
    else {
      str1 = (String *)(*(code *)(this->klass->vtable).ToString.method)();
      pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar2,str1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar2,(MethodInfo *)0x0);
      this_01 = (this->fields).transform;
      if (this_01 != (Transform *)0x0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_7,this_01,(MethodInfo *)0x0);
        fVar5 = pVVar6->y;
        fVar4 = pVVar6->z;
        __return_storage_ptr__->x = pVVar6->x;
        __return_storage_ptr__->y = fVar5;
        __return_storage_ptr__->z = fVar4;
        return __return_storage_ptr__;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar8)();
  return pVVar6;
}


/* MVWorldObjectClient+TransformData GetTransformData(Dictionary`2[System.Object,System.Object]) */

MVWorldObjectClient_TransformData *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetTransformData
          (MVWorldObjectClient_TransformData *__return_storage_ptr__,MVWorldObjectClient *this,
          Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__UnityEngine__Quaternion);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    func_?(&StringLiteral_Nan_position_detected);
    func_?(&StringLiteral_Nan_rotation_detected);
    cRam_? = '\x01';
  }
  pMVar1 = __return_storage_ptr__;
  pWVar2 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
  __return_storage_ptr__ =
       (MVWorldObjectClient_TransformData *)CONCAT13(4,__return_storage_ptr__._0_3_);
  (pMVar1->position).x = 0.0;
  (pMVar1->position).y = 0.0;
  (pMVar1->position).z = 0.0;
  (pMVar1->rotation).x = 0.0;
  (pMVar1->rotation).y = 0.0;
  (pMVar1->rotation).z = 0.0;
  (pMVar1->rotation).w = 0.0;
  pOVar3 = (Object *)func_?(pWVar2,(int)&__return_storage_ptr__ + 3);
  this_00 = data;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar3
                        ,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (TVar4.m_Index != 0) {
      pVVar5 = TypeInfo__UnityEngine__Vector3;
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
          (TypeInfo__UnityEngine__Vector3->_0).element_class) goto code_?;
      puVar6 = (undefined8 *)func_?(TVar4.m_Index);
      uVar7 = *puVar6;
      fVar8 = *(float *)(puVar6 + 1);
      (pMVar1->position).x = (float)(int)uVar7;
      (pMVar1->position).y = (float)(int)((ulonglong)uVar7 >> 0x20);
      (pMVar1->position).z = fVar8;
      fVar8 = (pMVar1->rotation).w;
      uVar9 = (pMVar1->rotation).z;
      bVar10 = MathFunctions::MathFunctions_VectorIsNan(pMVar1->position,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug,uVar9,fVar8);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Nan_position_detected,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar12 = (pVVar11->zeroVector).y;
        fVar8 = (pVVar11->zeroVector).z;
        (pMVar1->position).x = (pVVar11->zeroVector).x;
        (pMVar1->position).y = fVar12;
        (pMVar1->position).z = fVar8;
      }
      __return_storage_ptr__ =
           (MVWorldObjectClient_TransformData *)CONCAT13(5,__return_storage_ptr__._0_3_);
      pOVar3 = (Object *)
                func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                (int)&__return_storage_ptr__ + 3);
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                          pOVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (TVar4.m_Index != 0) {
        pVVar5 = (Vector3__Class *)TypeInfo__UnityEngine__Quaternion;
        if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
            (TypeInfo__UnityEngine__Quaternion->_0).element_class) {
          pfVar13 = (float *)func_?(TVar4.m_Index);
          fVar8 = pfVar13[1];
          fVar12 = pfVar13[2];
          fVar14 = pfVar13[3];
          (pMVar1->rotation).x = *pfVar13;
          (pMVar1->rotation).y = fVar8;
          (pMVar1->rotation).z = fVar12;
          (pMVar1->rotation).w = fVar14;
          uVar15 = (pMVar1->rotation).z;
          uVar16 = (pMVar1->rotation).x;
          uVar17 = (pMVar1->rotation).y;
          quaternion.y = (float)uVar17;
          quaternion.x = (float)uVar16;
          quaternion.z = (float)uVar15;
          quaternion.w = (pMVar1->rotation).w;
          bVar10 = MathFunctions::MathFunctions_QuaternionIsNan
                             (quaternion,(MethodInfo *)(pMVar1->position).x);
          if (bVar10 != 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Nan_rotation_detected,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Quaternion);
              cRam_? = '\x01';
            }
            pQVar18 = TypeInfo__UnityEngine__Quaternion->static_fields;
            fVar8 = (pQVar18->identityQuaternion).y;
            fVar12 = (pQVar18->identityQuaternion).z;
            fVar14 = (pQVar18->identityQuaternion).w;
            (pMVar1->rotation).x = (pQVar18->identityQuaternion).x;
            (pMVar1->rotation).y = fVar8;
            (pMVar1->rotation).z = fVar12;
            (pMVar1->rotation).w = fVar14;
          }
          return pMVar1;
        }
        goto code_?;
      }
    }
  }
  func_?();
  TVar4.m_Index = extraout_ECX;
  pVVar5 = extraout_EDX;
code_?:
  func_?(TVar4.m_Index,pVVar5);
  pcVar19 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient_TransformData *)(*pcVar19)();
  return pMVar1;
}


/* Boolean HasEliteRequiredFlag(InteractionFlags) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_HasEliteRequiredFlag
               (MVWorldObjectClient *this,InteractionFlags__Enum flag,MethodInfo *method)

{
  if (((flag & (InteractionFlags__Enum)(this->fields).eliteRequiredFlags) == flag) &&
     ((MethodInfo *)(*(uint *)((int)&(this->fields).eliteRequiredFlags + 4) & (uint)method) ==
      method)) {
    return 1;
  }
  return 0;
}


/* Boolean HasInteractionFlag(InteractionFlags) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
               (MVWorldObjectClient *this,InteractionFlags__Enum flag,MethodInfo *method)

{
  if (((flag & (InteractionFlags__Enum)(this->fields).interactionFlags) == flag) &&
     ((MethodInfo *)(*(uint *)((int)&(this->fields).interactionFlags + 4) & (uint)method) == method)
     ) {
    return 1;
  }
  return 0;
}


/* Void HideConnectors() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_HideConnectors
               (MVWorldObjectClient *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_HasInputConnector.method)
                    (this,(this->klass->vtable).get_HasObjectConnector.methodPtr);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields).inputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasOutputConnector.method)(this);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields).outputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasObjectConnector.method)
                    (this,(this->klass->vtable).OnInputStateChanged.methodPtr);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields).objectConnectorObject;
    if (pGVar2 == (GameObject *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  return;
}


/* Void HighlightConnector(Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_HighlightConnector
               (MVWorldObjectClient *this,bool state,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::Renderer>__
                   );
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).selectedConnector == 0) {
    pGVar1 = (this->fields).outputConnectorObject;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = (this->fields).outputConnectorObject;
      if ((pGVar1 == (GameObject *)0x0) ||
         (pCVar3 = (Component *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentInChildren_1
                             (pGVar1,
                              UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                             ), pCVar3 == (Component *)0x0)) goto code_?;
      pRVar4 = (Renderer *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::
               Component_GetComponentInChildren_1
                         (pCVar3,
                          UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::Renderer>__
                         );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pRVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return;
      }
      iVar5 = func_?();
      if (state == 0) {
        if (iVar5 == 0) goto code_?;
        pMVar6 = *(Material **)(iVar5 + 0x250);
      }
      else {
        if (iVar5 == 0) goto code_?;
        pMVar6 = *(Material **)(iVar5 + 0x254);
      }
      if (pRVar4 == (Renderer *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                (pRVar4,pMVar6,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields).inputConnectorObject;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pGVar1 = (this->fields).inputConnectorObject;
    if ((pGVar1 == (GameObject *)0x0) ||
       (pCVar3 = (Component *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentInChildren_1
                           (pGVar1,
                            UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                           ), pCVar3 == (Component *)0x0)) goto code_?;
    pRVar4 = (Renderer *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInChildren_1
                       (pCVar3,
                        UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::Renderer>__
                       );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pRVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    iVar5 = func_?();
code_?:
    if (state == 0) {
      if (iVar5 == 0) goto code_?;
      pMVar6 = *(Material **)(iVar5 + 0x248);
    }
    else {
      if (iVar5 == 0) goto code_?;
      pMVar6 = *(Material **)(iVar5 + 0x24c);
    }
  }
  else {
    if ((this->fields).selectedConnector == 1) {
      pGVar1 = (this->fields).inputConnectorObject;
      if ((pGVar1 == (GameObject *)0x0) ||
         (pCVar3 = (Component *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentInChildren_1
                             (pGVar1,
                              UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                             ), pCVar3 == (Component *)0x0)) goto code_?;
      pRVar4 = (Renderer *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::
               Component_GetComponentInChildren_1
                         (pCVar3,
                          UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::Renderer>__
                         );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pRVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return;
      }
      iVar5 = func_?();
      state = 0;
      goto code_?;
    }
    if ((this->fields).selectedConnector != 2) {
      return;
    }
    pGVar1 = (this->fields).outputConnectorObject;
    if ((pGVar1 == (GameObject *)0x0) ||
       (pCVar3 = (Component *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentInChildren_1
                           (pGVar1,
                            UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                           ), pCVar3 == (Component *)0x0)) goto code_?;
    pRVar4 = (Renderer *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInChildren_1
                       (pCVar3,
                        UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::Renderer>__
                       );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pRVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    iVar5 = func_?();
    if (iVar5 == 0) goto code_?;
    pMVar6 = *(Material **)(iVar5 + 0x250);
  }
  if (pRVar4 != (Renderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              (pRVar4,pMVar6,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_Initialize
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if ((this->fields)._.previewOwnerProfileId != 0) {
    (*(code *)(this->klass->vtable).AddPreviewBox.method)
              (this,(this->klass->vtable).AddSelectionBox.methodPtr);
    uVar1 = *(undefined4 *)((int)&(this->fields).interactionFlags + 4);
    piVar2 = &(this->fields).interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x20000;
    *(undefined4 *)((int)&(this->fields).interactionFlags + 4) = uVar1;
  }
  return;
}


/* GameObject InstantiatePrefab(GameObject, MVWorldObjectClient+TransformData) */

GameObject *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_InstantiatePrefab
          (MVWorldObjectClient *this,GameObject *prefabObject,
          MVWorldObjectClient_TransformData transformData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Prefab_object_is_null_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)prefabObject,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Prefab_object_is_null_,(MethodInfo *)0x0);
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pGVar2 = (GameObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                     ((Object *)prefabObject,transformData.position,transformData.rotation,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                     );
  if (pGVar2 != (GameObject *)0x0) {
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)pGVar2,(MethodInfo *)0x0);
    (this->fields).goId = iVar3;
    return pGVar2;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pGVar2 = (GameObject *)(*pcVar4)();
  return pGVar2;
}


/* ObjectPrefab InstantiatePrefab(ObjectPrefab, MVWorldObjectClient+TransformData) */

ObjectPrefab *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_InstantiatePrefab_1
          (MVWorldObjectClient *this,ObjectPrefab *prefabObject,
          MVWorldObjectClient_TransformData transformData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    ObjectPrefab_MethodInfo__UnityEngine__Object__Instantiate<ObjectPrefab>_ObjectPrefab__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Prefab_object_is_null_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)prefabObject,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Prefab_object_is_null_,(MethodInfo *)0x0);
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar2 = (ObjectPrefab *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                     ((Object *)prefabObject,transformData.position,transformData.rotation,
                      ObjectPrefab_MethodInfo__UnityEngine__Object__Instantiate<ObjectPrefab>_ObjectPrefab__UnityEngine__Vector3__UnityEngine__Quaternion_
                     );
  if (pOVar2 != (ObjectPrefab *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pOVar2,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                        ((Object_1 *)this_00,(MethodInfo *)0x0);
      (this->fields).goId = iVar3;
      return pOVar2;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pOVar2 = (ObjectPrefab *)(*pcVar4)();
  return pOVar2;
}


/* Void InventoryInitialize() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_InventoryInitialize
               (MVWorldObjectClient *this,MethodInfo *method)

{
  pMVar1 = this->klass;
  (this->fields).initializedFromInventory = 1;
  (*(code *)(pMVar1->vtable).InitializeInventory.method)
            (this,(pMVar1->vtable).PlayModeInitialize.methodPtr);
  return;
}


/* Boolean IsPointOverInputConnector(Vector3) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_IsPointOverInputConnector
               (MVWorldObjectClient *this,Vector3 mousePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                   );
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasInputConnector.method)
                    (this,(this->klass->vtable).get_HasObjectConnector.methodPtr);
  if (cVar1 != '\0') {
    this_00 = (this->fields).inputConnectorObject;
    if (this_00 != (GameObject *)0x0) {
      collider = (Collider *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentInChildren_1
                           (this_00,
                            UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                           );
      bVar2 = MVWorldObjectClient_DoesScreenPointHitCollider
                        (this,mousePoint,collider,(MethodInfo *)0x0);
      return bVar2;
    }
    func_?();
    pcVar3 = (code *)swi(3);
    bVar2 = (*pcVar3)();
    return bVar2;
  }
  return 0;
}


/* Boolean IsPointOverOutputConnector(Vector3) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_IsPointOverOutputConnector
               (MVWorldObjectClient *this,Vector3 mousePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                   );
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasOutputConnector.method)
                    (this,(this->klass->vtable).get_HasInputConnector.methodPtr);
  if (cVar1 != '\0') {
    this_00 = (this->fields).outputConnectorObject;
    if (this_00 != (GameObject *)0x0) {
      collider = (Collider *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentInChildren_1
                           (this_00,
                            UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                           );
      bVar2 = MVWorldObjectClient_DoesScreenPointHitCollider
                        (this,mousePoint,collider,(MethodInfo *)0x0);
      return bVar2;
    }
    func_?();
    pcVar3 = (code *)swi(3);
    bVar2 = (*pcVar3)();
    return bVar2;
  }
  return 0;
}


/* Boolean OnClickHandler(EditorStateMachine, Collider) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_OnClickHandler
               (MVWorldObjectClient *this,EditorStateMachine *esm,Collider *collider,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasInputConnector.method)
                    (this,(this->klass->vtable).get_HasObjectConnector.methodPtr);
  if (cVar1 == '\0') {
code_?:
    cVar1 = (*(code *)(this->klass->vtable).get_HasOutputConnector.method)(this);
    if (cVar1 != '\0') {
      pGVar2 = (this->fields).outputConnectorObject;
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      pOVar3 = (Object_1 *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentInChildren_1
                         (pGVar2,
                          UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                         );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      esm = (EditorStateMachine *)0x0;
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)collider,pOVar3,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        (this->fields).selectedConnector = 2;
        goto code_?;
      }
    }
    cVar1 = (*(code *)(this->klass->vtable).get_HasObjectConnector.method)(this);
    if (cVar1 == '\0') {
      return 0;
    }
    pGVar2 = (this->fields).objectConnectorObject;
    if (pGVar2 != (GameObject *)0x0) {
      pOVar3 = (Object_1 *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentInChildren_1
                         (pGVar2,
                          UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                         );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)collider,pOVar3,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return 0;
      }
      (this->fields).selectedConnector = 3;
      if (esm != (EditorStateMachine *)0x0) {
        FSMEntity::FSMEntity_PushState
                  ((FSMEntity *)esm,EditorEvent__Enum_ESAddObjectLink,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
  else {
    pGVar2 = (this->fields).inputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    pOVar3 = (Object_1 *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentInChildren_1
                       (pGVar2,
                        UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                       );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)collider,pOVar3,(MethodInfo *)0x0);
    if (bVar4 == 0) goto code_?;
    (this->fields).selectedConnector = 1;
code_?:
    if (esm != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_PushState((FSMEntity *)esm,EditorEvent__Enum_ESAddLink,(MethodInfo *)0x0)
      ;
      return 1;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_OnExitObject
               (MVWorldObjectClient *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
  uStack_1 = 0xc;
  value = (Object *)func_?(TypeInfo__EditorEvent,&uStack_1);
  if (e != (EditorStateMachine *)0x0) {
    FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
    return 0;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void OnSelectedChanged(Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_OnSelectedChanged
               (MVWorldObjectClient *this,bool selected,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SelectedEventArgs);
    cRam_? = '\x01';
  }
  if ((this->fields).SelectedChanged != (UnityAction_2_MVWorldObjectClient_SelectedEventArgs_ *)0x0)
  {
    pUVar1 = (this->fields).SelectedChanged;
    this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__SelectedEventArgs);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventArgs);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__EventArgs);
    }
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
    *(bool *)&(this_00->fields)._._defaultValue_k__BackingField = selected;
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,this,this_00,(pUVar1->fields)._._.method);
  }
  return;
}


/* Void PartialRemoveFromWOData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_PartialRemoveFromWOData
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *entriesToRemove
               ,MethodInfo *method)

{
  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_PartialRemoveFromWOData
            ((MVWorldObject *)this,entriesToRemove,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).OnDataUpdate.method)
            (this,(this->klass->vtable).OnRunTimeDataUpdate.methodPtr);
  return;
}


/* Void PartialUpdateWOData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_PartialUpdateWOData
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *woData,
               MethodInfo *method)

{
  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_PartialUpdateWOData
            ((MVWorldObject *)this,woData,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).OnDataUpdate.method)
            (this,(this->klass->vtable).OnRunTimeDataUpdate.methodPtr);
  return;
}


/* Void PositionChangedNotify() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_PositionChangedNotify
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PositionChangedEventArgs);
    cRam_? = '\x01';
  }
  if ((this->fields).PositionChanged !=
      (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
    this_00 = (this->fields).transform;
    pUVar1 = (this->fields).PositionChanged;
    if (this_00 == (Transform *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_4,this_00,(MethodInfo *)0x0);
    uStack_5._0_4_ = pVVar3->x;
    uStack_5._4_4_ = pVVar3->y;
    pMVar6 = (MonitorData *)pVVar3->z;
    this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__PositionChangedEventArgs);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventArgs);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__EventArgs);
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
    }
    else {
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
    }
    *(undefined8 *)&this_01->fields = uStack_5;
    this_01[1].monitor = pMVar6;
    VStack_4.y = (float)(pUVar1->fields)._._.method;
    VStack_4.x = (float)this_01;
    (*(pUVar1->fields)._._.invoke_impl)((pUVar1->fields)._._.method_code,this);
  }
  return;
}


/* Void ReceiveInteractionPackage(InteractionData, MVPlayer) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ReceiveInteractionPackage
               (MVWorldObjectClient *this,InteractionData interactionStruct,MVPlayer *p,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarPackages);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__get_Item_MV__WorldObject__InteractionPackageType_
                   );
    func_?(&TypeInfo__MV__WorldObject__InteractionData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AvatarPackages->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarPackages);
  }
  this_00 = TypeInfo__AvatarPackages->static_fields->packages;
  if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__InteractionData);
  }
  if (this_00 != (Dictionary_2_MV_WorldObject_InteractionPackageType_InteractionPackage_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,
                        interactionStruct._16_4_,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__get_Item_MV__WorldObject__InteractionPackageType_
                       );
    if (pOVar1 != (Object *)0x0) {
      (*pOVar1->klass[1]._0.gc_desc)
                (pOVar1,this,p,interactionStruct.damage,interactionStruct.impulse.x,
                 interactionStruct.impulse.y,interactionStruct.impulse.z,interactionStruct._16_4_,
                 pOVar1->klass[1]._0.name);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ReceivePackage(MVPlayer, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ReceivePackage
               (MVWorldObjectClient *this,MVPlayer *p,
               Dictionary_2_System_Object_System_Object_ *package,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&TypeInfo__MV__WorldObject__PackageType);
    func_?(&StringLiteral_Unknown_package_type);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
  if (package != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        auStack_8,(Dictionary_2_System_UInt32_System_Object_ *)package,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (Object *)(pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar12 = DStack_6._current.value;
      if (DStack_6._current.key == (Object *)0x0) goto code_?;
      pOVar13 = DStack_6._current.key;
      pPVar14 = TypeInfo__MV__WorldObject__PackageType;
      if (((DStack_6._current.key)->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__PackageType->_0).element_class) break;
      pcVar15 = (char *)func_?(DStack_6._current.key);
      pBVar16 = TypeInfo__System__Byte;
      if (*pcVar15 == '\0') {
        iStack_17 = 0;
        auStack_8._4_4_ = 0;
        iStack_18 = 0;
        uStack_19 = 0;
        pOStack_20 = (Object *)0x0;
        if (pOVar12 == (Object *)0x0) {
          byteArray = (Byte__Array *)0x0;
        }
        else {
          byteArray = (Byte__Array *)func_?(pOVar12,TypeInfo__System__Byte);
          if (byteArray == (Byte__Array *)0x0) {
            func_?(pOVar12,pBVar16);
            pOVar13 = extraout_ECX;
            pPVar14 = extraout_EDX;
            break;
          }
        }
        MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_7
                  ((InteractionData *)(auStack_8 + 4),byteArray,(MethodInfo *)0x0);
        func_?(0x3e,this,auStack_8._4_4_,iStack_18,uStack_19,pOStack_20,iStack_17,p);
      }
      else {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Unknown_package_type,(MethodInfo *)0x0);
      }
    }
    func_?(pOVar13,pPVar14);
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void RemovePreviewBox() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_RemovePreviewBox
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pGVar1 = (this->fields).gameObject;
    if (pGVar1 == (GameObject *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (PreviewBox *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_1
                        (pGVar1,
                         PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__
                        );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (this_00 == (PreviewBox *)0x0) goto code_?;
      PreviewBox::PreviewBox_DestroyBox(this_00,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void RemoveSelectionBox() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_RemoveSelectionBox
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pGVar1 = (this->fields).gameObject;
    if (pGVar1 == (GameObject *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (SelectionBox *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_1
                        (pGVar1,
                         SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__
                        );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (this_00 == (SelectionBox *)0x0) goto code_?;
      SelectionBox::SelectionBox_FadeOutDestroy(this_00,0.8,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void ResetRotation() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ResetRotation
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RotationChangedEventArgs);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)
           (*(code *)(this->klass->vtable).get_WorldPivot.method)
                     (&uStack_2,this,(this->klass->vtable).get_InteractionFlags.methodPtr);
  uStack_3 = *puVar1;
  fStack_4 = *(float *)(puVar1 + 1);
  pTVar5 = (this->fields).transform;
  if (pTVar5 != (Transform *)0x0) {
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffc0,pTVar5,(MethodInfo *)0x0);
    pTVar5 = (this->fields).transform;
    fVar7 = pQVar6->x;
    fVar8 = pQVar6->y;
    fVar9 = pQVar6->z;
    puVar10 = (undefined *)pQVar6->w;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    if (pTVar5 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar5,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                 (MethodInfo *)0x0);
      puVar1 = (undefined8 *)
               (*(code *)(this->klass->vtable).get_WorldPivot.method)
                         (&stack0xffffffd0,this,(this->klass->vtable).get_InteractionFlags.methodPtr
                         );
      uVar11 = *puVar1;
      fStack_12 = *(float *)(puVar1 + 1);
      uStack_2._0_4_ = (float)uVar11;
      fVar13 = (float)uStack_3 - (float)uStack_2;
      uStack_2._4_4_ = (float)((ulonglong)uVar11 >> 0x20);
      fStack_14 = uStack_3._4_4_ - uStack_2._4_4_;
      fStack_15 = fStack_4 - fStack_12;
      pTVar5 = (this->fields).transform;
      uStack_2 = uVar11;
      if (pTVar5 != (Transform *)0x0) {
        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffd0,pTVar5,(MethodInfo *)0x0);
        pTVar5 = (this->fields).transform;
        uVar17 = pVVar16->x;
        uVar18 = pVVar16->y;
        fVar13 = fVar13 + (float)uVar17;
        fStack_12 = fStack_15 + pVVar16->z;
        uStack_2 = CONCAT44((float)uVar18 + fStack_14,fVar13);
        if (pTVar5 != (Transform *)0x0) {
          value.y = (float)uVar18 + fStack_14;
          value.x = fVar13;
          value.z = fStack_12;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar5,value,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            puVar10 = &UNK_?;
            func_?();
            cRam_? = '\x01';
          }
          pQVar19 = TypeInfo__UnityEngine__Quaternion->static_fields;
          if ((fVar8 * (pQVar19->identityQuaternion).y + fVar7 * (pQVar19->identityQuaternion).x +
               fVar9 * (pQVar19->identityQuaternion).z +
               (float)puVar10 * (pQVar19->identityQuaternion).w <= _UNK_?) &&
             ((this->fields).RotationChanged !=
              (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0)) {
            pUVar20 = (this->fields).RotationChanged;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pQVar19 = TypeInfo__UnityEngine__Quaternion->static_fields;
            fVar7 = (pQVar19->identityQuaternion).x;
            fVar8 = (pQVar19->identityQuaternion).y;
            fVar9 = (pQVar19->identityQuaternion).z;
            puVar10 = &UNK_?;
            this_00 = (RotationChangedEventArgs *)func_?();
            newRotation.y = fVar8;
            newRotation.x = fVar7;
            newRotation.z = fVar9;
            newRotation.w = (float)puVar10;
            RotationChangedEventArgs::RotationChangedEventArgs__ctor
                      (this_00,newRotation,(MethodInfo *)0x0);
            (*(pUVar20->fields)._._.invoke_impl)();
          }
          return;
        }
      }
    }
  }
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void RotateAround(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_RotateAround
               (MVWorldObjectClient *this,Vector3 pivot,Vector3 axis,float angle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RotationChangedEventArgs);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).transform;
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&fStack_3,pTVar1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).transform;
    fStack_3 = pQVar2->x;
    puStack_4 = (undefined *)pQVar2->y;
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                (pTVar1,pivot,axis,angle,(MethodInfo *)0x0);
      pTVar1 = (this->fields).transform;
      if (pTVar1 != (Transform *)0x0) {
        pQVar2 = &QStack_5;
        pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           (pQVar2,pTVar1,(MethodInfo *)0x0);
        if (((float)puStack_4 * pQVar6->y + fStack_3 * pQVar6->x + (float)pQVar2 * pQVar6->z +
             (float)pTVar1 * pQVar6->w <= _UNK_?) &&
           ((this->fields).RotationChanged !=
            (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0)) {
          fStack_3 = pQVar6->x;
          puStack_4 = (undefined *)pQVar6->y;
          fVar7 = pQVar6->z;
          fVar8 = pQVar6->w;
          pUVar9 = (this->fields).RotationChanged;
          this_00 = (RotationChangedEventArgs *)func_?();
          fVar10 = (float)puStack_4;
          fVar11 = fStack_3;
          uVar12 = CONCAT44(fVar10,fVar11);
          this = (MVWorldObjectClient *)fVar8;
          fVar13 = fVar7;
          newRotation = (Quaternion)CONCAT88(uVar14,uVar12);
          RotationChangedEventArgs::RotationChangedEventArgs__ctor
                    (this_00,newRotation,(MethodInfo *)0x0);
          (*(pUVar9->fields)._._.invoke_impl)();
        }
        return;
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void RotateAroundLocal(Vector3, RotationMode, Single) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_RotateAroundLocal
               (MVWorldObjectClient *this,Vector3 pivot,RotationMode__Enum rotationMode,float angle,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RotationChangedEventArgs);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).transform;
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffc4,pTVar1,(MethodInfo *)0x0);
    fVar3 = pQVar2->w;
    if (rotationMode == RotationMode__Enum_X) {
      pTVar1 = (this->fields).transform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         ((Vector3 *)(auStack_5 + 4),pTVar1,(MethodInfo *)0x0);
    }
    else if ((rotationMode == RotationMode__Enum_Y) || (rotationMode != RotationMode__Enum_Z)) {
      pTVar1 = (this->fields).transform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         ((Vector3 *)&puStack_6,pTVar1,(MethodInfo *)0x0);
    }
    else {
      pTVar1 = (this->fields).transform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
    }
    pTVar1 = (this->fields).transform;
    fVar7 = pVVar4->z;
    if (pTVar1 != (Transform *)0x0) {
      fVar8 = 0.0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                (pTVar1,pivot,*pVVar4,angle,(MethodInfo *)0x0);
      pTVar1 = (this->fields).transform;
      if (pTVar1 != (Transform *)0x0) {
        pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           ((Quaternion *)auStack_5,pTVar1,(MethodInfo *)0x0);
        if ((angle * pQVar2->y + fVar7 * pQVar2->x + fVar8 * pQVar2->z + fVar3 * pQVar2->w <=
             _UNK_?) &&
           ((this->fields).RotationChanged !=
            (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0)) {
          fVar3 = pQVar2->x;
          fVar7 = pQVar2->y;
          fVar8 = pQVar2->z;
          fVar9 = pQVar2->w;
          pUVar10 = (this->fields).RotationChanged;
          this_00 = (RotationChangedEventArgs *)func_?();
          newRotation.y = fVar7;
          newRotation.x = fVar3;
          newRotation.z = fVar8;
          newRotation.w = fVar9;
          RotationChangedEventArgs::RotationChangedEventArgs__ctor
                    (this_00,newRotation,(MethodInfo *)0x0);
          (*(pUVar10->fields)._._.invoke_impl)();
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void RuntimeDataUpdate(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_RuntimeDataUpdate
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *dataDelta,
               MethodInfo *method)

{
  this_00 = (this->fields).runtimeDataVariables;
  if (this_00 != (MVRuntimeDataVariables *)0x0) {
    MVRuntimeDataVariables::MVRuntimeDataVariables_Receive(this_00,dataDelta,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).OnRunTimeDataUpdate.method)
              (this,(this->klass->vtable).OnEnterObject.methodPtr);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Select() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_Select
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if ((this->fields).selected != 1) {
    pMVar1 = this->klass;
    (this->fields).selected = 1;
    (*(code *)(pMVar1->vtable).OnSelectedChanged.method)
              (this,1,(pMVar1->vtable).ValidateObjectLinkTarget.methodPtr);
  }
  return;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_Select_1
               (MVWorldObjectClient *this,Color color,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).AddSelectionBox.method)
            (this,(this->klass->vtable).RemoveSelectionBox.methodPtr);
  if ((this->fields).selected != 1) {
    pMVar1 = this->klass;
    (this->fields).selected = 1;
    (*(code *)(pMVar1->vtable).OnSelectedChanged.method)
              (this,1,(pMVar1->vtable).ValidateObjectLinkTarget.methodPtr);
  }
  return;
}


/* Void SendPackage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_SendPackage
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *package,
               MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  pMVar2 = (MVWorldObjectClient *)(this->fields)._.id;
  if (pMVar1 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    this = pMVar2;
    value = (Object *)func_?(TypeInfo__System__Int32,&this);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x16,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x53,(Object *)package,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar3 = (pMVar1->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar4 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar5._0_1_ = (pSVar4->SendReliable).Encrypt;
      uVar5._1_1_ = (pSVar4->SendReliable).Channel;
      uVar5._2_2_ = *(undefined2 *)&(pSVar4->SendReliable).field_0x6;
      if (pPVar3 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar3->klass->vtable).SendOperation.method)
                  (pPVar3,0x1b,this_00,(pSVar4->SendReliable).DeliveryMode,uVar5,
                   pPVar3->klass[1]._0.image);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetName() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_SetName
               (MVWorldObjectClient *this,MethodInfo *method)

{
  this_00 = (this->fields).gameObject;
  value = (String *)
          (*(code *)(this->klass->vtable).ToString.method)
                    (this,(this->klass->vtable).get_Position.methodPtr);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetNetworkObject(Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
               (MVWorldObjectClient *this,bool local,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeRef__MVCubeModelFineGrainedTerrain);
    func_?(&TypeRef__MVCubeModelPrototypeTerrain);
    func_?(&TypeInfo__MVNetworkReporter);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_Problem__network_reporter_is_add);
    cRam_? = '\x01';
  }
  pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  pIVar2 = TypeRef__MVCubeModelFineGrainedTerrain;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
  bVar4 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
          UnsafeUtility_EnumEquals
                    ((Int32Enum__Enum)pTVar1,(Int32Enum__Enum)pTVar3,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    pIVar2 = TypeRef__MVCubeModelPrototypeTerrain;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
    bVar4 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_EnumEquals
                      ((Int32Enum__Enum)pTVar1,(Int32Enum__Enum)pTVar3,(MethodInfo *)0x0);
    if ((bVar4 == 0) && (local != 0)) {
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pTVar6 = (pMVar5->fields).transformNetworkManager,
         pTVar6 != (TransformNetworkManager *)0x0)) {
        pMVar7 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                           (pTVar6,(this->fields)._.id,(MethodInfo *)0x0);
        if (pMVar7 != (MVNetworkObject *)0x0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Problem__network_reporter_is_add,(MethodInfo *)0x0);
          return;
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar5 != (MVNetworkGame *)0x0) {
          woID = (this->fields)._.id;
          networkReporter = (MVNetworkReporter *)func_?();
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          *(undefined4 *)&(networkReporter->fields).lastUpdateTimestamp = 0xffffffff;
          *(undefined4 *)((int)&(networkReporter->fields).lastUpdateTimestamp + 4) = 0xffffffff;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar9._0_4_ = (pVVar8->zeroVector).x;
          uVar9._4_4_ = (pVVar8->zeroVector).y;
          fVar10 = (pVVar8->zeroVector).z;
          pBVar11 = (Byte__Array *)func_?();
          func_?();
          fStack_12 = (float)uVar9;
          fStack_13 = (float)((ulonglong)uVar9 >> 0x20);
          (networkReporter->fields).prevSendTransformData.position.x = fStack_12;
          (networkReporter->fields).prevSendTransformData.position.y = fStack_13;
          (networkReporter->fields).prevSendTransformData.position.z = fVar10;
          (networkReporter->fields).prevSendTransformData.rotation = pBVar11;
          func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)networkReporter,ExceptionArgument__Enum_obj,
                     (MethodInfo *)&(networkReporter->fields).prevSendTransformData.rotation);
          (networkReporter->fields)._.worldObject = this;
          pTVar6 = (TransformNetworkManager *)&UNK_?;
          func_?();
          if (pTVar6 != (TransformNetworkManager *)0x0) {
            TransformNetworkManager::TransformNetworkManager_AddReporter
                      (pTVar6,woID,networkReporter,(MethodInfo *)0x0);
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar5 != (MVNetworkGame *)0x0) &&
               (this_00 = (pMVar5->fields).runtimeVariableNetworkManager,
               this_00 != (RuntimeVariableNetworkManager *)0x0)) {
              RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_AddRuntimeDataVariables
                        (this_00,(this->fields)._.id,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      func_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  return;
}


/* Void SetWorldObjectToPurchased() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_SetWorldObjectToPurchased
               (MVWorldObjectClient *this,MethodInfo *method)

{
  uVar1 = *(undefined4 *)((int)&(this->fields).interactionFlags + 4);
  piVar2 = &(this->fields).interactionFlags;
  *(uint *)piVar2 = (uint)*piVar2 & 0xfffdffff;
  *(undefined4 *)((int)&(this->fields).interactionFlags + 4) = uVar1;
  pMVar3 = this->klass;
  (this->fields)._.previewOwnerProfileId = 0;
  (*(code *)(pMVar3->vtable).RemovePreviewBox.method)
            (this,(pMVar3->vtable).HideConnectors.methodPtr);
  return;
}


/* Void SetupBusinessLogic() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_SetupBusinessLogic
               (MVWorldObjectClient *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).itemBusinessLogic, this_00 != (MVItemBusinessLogic *)0x0)) {
    bVar2 = MVItemBusinessLogic::MVItemBusinessLogic_CanAddItemToInventory
                      (this_00,(this->fields)._.itemId,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      uVar3 = *(undefined4 *)((int)&(this->fields).interactionFlags + 4);
      piVar4 = &(this->fields).interactionFlags;
      *(uint *)piVar4 = (uint)*piVar4 | 0x4000;
      *(undefined4 *)((int)&(this->fields).interactionFlags + 4) = uVar3;
    }
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupTierInventory() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_SetupTierInventory
               (MVWorldObjectClient *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).HideConnectors.method)
            (this,(this->klass->vtable).ShowConnectors.methodPtr);
  return;
}


/* Void ShowConnectors() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ShowConnectors
               (MVWorldObjectClient *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_HasInputConnector.method)
                    (this,(this->klass->vtable).get_HasObjectConnector.methodPtr);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields).inputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,1,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasOutputConnector.method)(this);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields).outputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,1,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasObjectConnector.method)
                    (this,(this->klass->vtable).OnInputStateChanged.methodPtr);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields).objectConnectorObject;
    if (pGVar2 == (GameObject *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,1,(MethodInfo *)0x0);
  }
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ToString
                   (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral__group_id_);
    func_?(&StringLiteral__id_);
    func_?(&StringLiteral__item_id_);
    cRam_? = '\x01';
  }
  values = (String__Array *)func_?(TypeInfo__System__String,7);
  pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Type *)0x0) {
    pSVar2 = (String *)
             (*(code *)(pTVar1->klass->vtable).ToString.method)
                       (pTVar1,(pTVar1->klass->vtable).GetCustomAttributes.methodPtr);
    if (values != (String__Array *)0x0) {
      if (values->max_length != 0) {
        values->vector[0] = pSVar2;
        func_?(values->vector,pSVar2);
        pSVar2 = StringLiteral__id_;
        if (1 < values->max_length) {
          values->vector[1] = StringLiteral__id_;
          func_?(values->vector + 1,pSVar2);
          pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)&this->fields,(MethodInfo *)0x0);
          if (2 < values->max_length) {
            values->vector[2] = pSVar2;
            func_?(values->vector + 2,pSVar2);
            pSVar2 = StringLiteral__group_id_;
            if (3 < values->max_length) {
              values->vector[3] = StringLiteral__group_id_;
              func_?(values->vector + 3,pSVar2);
              pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                                 ((Int32 *)&(this->fields)._.groupId,(MethodInfo *)0x0);
              if (4 < values->max_length) {
                values->vector[4] = pSVar2;
                func_?(values->vector + 4,pSVar2);
                pSVar2 = StringLiteral__item_id_;
                if (5 < values->max_length) {
                  values->vector[5] = StringLiteral__item_id_;
                  func_?(values->vector + 5,pSVar2);
                  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                                     ((Int32 *)&(this->fields)._.itemId,(MethodInfo *)0x0);
                  if (6 < values->max_length) {
                    values->vector[6] = pSVar2;
                    func_?(values->vector + 6,pSVar2);
                    pSVar2 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0)
                    ;
                    return pSVar2;
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* Void TraverseRecursiveTail(MVWorldObjectClient+CallBackDelegate) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_TraverseRecursiveTail
               (MVWorldObjectClient *this,MVWorldObjectClient_CallBackDelegate *callBack,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (callBack != (MVWorldObjectClient_CallBackDelegate *)0x0) {
    puStack_1 = (callBack->fields)._._.method;
    pMStack_2 = this;
    pvStack_3 = (callBack->fields)._._.method_code;
    (*(callBack->fields)._._.invoke_impl)();
    return;
  }
  uVar4 = func_?(&pvStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UnSetupTierInventory() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_UnSetupTierInventory
               (MVWorldObjectClient *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).ShowConnectors.method)
            (this,(this->klass->vtable).Delete.methodPtr);
  return;
}


/* MVWorldObjectClient() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVWorldObjectClient);
    cRam_? = '\x01';
  }
  TypeInfo__MVWorldObjectClient->static_fields->woShadowCastersCount = 0;
  TypeInfo__MVWorldObjectClient->static_fields->woMaxShadowCasters = 0x14;
  return;
}


/* MVWorldObjectClient(Dictionary`2[System.Object,System.Object], GameObject,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient__ctor
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *data,
               GameObject *prefabObject,Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                   );
    cRam_? = '\x01';
  }
  (this->fields).previewLayerMask = 1;
  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject__ctor
            ((MVWorldObject *)this,(MethodInfo *)0x0);
  pMVar1 = MVWorldObjectClient_GetTransformData
                     ((MVWorldObjectClient_TransformData *)&stack0xffffffc4,this,data,
                      (MethodInfo *)0x0);
  position = pMVar1->position;
  fVar2 = (pMVar1->rotation).x;
  uVar3._0_4_ = (pMVar1->rotation).y;
  uVar3._4_4_ = (pMVar1->rotation).z;
  fVar4 = (pMVar1->rotation).w;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)prefabObject,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Prefab_object_is_null_,(MethodInfo *)0x0);
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  rotation.y = (float)(int)uVar3;
  rotation.x = fVar2;
  rotation.z = (float)(int)((ulonglong)uVar3 >> 0x20);
  rotation.w = fVar4;
  pGVar6 = (GameObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                     ((Object *)prefabObject,position,rotation,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                     );
  if (pGVar6 != (GameObject *)0x0) {
    iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)pGVar6,(MethodInfo *)0x0);
    (this->fields).goId = iVar7;
    (this->fields).gameObject = pGVar6;
    func_?();
    pGVar6 = (this->fields).gameObject;
    if (pGVar6 != (GameObject *)0x0) {
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar6,(MethodInfo *)0x0);
      (this->fields).transform = pTVar8;
      func_?();
      pGVar6 = (this->fields).gameObject;
      if (pGVar6 != (GameObject *)0x0) {
        pCVar9 = (Collider *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (pGVar6,
                            UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                           );
        (this->fields).collider = pCVar9;
        func_?();
        MVWorldObjectClient_CreateWorldObject(this,data,worldObjects,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVWorldObjectClient(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient__ctor_1
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *prefabObject,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  (this->fields).previewLayerMask = 1;
  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject__ctor
            ((MVWorldObject *)this,(MethodInfo *)0x0);
  pMVar1 = MVWorldObjectClient_GetTransformData
                     ((MVWorldObjectClient_TransformData *)&stack0xffffffc4,this,data,
                      (MethodInfo *)0x0);
  position = pMVar1->position;
  uVar2 = (pMVar1->rotation).z;
  uVar3 = (pMVar1->rotation).x;
  uVar4 = (pMVar1->rotation).y;
  rotation.y = (float)uVar4;
  rotation.x = (float)uVar3;
  fVar5 = (pMVar1->rotation).w;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)prefabObject,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar6 != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Prefab_object_is_null_,(MethodInfo *)0x0);
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  rotation.z = (float)uVar2;
  rotation.w = fVar5;
  pOVar7 = (ObjectPrefab *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                     ((Object *)prefabObject,position,rotation,
                      ObjectPrefab_MethodInfo__UnityEngine__Object__Instantiate<ObjectPrefab>_ObjectPrefab__UnityEngine__Vector3__UnityEngine__Quaternion_
                     );
  if (pOVar7 != (ObjectPrefab *)0x0) {
    pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pOVar7,(MethodInfo *)0x0);
    if (pGVar8 != (GameObject *)0x0) {
      iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                        ((Object_1 *)pGVar8,(MethodInfo *)0x0);
      (this->fields).goId = iVar9;
      (this->fields).component = pOVar7;
      func_?();
      pOVar7 = (this->fields).component;
      if (pOVar7 != (ObjectPrefab *)0x0) {
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pOVar7,(MethodInfo *)0x0);
        (this->fields).gameObject = pGVar8;
        func_?();
        pOVar7 = (this->fields).component;
        if (pOVar7 != (ObjectPrefab *)0x0) {
          (this->fields).collider = (pOVar7->fields).mainCollider;
          func_?();
          pGVar8 = (this->fields).gameObject;
          if (pGVar8 != (GameObject *)0x0) {
            data_00 = (Dictionary_2_System_Object_System_Object_ *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar8,(MethodInfo *)0x0);
            (this->fields).transform = (Transform *)data_00;
            func_?();
            MVWorldObjectClient_CreateWorldObject(this,data_00,worldObjects,(MethodInfo *)0x0);
            return;
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


/* MVWorldObjectClient(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient__ctor_2
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    cRam_? = '\x01';
  }
  (this->fields).previewLayerMask = 1;
  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject__ctor
            ((MVWorldObject *)this,(MethodInfo *)0x0);
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar1,(MethodInfo *)0x0);
  (this->fields).gameObject = pGVar1;
  func_?(&(this->fields).gameObject,pGVar1);
  pGVar1 = (this->fields).gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    (this->fields).goId = iVar2;
    pGVar1 = (this->fields).gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0);
      (this->fields).transform = pTVar3;
      func_?();
      pMVar4 = MVWorldObjectClient_GetTransformData
                         ((MVWorldObjectClient_TransformData *)&stack0xffffffa8,this,data,
                          (MethodInfo *)0x0);
      pTVar3 = (this->fields).transform;
      fVar5 = (pMVar4->rotation).w;
      uVar6 = (pMVar4->rotation).z;
      uVar7 = (pMVar4->rotation).x;
      uVar8 = (pMVar4->rotation).y;
      value.y = (float)uVar8;
      value.x = (float)uVar7;
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar3,pMVar4->position,(MethodInfo *)0x0);
        pTVar3 = (this->fields).transform;
        if (pTVar3 != (Transform *)0x0) {
          value.z = (float)uVar6;
          value.w = fVar5;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar3,value,(MethodInfo *)0x0);
          pGVar1 = (this->fields).gameObject;
          if (pGVar1 != (GameObject *)0x0) {
            pCVar9 = (Collider *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (pGVar1,
                                 UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                                );
            (this->fields).collider = pCVar9;
            func_?();
            MVWorldObjectClient_CreateWorldObject(this,data,worldObjects,(MethodInfo *)0x0);
            return;
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


/* Vector3 get_EulerAngles() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_EulerAngles
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* InteractionDataHandlerBase get_InteractionDataHandlerBase() */

InteractionDataHandlerBase *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
          (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    InteractionDataHandlerBase_MethodInfo__UnityEngine__GameObject__GetComponent<InteractionDataHandlerBase>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).interactionDataHandlerBase;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pIVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    this_00 = (this->fields).gameObject;
    if (this_00 == (GameObject *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      pIVar1 = (InteractionDataHandlerBase *)(*pcVar3)();
      return pIVar1;
    }
    pIVar1 = (InteractionDataHandlerBase *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_00,
                        InteractionDataHandlerBase_MethodInfo__UnityEngine__GameObject__GetComponent<InteractionDataHandlerBase>__
                       );
    (this->fields).interactionDataHandlerBase = pIVar1;
    func_?(&(this->fields).interactionDataHandlerBase,pIVar1);
  }
  return (this->fields).interactionDataHandlerBase;
}


/* InteractionFlags get_InteractionFlags() */

InteractionFlags__Enum
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
          (MVWorldObjectClient *this,MethodInfo *method)

{
  return (InteractionFlags__Enum)(this->fields).interactionFlags;
}


/* Vector3 get_ObjectConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_ObjectConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = -1.0;
  return __return_storage_ptr__;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_OutputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 1.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Vector3 get_Position() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_Position
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_Rotation
          (Quaternion *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                       (&QStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pQVar1->y;
    fVar4 = pQVar1->z;
    fVar5 = pQVar1->w;
    __return_storage_ptr__->x = pQVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    __return_storage_ptr__->w = fVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pQVar1 = (Quaternion *)(*pcVar6)();
  return pQVar1;
}


/* Vector3 get_Scale() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_Scale
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Quaternion get_SyncRot() */

Quaternion *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
          (Quaternion *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  this_00 = (this->fields).gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffec,this_01,(MethodInfo *)0x0);
      fVar2 = pQVar1->y;
      fVar3 = pQVar1->z;
      fVar4 = pQVar1->w;
      __return_storage_ptr__->x = pQVar1->x;
      __return_storage_ptr__->y = fVar2;
      __return_storage_ptr__->z = fVar3;
      __return_storage_ptr__->w = fVar4;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pQVar1 = (Quaternion *)(*pcVar5)();
  return pQVar1;
}


/* Boolean get_Visible() */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_Visible
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameObject;
  if (this_00 != (GameObject *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                       (this_00,
                        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                       );
    uVar2 = 0;
    if (pOVar1 != (Object__Array *)0x0) {
      ppOVar3 = pOVar1->vector;
      while( true ) {
        if ((int)pOVar1->max_length <= (int)uVar2) {
          return 0;
        }
        if (pOVar1->max_length <= uVar2) break;
        if ((Renderer *)*ppOVar3 == (Renderer *)0x0) goto code_?;
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                          ((Renderer *)*ppOVar3,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        ppOVar3 = ppOVar3 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Vector3 get_WorldEulerAngles() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_WorldEulerAngles
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* HashSet`1[System.Int32] get_WorldIDsRecursive() */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
          (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVWorldObjectClient__CallBackDelegate);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&
                    MethodInfo__MVWorldObjectClient____c__DisplayClass51_0___get_WorldIDsRecursive_b__0_MVWorldObjectClient_
                   );
    func_?(&TypeInfo__MVWorldObjectClient____c__DisplayClass51_0);
    cRam_? = '\x01';
  }
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__MVWorldObjectClient____c__DisplayClass51_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
  pHVar1 = (HashSet_1_System_Int32_ *)
           func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  if (this_00 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    (this_00->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)pHVar1;
    func_?(&this_00->fields);
    this_01 = (UnityAction_1_System_Object_ *)
              func_?(TypeInfo__MVWorldObjectClient__CallBackDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this_00,
               MethodInfo__MVWorldObjectClient____c__DisplayClass51_0___get_WorldIDsRecursive_b__0_MVWorldObjectClient_
               ,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).TraverseRecursiveTail.method)
              (this,this_01,(this->klass->vtable).CompareWithKoGaMaPackage.methodPtr);
    return (HashSet_1_System_Int32_ *)(this_00->fields)._._defaultValue_k__BackingField;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pHVar1 = (HashSet_1_System_Int32_ *)(*pcVar2)();
  return pHVar1;
}


/* Vector3 get_WorldPivot() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_WorldPivot
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  transform = (this->fields).transform;
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pVVar1 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter_1
                     (&VStack_2,transform,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Void set_DocumentationType(MVWorldObjectDocumentationType) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_DocumentationType
               (MVWorldObjectClient *this,MVWorldObjectDocumentationType__Enum value,
               MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotImplementedException);
  this_00 = (NotImplementedException *)func_?(uVar1);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__MVWorldObjectClient__set_DocumentationType_MVWorldObjectDocumentationType_
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_EulerAngles(Vector3) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_EulerAngles
               (MVWorldObjectClient *this,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RotationChangedEventArgs);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).transform;
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
              (pTVar1,value,(MethodInfo *)0x0);
    if ((this->fields).RotationChanged !=
        (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
      pTVar1 = (this->fields).transform;
      pUVar2 = (this->fields).RotationChanged;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffec,pTVar1,(MethodInfo *)0x0);
      pMVar4 = (MonitorData *)pQVar3->y;
      pUVar5 = (UxmlObjectListAttributeDescription_1_System_Object___Class *)&UNK_?;
      this_00 = (List_1_System_Object_ *)func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        pLVar6 = (List_1_System_Object_ *)0x0;
        pMVar4 = (MonitorData *)&UNK_?;
        pLVar7 = this_00;
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
        UxmlObjectListAttributeDescription`1[System::Object]::
        UxmlObjectListAttributeDescription_1_System_Object___ctor
                  ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_00,(MethodInfo *)0x0)
        ;
      }
      else {
        pLVar7 = (List_1_System_Object_ *)&UNK_?;
        pLVar6 = this_00;
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
        UxmlObjectListAttributeDescription`1[System::Object]::
        UxmlObjectListAttributeDescription_1_System_Object___ctor
                  ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_00,(MethodInfo *)0x0)
        ;
      }
      ((UxmlObjectListAttributeDescription_1_System_Object_ *)(this_00 + 1))->klass = pUVar5;
      ((UxmlObjectListAttributeDescription_1_System_Object_ *)(this_00 + 1))->monitor = pMVar4;
      (((UxmlObjectListAttributeDescription_1_System_Object_ *)(this_00 + 1))->fields)._.
      _defaultValue_k__BackingField = pLVar7;
      this_00[1].fields._size = (int32_t)pLVar6;
      (*(pUVar2->fields)._._.invoke_impl)();
    }
    return;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void set_InteractionFlags(InteractionFlags) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
               (MVWorldObjectClient *this,InteractionFlags__Enum value,MethodInfo *method)

{
  *(InteractionFlags__Enum *)&(this->fields).interactionFlags = value;
  *(MethodInfo **)((int)&(this->fields).interactionFlags + 4) = method;
  return;
}


/* Void set_Position(Vector3) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_Position
               (MVWorldObjectClient *this,Vector3 value,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (this_00,value,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).PositionChangedNotify.method)
              (this,(this->klass->vtable).get_WorldPivot.methodPtr);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_Rotation(Quaternion) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_Rotation
               (MVWorldObjectClient *this,Quaternion value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RotationChangedEventArgs);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).transform;
  if (pTVar1 != (Transform *)0x0) {
    value_00.y = value.y;
    value_00.x = value.x;
    value_00.z = value.z;
    value_00.w = value.w;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar1,value_00,(MethodInfo *)0x0);
    if ((this->fields).RotationChanged !=
        (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
      pTVar1 = (this->fields).transform;
      pUVar2 = (this->fields).RotationChanged;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         (&value,pTVar1,(MethodInfo *)0x0);
      value.x = pQVar3->x;
      value.y = pQVar3->y;
      value.z = pQVar3->z;
      value.w = pQVar3->w;
      this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      if (cRam_? == '\0') {
        value.z = (float)&TypeInfo__System__EventArgs;
        value.y = (float)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
        value.z = (float)TypeInfo__System__EventArgs;
        value.y = (float)&UNK_?;
        func_?();
        value.y = 0.0;
        value.x = (float)this_00;
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
        UxmlObjectListAttributeDescription`1[System::Object]::
        UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
      }
      else {
        value.z = 0.0;
        value.x = (float)&UNK_?;
        value.y = (float)this_00;
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
        UxmlObjectListAttributeDescription`1[System::Object]::
        UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
      }
      this_00[2].klass = (UxmlObjectListAttributeDescription_1_System_Object___Class *)value.x;
      this_00[2].monitor = (MonitorData *)value.y;
      this_00[2].fields._._defaultValue_k__BackingField = (List_1_System_Object_ *)value.z;
      this_00[3].klass = (UxmlObjectListAttributeDescription_1_System_Object___Class *)value.w;
      value.z = (float)this;
      value.y = (float)(pUVar2->fields)._._.method_code;
      value.x = (float)&UNK_?;
      value.w = (float)this_00;
      (*(pUVar2->fields)._._.invoke_impl)();
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_RunTimeData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_RunTimeData
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                     ((Object *)value,(MethodInfo *)0x0);
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (((pDVar1->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      func_?(pDVar1,
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->fields)._.runTimeData = pDVar1;
  func_?(&(this->fields)._.runTimeData,pDVar1);
  return;
}


/* Void set_Scale(Vector3) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_Scale
               (MVWorldObjectClient *this,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ScaleChangedEventArgs);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_00,value,(MethodInfo *)0x0);
    if ((this->fields).ScaleChanged !=
        (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
      pUVar1 = (this->fields).ScaleChanged;
      this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
        UxmlObjectListAttributeDescription`1[System::Object]::
        UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
      }
      else {
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
        UxmlObjectListAttributeDescription`1[System::Object]::
        UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
      }
      *(longlong *)&this_01->fields = value._0_8_;
      this_01[1].monitor = (MonitorData *)value.z;
      (*(pUVar1->fields)._._.invoke_impl)((pUVar1->fields)._._.method_code);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Selected(Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_Selected
               (MVWorldObjectClient *this,bool value,MethodInfo *method)

{
  if ((this->fields).selected != value) {
    pMVar1 = this->klass;
    (this->fields).selected = value;
    (*(code *)(pMVar1->vtable).OnSelectedChanged.method)
              (this,_value,(pMVar1->vtable).ValidateObjectLinkTarget.methodPtr);
  }
  return;
}


/* Void set_SyncPos(Vector3) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_SyncPos
               (MVWorldObjectClient *this,Vector3 value,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).set_WorldPosition.method)
            (this,value._0_8_,value.z,(this->klass->vtable).get_WorldRotation_1.methodPtr);
  return;
}


/* Void set_SyncRot(Quaternion) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
               (MVWorldObjectClient *this,Quaternion value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RotationChangedEventArgs);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (this_00,value,(MethodInfo *)0x0);
    if ((this->fields).RotationChanged !=
        (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
      pUVar1 = (this->fields).RotationChanged;
      this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
        UxmlObjectListAttributeDescription`1[System::Object]::
        UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
      }
      else {
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
        UxmlObjectListAttributeDescription`1[System::Object]::
        UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
      }
      this_01[2].klass = (UxmlObjectListAttributeDescription_1_System_Object___Class *)value.x;
      this_01[2].monitor = (MonitorData *)value.y;
      this_01[2].fields._._defaultValue_k__BackingField = (List_1_System_Object_ *)value.z;
      this_01[3].klass = (UxmlObjectListAttributeDescription_1_System_Object___Class *)value.w;
      (*(pUVar1->fields)._._.invoke_impl)();
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_Visible
               (MVWorldObjectClient *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    func_?(&StringLiteral_MeshRenderer_s__not_found_on_att);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameObject;
  if (this_00 != (GameObject *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                       (this_00,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    if (pOVar1 != (Object__Array *)0x0) {
      if (pOVar1->max_length == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_MeshRenderer_s__not_found_on_att,(MethodInfo *)0x0);
        return;
      }
      uVar2 = 0;
      ppOVar3 = pOVar1->vector;
      while( true ) {
        if ((int)pOVar1->max_length <= (int)uVar2) {
          return;
        }
        if (pOVar1->max_length <= uVar2) break;
        if ((Renderer *)*ppOVar3 == (Renderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppOVar3,value,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        ppOVar3 = ppOVar3 + 1;
      }
      func_?();
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_WorldEulerAngles(Vector3) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_WorldEulerAngles
               (MVWorldObjectClient *this,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RotationChangedEventArgs);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).transform;
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
              (pTVar1,value,(MethodInfo *)0x0);
    if ((this->fields).RotationChanged !=
        (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
      pTVar1 = (this->fields).transform;
      pUVar2 = (this->fields).RotationChanged;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffec,pTVar1,(MethodInfo *)0x0);
      pMVar4 = (MonitorData *)pQVar3->y;
      pUVar5 = (UxmlObjectListAttributeDescription_1_System_Object___Class *)&UNK_?;
      this_00 = (List_1_System_Object_ *)func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        pLVar6 = (List_1_System_Object_ *)0x0;
        pMVar4 = (MonitorData *)&UNK_?;
        pLVar7 = this_00;
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
        UxmlObjectListAttributeDescription`1[System::Object]::
        UxmlObjectListAttributeDescription_1_System_Object___ctor
                  ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_00,(MethodInfo *)0x0)
        ;
      }
      else {
        pLVar7 = (List_1_System_Object_ *)&UNK_?;
        pLVar6 = this_00;
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
        UxmlObjectListAttributeDescription`1[System::Object]::
        UxmlObjectListAttributeDescription_1_System_Object___ctor
                  ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_00,(MethodInfo *)0x0)
        ;
      }
      ((UxmlObjectListAttributeDescription_1_System_Object_ *)(this_00 + 1))->klass = pUVar5;
      ((UxmlObjectListAttributeDescription_1_System_Object_ *)(this_00 + 1))->monitor = pMVar4;
      (((UxmlObjectListAttributeDescription_1_System_Object_ *)(this_00 + 1))->fields)._.
      _defaultValue_k__BackingField = pLVar7;
      this_00[1].fields._size = (int32_t)pLVar6;
      (*(pUVar2->fields)._._.invoke_impl)();
    }
    return;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void set_WorldPosition(Vector3) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_WorldPosition
               (MVWorldObjectClient *this,Vector3 value,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,value,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).PositionChangedNotify.method)
              (this,(this->klass->vtable).get_WorldPivot.methodPtr);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

