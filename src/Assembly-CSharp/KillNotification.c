
/* String GetKillText(Dictionary`2[System.Object,System.Object], Boolean) */

String * Assembly-CSharp.dll::KillNotification::KillNotification_GetKillText
                   (Dictionary_2_System_Object_System_Object_ *data,bool shotSelf,MethodInfo *method
                   )

{
  uStack_1 = in_ECX;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__MV__Common__PlayerKilledByType);
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  uStack_1 = CONCAT13(8,(undefined3)uStack_1);
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_1 + 3);
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
    pPVar3 = extraout_ECX;
  }
  else {
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                           pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_1._0_3_ = CONCAT12(0x13,(undefined2)uStack_1);
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_1 + 2);
    pSVar4 = (String *)
             mscorlib.dll::System::Collections::Generic::CollectionExtensions::
             CollectionExtensions_GetValueOrDefault_5
                       ((IReadOnlyDictionary_2_System_Object_System_Object_ *)data,pOVar2,
                        (Object *)::StringLiteral__,
                        System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object__System__Object_
                       );
    pSVar5 = (String *)0x0;
    if (pSVar4 != (String *)0x0) {
      if (pSVar4->klass == TypeInfo__System__String) {
        pSVar5 = pSVar4;
      }
      pSVar6 = TypeInfo__System__String;
      if (pSVar5 == (String *)0x0) goto code_?;
    }
    if (unaff_EDI.m_Index == 0) goto code_?;
    pPVar3 = TypeInfo__MV__Common__PlayerKilledByType;
    if (*(Il2CppClass **)(*(int *)unaff_EDI.m_Index + 0x20) ==
        (TypeInfo__MV__Common__PlayerKilledByType->_0).element_class) {
      pbVar7 = (byte *)func_?(unaff_EDI.m_Index);
      pSVar5 = KillNotification_GetKillText_1((uint)*pbVar7,shotSelf,pSVar5,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
  pSVar4 = (String *)func_?(unaff_EDI.m_Index,pPVar3);
  pSVar6 = extraout_ECX_00;
code_?:
  func_?(pSVar4,pSVar6);
  pcVar8 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar8)();
  return pSVar5;
}

