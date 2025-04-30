
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
                         ), TVar1.m_Index == 0)) goto code_?;
  bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment;
  if ((*(byte *)(*(int *)TVar1.m_Index + 0xb8) < bVar2) ||
     (*(Dictionary_2_System_Object_System_Object___Class **)
       (*(int *)(*(int *)TVar1.m_Index + 100) + -4 + (uint)bVar2 * 4) !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
  goto code_?;
  TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::TextureId]::
           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                     (TVar1.m_Index,(Object *)StringLiteral_ChildrenMap,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  pSVar3 = StringLiteral_teleporter1;
  if (TVar1.m_Index == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_TeleportGroup_does_not_have_any_,(MethodInfo *)0x0);
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar4 != (MVWorldObjectClientManager *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                (pMVar4,(this->fields)._._._._.id,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment;
  if ((*(byte *)(*(int *)TVar1.m_Index + 0xb8) < bVar2) ||
     (*(Dictionary_2_System_Object_System_Object___Class **)
       (*(int *)(*(int *)TVar1.m_Index + 100) + -4 + (uint)bVar2 * 4) !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
  goto code_?;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__MVTeleporter);
    cRam_? = '\x01';
  }
  bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)TVar1.m_Index,
                     (Object *)pSVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar5 == 0) goto code_?;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::TextureId]::
           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                     (TVar1.m_Index,(Object *)pSVar3,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if ((pMVar4 == (MVWorldObjectClientManager *)0x0) || (TVar6.m_Index == 0))
  goto code_?;
  if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) ==
      (TypeInfo__System__Int32->_0).element_class) {
    piVar7 = (int32_t *)func_?();
    pMVar8 = (MVTeleporter *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar4,*piVar7,(MethodInfo *)0x0);
    if (pMVar8 == (MVTeleporter *)0x0) {
code_?:
      pMVar8 = (MVTeleporter *)0x0;
    }
    else {
      bVar2 = (TypeInfo__MVTeleporter->_1).naturalAligment;
      if (((pMVar8->klass->_1).naturalAligment < bVar2) ||
         (ppIVar9 = (pMVar8->klass->_1).typeHierarchy,
         (MVTeleporter__Class *)ppIVar9[bVar2 - 1] != TypeInfo__MVTeleporter))
      goto code_?;
      if ((MVTeleporter__Class *)ppIVar9[bVar2 - 1] != TypeInfo__MVTeleporter) {
        pMVar8 = (MVTeleporter *)0x0;
      }
    }
    ppMVar10 = &(this->fields).teleporter1;
    *ppMVar10 = pMVar8;
    func_?();
    pSVar3 = StringLiteral_teleporter2;
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
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       TVar1.m_Index,(Object *)pSVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar5 == 0) goto code_?;
    MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pMVar4 = (MVWorldObjectClientManager *)&UNK_?;
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (TVar1.m_Index,
                        (Object *)
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((pMVar4 == (MVWorldObjectClientManager *)0x0) || (TVar1.m_Index == 0))
    goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar7 = (int32_t *)func_?();
    pMVar8 = (MVTeleporter *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar4,*piVar7,(MethodInfo *)0x0);
    if (pMVar8 == (MVTeleporter *)0x0) {
code_?:
      pMVar11 = (MVTeleporter *)0x0;
    }
    else {
      bVar2 = (TypeInfo__MVTeleporter->_1).naturalAligment;
      if (((pMVar8->klass->_1).naturalAligment < bVar2) ||
         (ppIVar9 = (pMVar8->klass->_1).typeHierarchy,
         (MVTeleporter__Class *)ppIVar9[bVar2 - 1] != TypeInfo__MVTeleporter))
      goto code_?;
      pMVar11 = (MVTeleporter *)0x0;
      if ((MVTeleporter__Class *)ppIVar9[bVar2 - 1] == TypeInfo__MVTeleporter) {
        pMVar11 = pMVar8;
      }
    }
    ppMVar12 = &(this->fields).teleporter2;
    *ppMVar12 = pMVar11;
    func_?();
    if (*ppMVar10 == (MVTeleporter *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Missing_teleporter_1,(MethodInfo *)0x0);
    }
    if (*ppMVar12 == (MVTeleporter *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Missing_teleporter_2,(MethodInfo *)0x0);
    }
    if (*ppMVar10 == (MVTeleporter *)0x0) {
      return;
    }
    if (*ppMVar12 == (MVTeleporter *)0x0) {
      return;
    }
    ((*ppMVar10)->fields).target = *ppMVar12;
    func_?();
    if (*ppMVar12 != (MVTeleporter *)0x0) {
      ((*ppMVar12)->fields).target = *ppMVar10;
      func_?();
      pMVar8 = *ppMVar10;
      if (pMVar8 != (MVTeleporter *)0x0) {
        uVar13 = *(undefined4 *)((int)&(pMVar8->fields)._._.interactionFlags + 4);
        piVar14 = &(pMVar8->fields)._._.interactionFlags;
        *(uint *)piVar14 = (uint)*piVar14 | 8;
        *(undefined4 *)((int)&(pMVar8->fields)._._.interactionFlags + 4) = uVar13;
        pMVar8 = *ppMVar12;
        if (pMVar8 != (MVTeleporter *)0x0) {
          uVar13 = *(undefined4 *)((int)&(pMVar8->fields)._._.interactionFlags + 4);
          piVar14 = &(pMVar8->fields)._._.interactionFlags;
          *(uint *)piVar14 = (uint)*piVar14 | 8;
          *(undefined4 *)((int)&(pMVar8->fields)._._.interactionFlags + 4) = uVar13;
          bVar5 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                            ((MVWorldObjectClient *)this,InteractionFlags__Enum_IsPreview,
                             (MethodInfo *)0x0);
          if (bVar5 == 0) {
code_?:
            uVar13 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
            piVar14 = &(this->fields)._._._.interactionFlags;
            *(uint *)piVar14 = (uint)*piVar14 | 0x40;
            *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar13;
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
          else if (*ppMVar10 != (MVTeleporter *)0x0) {
            (*(code *)((*ppMVar10)->klass->vtable).AddPreviewBox.method)();
            if (*ppMVar12 != (MVTeleporter *)0x0) {
              (*(code *)((*ppMVar12)->klass->vtable).AddPreviewBox.method)();
              if (*ppMVar10 != (MVTeleporter *)0x0) {
                ((*ppMVar10)->fields)._._._.previewOwnerProfileId =
                     (this->fields)._._._._.previewOwnerProfileId;
                if (*ppMVar12 != (MVTeleporter *)0x0) {
                  ((*ppMVar12)->fields)._._._.previewOwnerProfileId =
                       (this->fields)._._._._.previewOwnerProfileId;
                  pMVar8 = *ppMVar10;
                  if (pMVar8 != (MVTeleporter *)0x0) {
                    uVar13 = *(undefined4 *)((int)&(pMVar8->fields)._._.interactionFlags + 4);
                    piVar14 = &(pMVar8->fields)._._.interactionFlags;
                    *(uint *)piVar14 = (uint)*piVar14 | 0x20000;
                    *(undefined4 *)((int)&(pMVar8->fields)._._.interactionFlags + 4) = uVar13;
                    pMVar8 = *ppMVar12;
                    if (pMVar8 != (MVTeleporter *)0x0) {
                      uVar13 = *(undefined4 *)((int)&(pMVar8->fields)._._.interactionFlags + 4);
                      piVar14 = &(pMVar8->fields)._._.interactionFlags;
                      *(uint *)piVar14 = (uint)*piVar14 | 0x20000;
                      *(undefined4 *)((int)&(pMVar8->fields)._._.interactionFlags + 4) = uVar13;
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
code_?:
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
        if (pMVar4 != (MVTeleporter *)0x0) {
          bVar5 = (TypeInfo__MVTeleporter->_1).naturalAligment;
          if ((bVar5 <= (pMVar4->klass->_1).naturalAligment) &&
             (ppIVar6 = (pMVar4->klass->_1).typeHierarchy,
             (MVTeleporter__Class *)ppIVar6[bVar5 - 1] == TypeInfo__MVTeleporter)) {
            pMVar7 = (MVTeleporter *)0x0;
            if ((MVTeleporter__Class *)ppIVar6[bVar5 - 1] == TypeInfo__MVTeleporter) {
              pMVar7 = pMVar4;
            }
            return pMVar7;
          }
        }
        return (MVTeleporter *)0x0;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pMVar4 = (MVTeleporter *)(*pcVar8)();
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

