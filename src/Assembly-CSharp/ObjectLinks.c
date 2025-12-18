
/* Boolean AddObjectLink(ObjectLink, MVWorldObjectClient, MVWorldObjectClient) */

bool Assembly-CSharp.dll::ObjectLinks::ObjectLinks_AddObjectLink
               (ObjectLinks *this,ObjectLink *objectLink,MVWorldObjectClient *objectConnectorWo,
               MVWorldObjectClient *objectWo,MethodInfo *method)

{
  uVar1 = SUB84(objectWo,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Add_int__ObjectLinkObjectScript_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ObjectLinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<ObjectLinkObjectScript>_ObjectLinkObjectScript_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((objectLink != (ObjectLink *)0x0) &&
     (this_00 = (this->fields).objectLinks,
     this_00 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0)) {
    behavior = CONCAT31((int3)((uint)uVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,(objectLink->fields).id,
               (Object *)objectLink,behavior,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
               ->klass->rgctx_data[0x22].method);
    if ((objectConnectorWo != (MVWorldObjectClient *)0x0) &&
       (MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddObjectLink
                  ((MVWorldObject *)objectConnectorWo,objectLink,(MethodInfo *)0x0),
       objectWo != (MVWorldObjectClient *)0x0)) {
      MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddObjectLink
                ((MVWorldObject *)objectWo,objectLink,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar2 != (GameSessionData *)0x0) {
        if ((pGVar2->fields).gameMode != 0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if (pGVar2 == (GameSessionData *)0x0) goto code_?;
          if ((pGVar2->fields).gameMode != 4) {
            return 1;
          }
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__PrefabPool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar3 != (PrefabPool *)0x0) {
          pOVar4 = (pPVar3->fields).objectLinkObject;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar4 = (ObjectLinkObjectScript *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             ((Object *)pOVar4,
                              ObjectLinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<ObjectLinkObjectScript>_ObjectLinkObjectScript_
                             );
          if (pOVar4 != (ObjectLinkObjectScript *)0x0) {
            (pOVar4->fields)._.isObjectLink = 1;
            (pOVar4->fields)._.linkID = (objectLink->fields).id;
            ObjectLinkObjectScript::ObjectLinkObjectScript_UpdateLinkVisual
                      (pOVar4,objectLink,(MethodInfo *)0x0);
            this_01 = (pOVar4->fields).lineRenderer;
            if ((this_01 != (LineRenderer *)0x0) &&
               (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                    ((Renderer *)this_01,(MethodInfo *)0x0),
               this_03 != (Material *)0x0)) {
              CStack_5.r = _UNK_?;
              CStack_5.g = _UNK_?;
              CStack_5.b = _UNK_?;
              CStack_5.a = _UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                        (this_03,&CStack_5,(MethodInfo *)0x0);
              this_02 = (this->fields).objectLinkObjects;
              if (this_02 != (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                          ((Dictionary_2_System_Int32_System_Object_ *)this_02,
                           (objectLink->fields).id,(Object *)pOVar4,
                           CONCAT31((int3)(behavior >> 8),2),
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Add_int__ObjectLinkObjectScript_
                           ->klass->rgctx_data[0x22].method);
                return 1;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::ObjectLinks::ObjectLinks_Contains
               (ObjectLinks *this,int32_t objectLinkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).objectLinks;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,objectLinkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* ObjectLink GetObjectLink(Int32) */

ObjectLink *
Assembly-CSharp.dll::ObjectLinks::ObjectLinks_GetObjectLink
          (ObjectLinks *this,int32_t objectLinkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_objectLinkID_not_found);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).objectLinks;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (pDVar1,objectLinkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Item_int_
    ;
    if (iVar2 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_objectLinkID_not_found,(MethodInfo *)0x0);
      return (ObjectLink *)0x0;
    }
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).objectLinks;
    if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (pDVar1,objectLinkID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Item_int_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar4 < 0) {
        uVar5 = func_?(pMVar3->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar5);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        pOVar7 = (ObjectLink *)(*pcVar6)();
        return pOVar7;
      }
      pDVar8 = (pDVar1->fields)._entries;
      if (pDVar8 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0)
      {
        if (uVar4 < (uint)pDVar8->max_length) {
          return *(ObjectLink **)&pDVar8->vector[(int)uVar4].value.y;
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        pOVar7 = (ObjectLink *)(*pcVar6)();
        return pOVar7;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      pOVar7 = (ObjectLink *)(*pcVar6)();
      return pOVar7;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pOVar7 = (ObjectLink *)(*pcVar6)();
  return pOVar7;
}


/* Boolean RemoveObjectLink(ObjectLink, MVWorldObjectClient, MVWorldObjectClient) */

bool Assembly-CSharp.dll::ObjectLinks::ObjectLinks_RemoveObjectLink
               (ObjectLinks *this,ObjectLink *link,MVWorldObjectClient *objectConnectorWo,
               MVWorldObjectClient *objectWo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempt_to_remove_ObjectLink__bu);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((link != (ObjectLink *)0x0) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).objectLinks,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(link->fields).id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Attempt_to_remove_ObjectLink__bu,(MethodInfo *)0x0);
      return 0;
    }
    this_01 = (this->fields).objectLinks;
    if (((this_01 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) &&
        (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
         Dictionary_2_System_Int32_System_Object__Remove
                   ((Dictionary_2_System_Int32_System_Object_ *)this_01,(link->fields).id,
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Remove_int_
                   ), objectConnectorWo != (MVWorldObjectClient *)0x0)) &&
       (MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveObjectLink
                  ((MVWorldObject *)objectConnectorWo,link,(MethodInfo *)0x0),
       objectWo != (MVWorldObjectClient *)0x0)) {
      MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveObjectLink
                ((MVWorldObject *)objectWo,link,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar2 != (GameSessionData *)0x0) {
        if ((pGVar2->fields).gameMode != 0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if (pGVar2 == (GameSessionData *)0x0) goto code_?;
          if ((pGVar2->fields).gameMode != 4) {
            return 1;
          }
        }
        pDVar3 = (this->fields).objectLinkObjects;
        if ((pDVar3 != (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) &&
           (this_02 = (Component *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,
                                 (link->fields).id,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__get_Item_int_
                                ), this_02 != (Component *)0x0)) {
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_02,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                    ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
          pDVar3 = (this->fields).objectLinkObjects;
          if (pDVar3 != (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(link->fields).id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Remove_int_
                      );
            return 1;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void Update() */

void Assembly-CSharp.dll::ObjectLinks::ObjectLinks_Update(ObjectLinks *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::ObjectLink>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::ObjectLink>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::ObjectLink>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MV::WorldObject::ObjectLink>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar1 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar1->fields).gameMode != 4) {
        return;
      }
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar2 != (MainCameraManager *)0x0) {
      if ((pMVar2->fields).isLogicRendered == 0) {
        return;
      }
      this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(this->fields).objectLinks;
      if ((this_00 !=
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0) && (pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                             UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                             Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                       (this_00,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Values__
                                       ),
                   pDVar3 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                              *)0x0)) {
        uStack_4 = (pDVar3->fields)._dictionary;
        puStack_5 = (undefined4 *)0x0;
        uStack_6 = 0;
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&uStack_4 >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar8;
            LOCK();
            uVar10 = *puVar8;
            if (uVar9 == uVar10) {
              *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar10);
        }
        if (uStack_4 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iStack_12 = (uStack_4->fields)._version;
        uStack_6 = 0;
        uStack_4._4_4_ = (undefined4)((ulonglong)uStack_4 >> 0x20);
        uStack_13 = (undefined4)uStack_4;
        uStack_14 = uStack_4._4_4_;
        uStack_15 = 0;
        apOStack_16[0] = (ObjectLink *)0x0;
        uStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0;
        puStack_5 = &uStack_13;
        do {
          lVar17 = CONCAT44(uStack_14,uStack_13);
          if (lVar17 == 0) {
code_?:
            FUN_?();
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (iStack_12 != *(int *)(lVar17 + 0x2c)) {
code_?:
            mscorlib.dll::System::ThrowHelper::
            ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                      ((MethodInfo *)0x0);
            goto code_?;
          }
          do {
            if (lVar17 == 0) goto code_?;
            if (*(uint *)(lVar17 + 0x20) <= uStack_15) {
              return;
            }
            lVar18 = *(longlong *)(lVar17 + 0x18);
            lVar19 = (longlong)(int)uStack_15;
            uVar7 = uStack_15 + 1;
            if (lVar18 == 0) goto code_?;
            if (*(uint *)(lVar18 + 0x18) <= uStack_15) {
              uStack_15 = uVar7;
              FUN_?();
              goto code_?;
            }
            uStack_15 = uVar7;
          } while (*(int *)(lVar18 + 0x20 + lVar19 * 0x18) < 0);
          apOStack_16[0] = *(ObjectLink **)(lVar18 + (lVar19 + 2) * 0x18);
          func_?(apOStack_16);
          link = apOStack_16[0];
          this_01 = (this->fields).objectLinkObjects;
          if (apOStack_16[0] == (ObjectLink *)0x0) {
code_?:
            FUN_?();
            uVar7 = uStack_15;
code_?:
            uStack_15 = uVar7;
            FUN_?();
code_?:
            FUN_?();
            goto code_?;
          }
          if (this_01 == (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          this_02 = (ObjectLinkObjectScript *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                               (apOStack_16[0]->fields).id,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__get_Item_int_
                              );
          if (this_02 == (ObjectLinkObjectScript *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          ObjectLinkObjectScript::ObjectLinkObjectScript_UpdateLinkVisual
                    (this_02,link,(MethodInfo *)0x0);
        } while( true );
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* ObjectLinks() */

void Assembly-CSharp.dll::ObjectLinks::ObjectLinks__ctor(ObjectLinks *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).objectLinks = (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).objectLinkObjects = (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).objectLinkObjects >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}