/* decompilation failed: Low-level Error: Overlapping input varnodes */


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::KillNotification::KillNotification_Initialize
               (KillNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  (this->fields)._.timeSinceStart = 0.0;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    args.m_Index = (int32_t)(pMVar1->fields).playerContainer;
    uStack_2 = 6;
    pOVar3 = (Object *)func_?(TypeInfo__System__Byte,&uStack_2);
    this_01 = data;
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar3
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (((Object__Array *)args.m_Index != (Object__Array *)0x0) && (TVar4.m_Index != 0)) {
        if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) {
code_?:
          func_?(TVar4.m_Index,TypeInfo__System__Int32);
code_?:
          uVar5 = func_?(0);
          func_?(uVar5);
code_?:
          uVar5 = func_?(0);
          func_?(uVar5);
code_?:
          uVar5 = func_?(0);
          func_?(uVar5);
code_?:
          uVar5 = func_?(0);
          func_?(uVar5);
          goto code_?;
        }
        piVar6 = (int32_t *)func_?(TVar4.m_Index);
        pMVar7 = MVPlayerContainer::MVPlayerContainer_get_Item
                            ((MVPlayerContainer *)args.m_Index,*piVar6,(MethodInfo *)0x0);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          args.m_Index = (int32_t)(pMVar1->fields).playerContainer;
          uStack_8 = 7;
          pOVar3 = (Object *)func_?(TypeInfo__System__Byte,&uStack_8);
          TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01
                             ,pOVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if (((Object__Array *)args.m_Index != (Object__Array *)0x0) && (TVar4.m_Index != 0)) {
            if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
                (TypeInfo__System__Int32->_0).element_class) goto code_?;
            piVar6 = (int32_t *)func_?(TVar4.m_Index);
            pMVar9 = MVPlayerContainer::MVPlayerContainer_get_Item
                                ((MVPlayerContainer *)args.m_Index,*piVar6,(MethodInfo *)0x0);
            data = (Dictionary_2_System_Object_System_Object_ *)((uint)data & 0xffffff);
            if ((((pMVar9 != (MVPlayer *)0x0) &&
                 (pUVar10 = (pMVar9->fields)._UserProfileData_k__BackingField,
                 pUVar10 != (UserProfileData *)0x0)) && (pMVar7 != (MVPlayer *)0x0)) &&
               (pUVar11 = (pMVar7->fields)._UserProfileData_k__BackingField,
               pUVar11 != (UserProfileData *)0x0)) {
              bVar12 = mscorlib.dll::System::String::String_op_Equality
                                ((pUVar10->fields).UserName,(pUVar11->fields).UserName,
                                 (MethodInfo *)0x0);
              shotSelf = data._3_1_;
              if (bVar12 != 0) {
                shotSelf = 1;
              }
              method_00 = (MethodInfo *)&UNK_?;
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
                pLVar13 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
                if (pLVar13 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
                  if ((pLVar13->fields)._size < 2) {
                    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__Styles);
                    }
                    pCVar14 = Styles::Styles_GetColor
                                        ((Color *)&ppSStack_15,ColorStyle__Enum_TeamNone,
                                         (MethodInfo *)0x0);
                    fStack_16 = pCVar14->b;
                    fStack_17 = pCVar14->a;
                    pCVar14 = Styles::Styles_GetColor
                                        ((Color *)&ppSStack_15,ColorStyle__Enum_TeamNone,
                                         (MethodInfo *)0x0);
                  }
                  else {
                    data = (Dictionary_2_System_Object_System_Object_ *)
                           (pMVar9->fields)._Team_k__BackingField;
                    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__Styles);
                    }
                    pCVar14 = Styles::Styles_GetTeamColor
                                        ((Color *)&ppSStack_15,(MVTeam__Enum)data,0,
                                         (MethodInfo *)0x0);
                    fStack_16 = pCVar14->b;
                    fStack_17 = pCVar14->a;
                    pCVar14 = Styles::Styles_GetTeamColor
                                        ((Color *)&ppSStack_15,
                                         (pMVar7->fields)._Team_k__BackingField,0,(MethodInfo *)0x0
                                        );
                  }
                  ppSStack_15 = (String **)pCVar14->r;
                  pTVar18 = (this->fields).Label;
                  if (cRam_? == '\0') {
                    func_?();
                    func_?();
                    func_?();
                    func_?();
                    func_?();
                    ppSStack_15 = &::StringLiteral__;
                    func_?();
                    cRam_? = '\x01';
                  }
                  pBVar19 = TypeInfo__System__Byte;
                  this = (KillNotification *)CONCAT13(8,this._0_3_);
                  pOVar3 = (Object *)func_?();
                  args = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                    this_01,pOVar3,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(0x13,data._0_3_);
                  fVar20 = (float)((int)&data + 3);
                  puVar21 = &UNK_?;
                  pBVar22 = TypeInfo__System__Byte;
                  pOVar3 = (Object *)func_?();
                  pSVar23 = (String *)
                            mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                            CollectionExtensions_GetValueOrDefault_5
                                      ((IReadOnlyDictionary_2_System_Object_System_Object_ *)this_01
                                       ,pOVar3,(Object *)::StringLiteral__,
                                       System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object__System__Object_
                                      );
                  pSVar24 = (String *)0x0;
                  if (pSVar23 != (String *)0x0) {
                    if (pSVar23->klass == TypeInfo__System__String) {
                      pSVar24 = pSVar23;
                    }
                    pSVar25 = TypeInfo__System__String;
                    if (pSVar24 == (String *)0x0) goto code_?;
                  }
                  if (args.m_Index != 0) {
                    pPVar26 = TypeInfo__MV__Common__PlayerKilledByType;
                    if (*(Il2CppClass **)(*(int *)args.m_Index + 0x20) ==
                        (TypeInfo__MV__Common__PlayerKilledByType->_0).element_class) {
                      pbVar27 = (byte *)func_?(args.m_Index);
                      pSVar24 = KillNotification_GetKillText_1
                                          ((uint)*pbVar27,shotSelf,pSVar24,(MethodInfo *)0x0);
                      method_01 = TypeInfo__System__Object;
                      args.m_Index = func_?(TypeInfo__System__Object,4);
                      c.g = (float)((int)&this + 3);
                      c.r = (float)pBVar19;
                      c.b = fStack_16;
                      c.a = fStack_17;
                      CVar28 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                         (c,(MethodInfo *)0x0);
                      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__Styles);
                      }
                      pSVar23 = Styles::Styles_ColorToHex
                                          ((Color32)((ulonglong)CVar28 & 0xffffffff),
                                           (MethodInfo *)method_01);
                      if ((Object__Array *)args.m_Index == (Object__Array *)0x0)
                      goto code_?;
                      if (pSVar23 != (String *)0x0) {
                        iVar29 = func_?(pSVar23,(((Object__Array *)args.m_Index)->klass->_0
                                                         ).element_class);
                        if (iVar29 == 0) goto code_?;
                      }
                      if (((Object__Array *)args.m_Index)->max_length != 0) {
                        ((Object__Array *)args.m_Index)->vector[0] = (Object *)pSVar23;
                        func_?(((Object__Array *)args.m_Index)->vector,pSVar23);
                        pUVar10 = (pMVar9->fields)._UserProfileData_k__BackingField;
                        if (pUVar10 == (UserProfileData *)0x0) goto code_?;
                        pSVar23 = (pUVar10->fields).UserName;
                        if (pSVar23 != (String *)0x0) {
                          iVar29 = func_?(pSVar23,(((Object__Array *)args.m_Index)->klass->
                                                           _0).element_class);
                          if (iVar29 == 0) goto code_?;
                        }
                        if (1 < ((Object__Array *)args.m_Index)->max_length) {
                          ((Object__Array *)args.m_Index)->vector[1] = (Object *)pSVar23;
                          func_?(((Object__Array *)args.m_Index)->vector + 1,pSVar23);
                          c_00.g = (float)puVar21;
                          c_00.r = (float)ppSStack_15;
                          c_00.b = (float)pBVar22;
                          c_00.a = fVar20;
                          CVar28 = UnityEngine.CoreModule.dll::UnityEngine::Color32::
                                   Color32_op_Implicit(c_00,(MethodInfo *)0x0);
                          pSVar23 = Styles::Styles_ColorToHex
                                              ((Color32)((ulonglong)CVar28 & 0xffffffff),method_00);
                          if (pSVar23 != (String *)0x0) {
                            iVar29 = func_?(pSVar23,(((Object__Array *)args.m_Index)->klass
                                                             ->_0).element_class);
                            if (iVar29 == 0) goto code_?;
                          }
                          if (2 < ((Object__Array *)args.m_Index)->max_length) {
                            ((Object__Array *)args.m_Index)->vector[2] = (Object *)pSVar23;
                            func_?(((Object__Array *)args.m_Index)->vector + 2,pSVar23);
                            pUVar10 = (pMVar7->fields)._UserProfileData_k__BackingField;
                            if (pUVar10 != (UserProfileData *)0x0) {
                              pSVar23 = (pUVar10->fields).UserName;
                              if (pSVar23 != (String *)0x0) {
                                iVar29 = func_?(pSVar23,(((Object__Array *)args.m_Index)->
                                                                  klass->_0).element_class);
                                if (iVar29 == 0) goto code_?;
                              }
                              if (((Object__Array *)args.m_Index)->max_length < 4)
                              goto code_?;
                              ((Object__Array *)args.m_Index)->vector[3] = (Object *)pSVar23;
                              func_?(((Object__Array *)args.m_Index)->vector + 3,pSVar23);
                              pSVar24 = mscorlib.dll::System::String::String_Format_3
                                                  (pSVar24,(Object__Array *)args.m_Index,
                                                   (MethodInfo *)0x0);
                              if (pTVar18 != (Text *)0x0) {
                                (*(code *)(pTVar18->klass->vtable).set_text.method)
                                          (pTVar18,pSVar24,
                                           (pTVar18->klass->vtable).CalculateLayoutInputHorizontal_1.
                                           methodPtr);
                                return;
                              }
                            }
                            goto code_?;
                          }
                        }
                      }
code_?:
                      func_?();
                      pPVar26 = extraout_ECX;
                    }
                    func_?(args.m_Index,pPVar26);
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
  pSVar23 = (String *)func_?();
  pSVar25 = extraout_ECX_00;
code_?:
  func_?(pSVar23,pSVar25);
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}

