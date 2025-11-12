
/* Void AddPreviewBoxesToTeleporters() */

void Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_AddPreviewBoxesToTeleporters
               (MVTeleportGroup *this,MethodInfo *method)

{
  pMVar1 = (this->fields).teleporter1;
  if (pMVar1 != (MVTeleporter *)0x0) {
    (*(pMVar1->klass->vtable).AddPreviewBox.methodPtr)
              (pMVar1,(pMVar1->klass->vtable).AddPreviewBox.method);
    pMVar1 = (this->fields).teleporter2;
    if (pMVar1 != (MVTeleporter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pMVar1->klass->vtable).AddPreviewBox.methodPtr)
                (pMVar1,(pMVar1->klass->vtable).AddPreviewBox.method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_Initialize
               (MVTeleportGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TeleportGroup_MethodInfo__UnityEngine__GameObject__GetComponent<TeleportGroup>__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TeleportGroup_does_not_have_any_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChildrenMap);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Missing_teleporter_2);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Missing_teleporter_1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_teleporter2);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_teleporter1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pDVar1 = (this->fields)._._._._.data;
  if ((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar1,(Object *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar1->klass->_1).naturalAligment < bVar2) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar1,(Object *)StringLiteral_ChildrenMap,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_TeleportGroup_does_not_have_any_,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar4 != (MVWorldObjectClientManager *)0x0) {
        key = (this->fields)._._._._.id;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug,key,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_trying_to_unregister_none_existi);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_02 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar4->fields).worldObjects;
        if (this_02 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
          iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                            (this_02,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                             ->klass->rgctx_data[0x21].method);
          if (iVar5 < 0) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_trying_to_unregister_none_existi,(MethodInfo *)0x0);
            return;
          }
          this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_04 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UnregisterWorldObject
                      (this_04,key,(MethodInfo *)0x0);
            return;
          }
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar1->klass->_1).naturalAligment < bVar2) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pDVar1);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pMVar6 = MVTeleportGroup_RetrieveTeleporter
                         (this,pDVar1,StringLiteral_teleporter1,(MethodInfo *)0x0);
      bVar7 = iRam_? != 0;
      (this->fields).teleporter1 = pMVar6;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(this->fields).teleporter1 >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      method_00 = (MethodInfo *)StringLiteral_teleporter2;
      pMVar6 = MVTeleportGroup_RetrieveTeleporter
                         (this,pDVar1,StringLiteral_teleporter2,(MethodInfo *)0x0);
      bVar7 = iRam_? != 0;
      (this->fields).teleporter2 = pMVar6;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(this->fields).teleporter2 >> 0xc);
        method_00 = (MethodInfo *)(ulonglong)(uVar8 & 0x3f);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (longlong)method_00;
          }
          UNLOCK();
        } while (!bVar7);
      }
      if ((this->fields).teleporter1 == (MVTeleporter *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Missing_teleporter_1,(MethodInfo *)0x0);
      }
      if ((this->fields).teleporter2 == (MVTeleporter *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Missing_teleporter_2,(MethodInfo *)0x0);
      }
      if (((this->fields).teleporter1 == (MVTeleporter *)0x0) ||
         ((this->fields).teleporter2 == (MVTeleporter *)0x0)) {
        return;
      }
      UnityEngine.TextCoreTextEngineModule.dll::UnityEngine::TextCore::Text::FontAsset::
      FontAsset_set_fallbackFontAssetTable
                ((FontAsset *)(this->fields).teleporter1,
                 (List_1_UnityEngine_TextCore_Text_FontAsset_ *)(this->fields).teleporter2,method_00
                );
      this_00 = (FontAsset *)(this->fields).teleporter2;
      if (this_00 != (FontAsset *)0x0) {
        UnityEngine.TextCoreTextEngineModule.dll::UnityEngine::TextCore::Text::FontAsset::
        FontAsset_set_fallbackFontAssetTable
                  (this_00,(List_1_UnityEngine_TextCore_Text_FontAsset_ *)(this->fields).teleporter1
                   ,method_00);
        pMVar6 = (this->fields).teleporter1;
        if (pMVar6 != (MVTeleporter *)0x0) {
          piVar12 = &(pMVar6->fields)._._.interactionFlags;
          *piVar12 = *piVar12 | 8;
          pMVar6 = (this->fields).teleporter2;
          if (pMVar6 != (MVTeleporter *)0x0) {
            piVar12 = &(pMVar6->fields)._._.interactionFlags;
            *piVar12 = *piVar12 | 8;
            if (((uint)(this->fields)._._._.interactionFlags >> 0x11 & 1) != 0) {
              pMVar6 = (this->fields).teleporter1;
              if (pMVar6 == (MVTeleporter *)0x0) goto code_?;
              (*(pMVar6->klass->vtable).AddPreviewBox.methodPtr)
                        (pMVar6,(pMVar6->klass->vtable).AddPreviewBox.method);
              pMVar6 = (this->fields).teleporter2;
              if (pMVar6 == (MVTeleporter *)0x0) goto code_?;
              (*(pMVar6->klass->vtable).AddPreviewBox.methodPtr)
                        (pMVar6,(pMVar6->klass->vtable).AddPreviewBox.method);
              pMVar6 = (this->fields).teleporter1;
              if (pMVar6 == (MVTeleporter *)0x0) goto code_?;
              (pMVar6->fields)._._._.previewOwnerProfileId =
                   (this->fields)._._._._.previewOwnerProfileId;
              pMVar6 = (this->fields).teleporter2;
              if (pMVar6 == (MVTeleporter *)0x0) goto code_?;
              (pMVar6->fields)._._._.previewOwnerProfileId =
                   (this->fields)._._._._.previewOwnerProfileId;
              pMVar6 = (this->fields).teleporter1;
              if (pMVar6 == (MVTeleporter *)0x0) goto code_?;
              piVar12 = &(pMVar6->fields)._._.interactionFlags;
              *piVar12 = *piVar12 | 0x20000;
              pMVar6 = (this->fields).teleporter2;
              if (pMVar6 == (MVTeleporter *)0x0) goto code_?;
              piVar12 = &(pMVar6->fields)._._.interactionFlags;
              *piVar12 = *piVar12 | 0x20000;
            }
            piVar12 = &(this->fields)._._._.interactionFlags;
            *piVar12 = *piVar12 | 0x40;
            this_01 = (this->fields)._._._.gameObject;
            if ((this_01 != (GameObject *)0x0) &&
               (this_03 = (TeleportGroup *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponent_1
                                    (this_01,
                                     TeleportGroup_MethodInfo__UnityEngine__GameObject__GetComponent<TeleportGroup>__
                                    ), this_03 != (TeleportGroup *)0x0)) {
              TeleportGroup::TeleportGroup_Initialize(this_03,this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVTeleporter RetrieveTeleporter(Dictionary`2[System.Object,System.Object], String) */

MVTeleporter *
Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_RetrieveTeleporter
          (MVTeleportGroup *this,Dictionary_2_System_Object_System_Object_ *table,String *id,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVTeleporter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (table != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)table,(Object *)id,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar1) {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (table,(Object *)id,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if ((this_00 == (MVWorldObjectClientManager *)0x0) || (pOVar2 == (Object *)0x0))
      goto code_?;
      if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        pMVar4 = (MVTeleporter *)(*pcVar3)();
        return pMVar4;
      }
      pMVar4 = (MVTeleporter *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (this_00,*(int32_t *)&pOVar2[1].klass,(MethodInfo *)0x0);
      if (pMVar4 != (MVTeleporter *)0x0) {
        bVar5 = (TypeInfo__MVTeleporter->_1).naturalAligment;
        if ((bVar5 <= (pMVar4->klass->_1).naturalAligment) &&
           (ppIVar6 = (pMVar4->klass->_1).typeHierarchy,
           (MVTeleporter__Class *)ppIVar6[(ulonglong)bVar5 - 1] == TypeInfo__MVTeleporter)) {
          pMVar7 = (MVTeleporter *)0x0;
          if ((MVTeleporter__Class *)
              ppIVar6[(ulonglong)(TypeInfo__MVTeleporter->_1).naturalAligment - 1] ==
              TypeInfo__MVTeleporter) {
            pMVar7 = pMVar4;
          }
          return pMVar7;
        }
      }
    }
    return (MVTeleporter *)0x0;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVTeleporter *)(*pcVar3)();
  return pMVar4;
}


/* Void SetWorldObjectToPurchased() */

void Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_SetWorldObjectToPurchased
               (MVTeleportGroup *this,MethodInfo *method)

{
  pMVar1 = this->klass;
  piVar2 = &(this->fields)._._._.interactionFlags;
  *piVar2 = *piVar2 & 0xfffffffffffdffff;
  (this->fields)._._._._.previewOwnerProfileId = 0;
  (*(pMVar1->vtable).RemovePreviewBox.methodPtr)(this,(pMVar1->vtable).RemovePreviewBox.method);
  pMVar3 = (this->fields).teleporter1;
  if (pMVar3 != (MVTeleporter *)0x0) {
    (*(pMVar3->klass->vtable).SetWorldObjectToPurchased.methodPtr)
              (pMVar3,(pMVar3->klass->vtable).SetWorldObjectToPurchased.method);
    pMVar3 = (this->fields).teleporter2;
    if (pMVar3 != (MVTeleporter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pMVar3->klass->vtable).SetWorldObjectToPurchased.methodPtr)
                (pMVar3,(pMVar3->klass->vtable).SetWorldObjectToPurchased.method);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVTeleportGroup(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup__ctor
               (MVTeleportGroup *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVBlueprintBase::MVBlueprintBase__ctor_2
              ((MVBlueprintBase *)this,data,(pPVar1->fields).mvTeleportGroupPrefab,worldObjects,
               (MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

