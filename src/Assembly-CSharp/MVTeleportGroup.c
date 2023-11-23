
/* Void AddPreviewBoxesToTeleporters() */

void Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_AddPreviewBoxesToTeleporters
               (MVTeleportGroup *this,MethodInfo *method)

{
  pMVar1 = (this->fields).teleporter1;
  if (pMVar1 != (MVTeleporter *)0x0) {
    (*(code *)(pMVar1->klass->vtable).AddPreviewBox.method)
              (pMVar1,(pMVar1->klass->vtable).AddSelectionBox.methodPtr);
    pMVar1 = (this->fields).teleporter2;
    if (pMVar1 != (MVTeleporter *)0x0) {
      (*(code *)(pMVar1->klass->vtable).AddPreviewBox.method)
                (pMVar1,(pMVar1->klass->vtable).AddSelectionBox.methodPtr);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_Initialize
               (MVTeleportGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    TeleportGroup_MethodInfo__UnityEngine__GameObject__GetComponent<TeleportGroup>__
                   );
    func_?(&StringLiteral_TeleportGroup_does_not_have_any_);
    func_?(&StringLiteral_ChildrenMap);
    func_?(&StringLiteral_Missing_teleporter_2);
    func_?(&StringLiteral_Missing_teleporter_1);
    func_?(&StringLiteral_teleporter2);
    func_?(&StringLiteral_BlueprintData);
    func_?(&StringLiteral_teleporter1);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._._._._.data;
  if ((this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
     (TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)StringLiteral_BlueprintData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar1.m_Index == 0)) {
code_?:
    func_?();
  }
  else {
    if ((*(byte *)(*(int *)TVar1.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar1.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (TVar1.m_Index,(Object *)StringLiteral_ChildrenMap,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    pSVar2 = StringLiteral_teleporter1;
    if (TVar1.m_Index == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_TeleportGroup_does_not_have_any_,(MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                  (pMVar3,(this->fields)._._._._.id,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if ((*(byte *)(*(int *)TVar1.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar1.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)TVar1.m_Index
                       ,(Object *)pSVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar4 == 0) {
code_?:
      pMVar5 = (MVTeleporter *)0x0;
code_?:
      (this->fields).teleporter1 = pMVar5;
      func_?();
      pSVar2 = StringLiteral_teleporter2;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
        func_?(&TypeInfo__System__Int32);
        func_?(&TypeInfo__MVTeleporter);
        cRam_? = '\x01';
      }
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         TVar1.m_Index,(Object *)pSVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar4 == 0) {
code_?:
        pMVar5 = (MVTeleporter *)0x0;
      }
      else {
        MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (TVar1.m_Index,(Object *)pSVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if ((pSVar2 == (String *)0x0) || (TVar1.m_Index == 0)) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar6 = (int32_t *)func_?();
        pMVar5 = (MVTeleporter *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            ((MVWorldObjectClientManager *)pSVar2,*piVar6,(MethodInfo *)0x0);
        if (((pMVar5 == (MVTeleporter *)0x0) ||
            ((pMVar5->klass->_1).naturalAligment < (TypeInfo__MVTeleporter->_1).naturalAligment))
           || ((MVTeleporter__Class *)
               (pMVar5->klass->_1).typeHierarchy[(TypeInfo__MVTeleporter->_1).naturalAligment - 1]
               != TypeInfo__MVTeleporter)) goto code_?;
        if ((MVTeleporter__Class *)
            (pMVar5->klass->_1).typeHierarchy[(TypeInfo__MVTeleporter->_1).naturalAligment - 1] !=
            TypeInfo__MVTeleporter) {
          pMVar5 = (MVTeleporter *)0x0;
        }
      }
      (this->fields).teleporter2 = pMVar5;
      func_?();
      if ((this->fields).teleporter1 == (MVTeleporter *)0x0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Missing_teleporter_1,(MethodInfo *)0x0);
      }
      if ((this->fields).teleporter2 == (MVTeleporter *)0x0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Missing_teleporter_2,(MethodInfo *)0x0);
      }
      if ((this->fields).teleporter1 == (MVTeleporter *)0x0) {
        return;
      }
      if ((this->fields).teleporter2 == (MVTeleporter *)0x0) {
        return;
      }
      (((this->fields).teleporter1)->fields).target = (this->fields).teleporter2;
      func_?();
      pMVar5 = (this->fields).teleporter2;
      if (pMVar5 != (MVTeleporter *)0x0) {
        (pMVar5->fields).target = (this->fields).teleporter1;
        func_?();
        pMVar5 = (this->fields).teleporter1;
        if (pMVar5 != (MVTeleporter *)0x0) {
          uVar7 = *(undefined4 *)((int)&(pMVar5->fields)._._.interactionFlags + 4);
          piVar8 = &(pMVar5->fields)._._.interactionFlags;
          *(uint *)piVar8 = (uint)*piVar8 | 8;
          *(undefined4 *)((int)&(pMVar5->fields)._._.interactionFlags + 4) = uVar7;
          pMVar5 = (this->fields).teleporter2;
          if (pMVar5 != (MVTeleporter *)0x0) {
            uVar7 = *(undefined4 *)((int)&(pMVar5->fields)._._.interactionFlags + 4);
            piVar8 = &(pMVar5->fields)._._.interactionFlags;
            *(uint *)piVar8 = (uint)*piVar8 | 8;
            *(undefined4 *)((int)&(pMVar5->fields)._._.interactionFlags + 4) = uVar7;
            bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                              ((MVWorldObjectClient *)this,InteractionFlags__Enum_IsPreview,
                               (MethodInfo *)0x0);
            if (bVar4 == 0) {
code_?:
              uVar7 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
              piVar8 = &(this->fields)._._._.interactionFlags;
              *(uint *)piVar8 = (uint)*piVar8 | 0x40;
              *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar7;
              this_01 = (this->fields)._._._.gameObject;
              if ((this_01 != (GameObject *)0x0) &&
                 (this_02 = (TeleportGroup *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_GetComponent_1
                                      (this_01,
                                       TeleportGroup_MethodInfo__UnityEngine__GameObject__GetComponent<TeleportGroup>__
                                      ), this_02 != (TeleportGroup *)0x0)) {
                TeleportGroup::TeleportGroup_Initialize(this_02,this,(MethodInfo *)0x0);
                return;
              }
            }
            else {
              pMVar5 = (this->fields).teleporter1;
              if (pMVar5 != (MVTeleporter *)0x0) {
                (*(code *)(pMVar5->klass->vtable).AddPreviewBox.method)();
                pMVar5 = (this->fields).teleporter2;
                if (pMVar5 != (MVTeleporter *)0x0) {
                  (*(code *)(pMVar5->klass->vtable).AddPreviewBox.method)();
                  pMVar5 = (this->fields).teleporter1;
                  if (pMVar5 != (MVTeleporter *)0x0) {
                    (pMVar5->fields)._._._.previewOwnerProfileId =
                         (this->fields)._._._._.previewOwnerProfileId;
                    pMVar5 = (this->fields).teleporter2;
                    if (pMVar5 != (MVTeleporter *)0x0) {
                      (pMVar5->fields)._._._.previewOwnerProfileId =
                           (this->fields)._._._._.previewOwnerProfileId;
                      pMVar5 = (this->fields).teleporter1;
                      if (pMVar5 != (MVTeleporter *)0x0) {
                        uVar7 = *(undefined4 *)((int)&(pMVar5->fields)._._.interactionFlags + 4);
                        piVar8 = &(pMVar5->fields)._._.interactionFlags;
                        *(uint *)piVar8 = (uint)*piVar8 | 0x20000;
                        *(undefined4 *)((int)&(pMVar5->fields)._._.interactionFlags + 4) = uVar7;
                        pMVar5 = (this->fields).teleporter2;
                        if (pMVar5 != (MVTeleporter *)0x0) {
                          uVar7 = *(undefined4 *)((int)&(pMVar5->fields)._._.interactionFlags + 4);
                          piVar8 = &(pMVar5->fields)._._.interactionFlags;
                          *(uint *)piVar8 = (uint)*piVar8 | 0x20000;
                          *(undefined4 *)((int)&(pMVar5->fields)._._.interactionFlags + 4) = uVar7;
                          goto code_?;
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
      goto code_?;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    TVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (TVar1.m_Index,(Object *)pSVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if ((pMVar3 == (MVWorldObjectClientManager *)0x0) || (TVar9.m_Index == 0))
    goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar9.m_Index + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar6 = (int32_t *)func_?();
      pMVar5 = (MVTeleporter *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar3,*piVar6,(MethodInfo *)0x0);
      if (((pMVar5 == (MVTeleporter *)0x0) ||
          ((pMVar5->klass->_1).naturalAligment < (TypeInfo__MVTeleporter->_1).naturalAligment)) ||
         ((MVTeleporter__Class *)
          (pMVar5->klass->_1).typeHierarchy[(TypeInfo__MVTeleporter->_1).naturalAligment - 1] !=
          TypeInfo__MVTeleporter)) goto code_?;
      if ((MVTeleporter__Class *)
          (pMVar5->klass->_1).typeHierarchy[(TypeInfo__MVTeleporter->_1).naturalAligment - 1] !=
          TypeInfo__MVTeleporter) {
        pMVar5 = (MVTeleporter *)0x0;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVTeleporter RetrieveTeleporter(Dictionary`2[System.Object,System.Object], String) */

MVTeleporter *
Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_RetrieveTeleporter
          (MVTeleportGroup *this,Dictionary_2_System_Object_System_Object_ *table,String *id,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MVTeleporter);
    cRam_? = '\x01';
  }
  if (table != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)table,
                       (Object *)id,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return (MVTeleporter *)0x0;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)table,
                       (Object *)id,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if ((this_00 != (MVWorldObjectClientManager *)0x0) && (TVar2.m_Index != 0)) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int32_t *)func_?();
        pMVar4 = (MVTeleporter *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,*piVar3,(MethodInfo *)0x0);
        if (pMVar4 == (MVTeleporter *)0x0) {
          return (MVTeleporter *)0x0;
        }
        if ((pMVar4->klass->_1).naturalAligment < (TypeInfo__MVTeleporter->_1).naturalAligment) {
          return (MVTeleporter *)0x0;
        }
        if ((MVTeleporter__Class *)
            (pMVar4->klass->_1).typeHierarchy[(TypeInfo__MVTeleporter->_1).naturalAligment - 1] !=
            TypeInfo__MVTeleporter) {
          return (MVTeleporter *)0x0;
        }
        if ((MVTeleporter__Class *)
            (pMVar4->klass->_1).typeHierarchy[(TypeInfo__MVTeleporter->_1).naturalAligment - 1] !=
            TypeInfo__MVTeleporter) {
          return (MVTeleporter *)0x0;
        }
        return pMVar4;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pMVar4 = (MVTeleporter *)(*pcVar5)();
  return pMVar4;
}


/* Void SetWorldObjectToPurchased() */

void Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_SetWorldObjectToPurchased
               (MVTeleportGroup *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_SetWorldObjectToPurchased
            ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).teleporter1;
  if (pMVar1 != (MVTeleporter *)0x0) {
    (*(code *)(pMVar1->klass->vtable).SetWorldObjectToPurchased.method)
              (pMVar1,(pMVar1->klass->vtable).Initialize.methodPtr);
    pMVar1 = (this->fields).teleporter2;
    if (pMVar1 != (MVTeleporter *)0x0) {
      (*(code *)(pMVar1->klass->vtable).SetWorldObjectToPurchased.method)
                (pMVar1,(pMVar1->klass->vtable).Initialize.methodPtr);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVTeleportGroup(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup__ctor
               (MVTeleportGroup *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVBlueprintBase::MVBlueprintBase__ctor_2
              ((MVBlueprintBase *)this,data,(pPVar1->fields).mvTeleportGroupPrefab,worldObjects,
               (MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

