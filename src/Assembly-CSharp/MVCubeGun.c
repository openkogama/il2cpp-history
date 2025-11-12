
/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVCubeGun::MVCubeGun_OnDataUpdate(MVCubeGun *this,MethodInfo *method)

{
  MVPickupItemBase::MVPickupItemBase_OnDataUpdate((MVPickupItemBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
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
    FUN_?(&
                  CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_material);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cubeBullet;
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pCVar1 == (CubeBullet *)0x0) {
code_?:
    pMVar2 = CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__;
    pGVar3 = (this->fields)._._._.gameObject;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    if ((CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__->
        field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                   );
    }
    pCVar1 = (CubeBullet *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_3
                        (pGVar3,0,((pMVar2->field7_0x38).rgctx_data)->method);
    bVar4 = iRam_? != 0;
    (this->fields).cubeBullet = pCVar1;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).cubeBullet >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  pDVar9 = (this->fields)._._._._.data;
  if ((pDVar9 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pDVar9 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar9,(Object *)StringLiteral_itemData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pDVar9 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    bVar10 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar9->klass->_1).naturalAligment < bVar10) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar9->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar9,
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pCVar1 = (this->fields).cubeBullet;
    pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar9,(Object *)StringLiteral_material,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if ((pCVar1 != (CubeBullet *)0x0) && (pOVar12 != (Object *)0x0)) {
      if ((pOVar12->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar12,lRam_?);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      CubeBullet::CubeBullet_SetCubeMaterial
                (pCVar1,*(uint8_t *)&pOVar12[1].klass,(MethodInfo *)0x0);
      pMVar2 = 
      GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
      ;
      pGVar3 = (this->fields)._._._.gameObject;
      if (pGVar3 != (GameObject *)0x0) {
        if ((
            GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                       );
        }
        pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentInChildren_3
                            (pGVar3,0,((pMVar2->field7_0x38).rgctx_data)->method);
        if (pOVar12 != (Object *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Clear__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar13 = pOVar12[3].monitor;
          if (pMVar13 != (MonitorData *)0x0) {
            length = *(int32_t *)(pMVar13 + 0x18);
            uVar5 = 0;
            *(int *)(pMVar13 + 0x1c) = *(int *)(pMVar13 + 0x1c) + 1;
            *(undefined4 *)(pMVar13 + 0x18) = 0;
            if (0 < length) {
              mscorlib.dll::System::Array::Array_Clear
                        (*(Array **)(pMVar13 + 0x10),0,length,(MethodInfo *)0x0);
            }
            pMVar2 = 
            UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
            ;
            pOVar14 = pOVar12[2].klass;
            if (pOVar14 != (Object__Class *)0x0) {
              if ((
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                  ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                FUN_?(
                             UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                             );
              }
              p_Var12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponentsInChildren_4
                                  ((GameObject *)pOVar14,0,
                                   ((pMVar2->field7_0x38).rgctx_data)->method);
              if (p_Var12 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                pp_Var21 = p_Var12->vector;
                while( true ) {
                  if ((int)p_Var12->max_length <= (int)uVar5) {
                    return;
                  }
                  if ((uint)p_Var12->max_length <= uVar5) {
                    FUN_?();
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pOVar14 = (Object__Class *)*pp_Var21;
                  item = (Object *)
                         FUN_?(TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
                  bVar4 = iRam_? != 0;
                  *(undefined1 *)&item[2].klass = 1;
                  item[1].klass = pOVar14;
                  if (bVar4) {
                    uVar15 = (uint)((ulonglong)(item + 1) >> 0xc);
                    lVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar8 = *(ulonglong *)(lVar16 + 0xADDR);
                      puVar6 = (ulonglong *)(lVar16 + 0xADDR);
                      LOCK();
                      bVar4 = uVar8 == *puVar6;
                      if (bVar4) {
                        *puVar6 = uVar8 | 1L << (uVar15 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar4);
                  }
                  if (pOVar14 == (Object__Class *)0x0) break;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pcVar17 = (pOVar14->_0).name;
                  if (pcVar17 == (char *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar14,(MethodInfo *)0x0);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pcVar11 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                    uVar18 = func_?(&UNK_?);
                    FUN_?(uVar18,0);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pcRam_? = pcVar11;
                  pMVar13 = (MonitorData *)(*pcRam_?)(pcVar17);
                  bVar4 = iRam_? != 0;
                  item[1].monitor = pMVar13;
                  if (bVar4) {
                    uVar15 = (uint)((ulonglong)&item[1].monitor >> 0xc);
                    lVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar8 = *(ulonglong *)(lVar16 + 0xADDR);
                      puVar6 = (ulonglong *)(lVar16 + 0xADDR);
                      LOCK();
                      bVar4 = uVar8 == *puVar6;
                      if (bVar4) {
                        *puVar6 = uVar8 | 1L << (uVar15 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar4);
                  }
                  pMVar2 = 
                  MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                  ;
                  this_00 = (List_1_System_Object_ *)pOVar12[3].monitor;
                  if (this_00 == (List_1_System_Object_ *)0x0) break;
                  piVar19 = &(this_00->fields)._version;
                  *piVar19 = *piVar19 + 1;
                  pOVar20 = (this_00->fields)._items;
                  if (pOVar20 == (Object__Array *)0x0) break;
                  uVar15 = (this_00->fields)._size;
                  if (uVar15 < (uint)pOVar20->max_length) {
                    (this_00->fields)._size = uVar15 + 1;
                    FUN_?(pOVar20,(longlong)(int)uVar15,item);
                    uVar5 = uVar5 + 1;
                    pp_Var21 = pp_Var21 + 1;
                  }
                  else {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__AddWithResize
                              (this_00,item,pMVar2->klass->rgctx_data[0xe].method);
                    uVar5 = uVar5 + 1;
                    pp_Var21 = pp_Var21 + 1;
                  }
                }
              }
            }
          }
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetCubeMaterial() */

void Assembly-CSharp.dll::MVCubeGun::MVCubeGun_SetCubeMaterial(MVCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&
                  CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_material);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cubeBullet;
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pCVar1 == (CubeBullet *)0x0) {
code_?:
    pMVar2 = CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__;
    pGVar3 = (this->fields)._._._.gameObject;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    if ((CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__->
        field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                   );
    }
    pCVar1 = (CubeBullet *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_3
                        (pGVar3,0,((pMVar2->field7_0x38).rgctx_data)->method);
    bVar4 = iRam_? != 0;
    (this->fields).cubeBullet = pCVar1;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).cubeBullet >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  pDVar9 = (this->fields)._._._._.data;
  if ((pDVar9 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pDVar9 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar9,(Object *)StringLiteral_itemData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pDVar9 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    bVar10 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar9->klass->_1).naturalAligment < bVar10) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar9->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar9,
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pCVar1 = (this->fields).cubeBullet;
    pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar9,(Object *)StringLiteral_material,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if ((pCVar1 != (CubeBullet *)0x0) && (pOVar12 != (Object *)0x0)) {
      if ((pOVar12->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar12,lRam_?);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      CubeBullet::CubeBullet_SetCubeMaterial
                (pCVar1,*(uint8_t *)&pOVar12[1].klass,(MethodInfo *)0x0);
      pMVar2 = 
      GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
      ;
      pGVar3 = (this->fields)._._._.gameObject;
      if (pGVar3 != (GameObject *)0x0) {
        if ((
            GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                       );
        }
        pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentInChildren_3
                            (pGVar3,0,((pMVar2->field7_0x38).rgctx_data)->method);
        if (pOVar12 != (Object *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Clear__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar13 = pOVar12[3].monitor;
          if (pMVar13 != (MonitorData *)0x0) {
            length = *(int32_t *)(pMVar13 + 0x18);
            uVar5 = 0;
            *(int *)(pMVar13 + 0x1c) = *(int *)(pMVar13 + 0x1c) + 1;
            *(undefined4 *)(pMVar13 + 0x18) = 0;
            if (0 < length) {
              mscorlib.dll::System::Array::Array_Clear
                        (*(Array **)(pMVar13 + 0x10),0,length,(MethodInfo *)0x0);
            }
            pMVar2 = 
            UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
            ;
            pOVar14 = pOVar12[2].klass;
            if (pOVar14 != (Object__Class *)0x0) {
              if ((
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                  ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                FUN_?(
                             UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                             );
              }
              p_Var12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponentsInChildren_4
                                  ((GameObject *)pOVar14,0,
                                   ((pMVar2->field7_0x38).rgctx_data)->method);
              if (p_Var12 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                pp_Var21 = p_Var12->vector;
                while( true ) {
                  if ((int)p_Var12->max_length <= (int)uVar5) {
                    return;
                  }
                  if ((uint)p_Var12->max_length <= uVar5) {
                    FUN_?();
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pOVar14 = (Object__Class *)*pp_Var21;
                  item = (Object *)
                         FUN_?(TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
                  bVar4 = iRam_? != 0;
                  *(undefined1 *)&item[2].klass = 1;
                  item[1].klass = pOVar14;
                  if (bVar4) {
                    uVar15 = (uint)((ulonglong)(item + 1) >> 0xc);
                    lVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar8 = *(ulonglong *)(lVar16 + 0xADDR);
                      puVar6 = (ulonglong *)(lVar16 + 0xADDR);
                      LOCK();
                      bVar4 = uVar8 == *puVar6;
                      if (bVar4) {
                        *puVar6 = uVar8 | 1L << (uVar15 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar4);
                  }
                  if (pOVar14 == (Object__Class *)0x0) break;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pcVar17 = (pOVar14->_0).name;
                  if (pcVar17 == (char *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar14,(MethodInfo *)0x0);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pcVar11 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                    uVar18 = func_?(&UNK_?);
                    FUN_?(uVar18,0);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pcRam_? = pcVar11;
                  pMVar13 = (MonitorData *)(*pcRam_?)(pcVar17);
                  bVar4 = iRam_? != 0;
                  item[1].monitor = pMVar13;
                  if (bVar4) {
                    uVar15 = (uint)((ulonglong)&item[1].monitor >> 0xc);
                    lVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar8 = *(ulonglong *)(lVar16 + 0xADDR);
                      puVar6 = (ulonglong *)(lVar16 + 0xADDR);
                      LOCK();
                      bVar4 = uVar8 == *puVar6;
                      if (bVar4) {
                        *puVar6 = uVar8 | 1L << (uVar15 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar4);
                  }
                  pMVar2 = 
                  MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                  ;
                  this_00 = (List_1_System_Object_ *)pOVar12[3].monitor;
                  if (this_00 == (List_1_System_Object_ *)0x0) break;
                  piVar19 = &(this_00->fields)._version;
                  *piVar19 = *piVar19 + 1;
                  pOVar20 = (this_00->fields)._items;
                  if (pOVar20 == (Object__Array *)0x0) break;
                  uVar15 = (this_00->fields)._size;
                  if (uVar15 < (uint)pOVar20->max_length) {
                    (this_00->fields)._size = uVar15 + 1;
                    FUN_?(pOVar20,(longlong)(int)uVar15,item);
                    uVar5 = uVar5 + 1;
                    pp_Var21 = pp_Var21 + 1;
                  }
                  else {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__AddWithResize
                              (this_00,item,pMVar2->klass->rgctx_data[0xe].method);
                    uVar5 = uVar5 + 1;
                    pp_Var21 = pp_Var21 + 1;
                  }
                }
              }
            }
          }
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* MVCubeGun(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVCubeGun::MVCubeGun__ctor
               (MVCubeGun *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPickupItemBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVPickupItemBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVPickupItemBase::MVPickupItemBase__ctor
            ((MVPickupItemBase *)this,data,worldObjects,(MethodInfo *)0x0);
  piVar1 = &(this->fields)._._._.interactionFlags;
  *piVar1 = *piVar1 | 0x8000;
  if (cRam_? == '\0') {
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
    FUN_?(&
                  CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_material);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar2 = (this->fields).cubeBullet;
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pCVar2 == (CubeBullet *)0x0) {
code_?:
    pMVar3 = CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__;
    pGVar4 = (this->fields)._._._.gameObject;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    if ((CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__->
        field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                   );
    }
    pCVar2 = (CubeBullet *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_3
                        (pGVar4,0,((pMVar3->field7_0x38).rgctx_data)->method);
    bVar5 = iRam_? != 0;
    (this->fields).cubeBullet = pCVar2;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).cubeBullet >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar2->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  pDVar10 = (this->fields)._._._._.data;
  if ((pDVar10 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pDVar10 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar10,(Object *)StringLiteral_itemData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pDVar10 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    bVar11 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar10->klass->_1).naturalAligment < bVar11) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar10->klass->_1).typeHierarchy[(ulonglong)bVar11 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar10,
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pCVar2 = (this->fields).cubeBullet;
    pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar10,(Object *)StringLiteral_material,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if ((pCVar2 != (CubeBullet *)0x0) && (pOVar13 != (Object *)0x0)) {
      if ((pOVar13->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar13,lRam_?);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      CubeBullet::CubeBullet_SetCubeMaterial
                (pCVar2,*(uint8_t *)&pOVar13[1].klass,(MethodInfo *)0x0);
      pMVar3 = 
      GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
      ;
      pGVar4 = (this->fields)._._._.gameObject;
      if (pGVar4 != (GameObject *)0x0) {
        if ((
            GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                       );
        }
        pOVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentInChildren_3
                            (pGVar4,0,((pMVar3->field7_0x38).rgctx_data)->method);
        if (pOVar13 != (Object *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Clear__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar14 = pOVar13[3].monitor;
          if (pMVar14 != (MonitorData *)0x0) {
            length = *(int32_t *)(pMVar14 + 0x18);
            uVar6 = 0;
            *(int *)(pMVar14 + 0x1c) = *(int *)(pMVar14 + 0x1c) + 1;
            *(undefined4 *)(pMVar14 + 0x18) = 0;
            if (0 < length) {
              mscorlib.dll::System::Array::Array_Clear
                        (*(Array **)(pMVar14 + 0x10),0,length,(MethodInfo *)0x0);
            }
            pMVar3 = 
            UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
            ;
            pOVar15 = pOVar13[2].klass;
            if (pOVar15 != (Object__Class *)0x0) {
              if ((
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                  ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                FUN_?(
                             UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                             );
              }
              p_Var13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponentsInChildren_4
                                  ((GameObject *)pOVar15,0,
                                   ((pMVar3->field7_0x38).rgctx_data)->method);
              if (p_Var13 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                pp_Var22 = p_Var13->vector;
                while( true ) {
                  if ((int)p_Var13->max_length <= (int)uVar6) {
                    return;
                  }
                  if ((uint)p_Var13->max_length <= uVar6) {
                    FUN_?();
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pOVar15 = (Object__Class *)*pp_Var22;
                  item = (Object *)
                         FUN_?(TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
                  bVar5 = iRam_? != 0;
                  *(undefined1 *)&item[2].klass = 1;
                  item[1].klass = pOVar15;
                  if (bVar5) {
                    uVar16 = (uint)((ulonglong)(item + 1) >> 0xc);
                    lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar9 = *(ulonglong *)(lVar17 + 0xADDR);
                      puVar7 = (ulonglong *)(lVar17 + 0xADDR);
                      LOCK();
                      bVar5 = uVar9 == *puVar7;
                      if (bVar5) {
                        *puVar7 = uVar9 | 1L << (uVar16 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar5);
                  }
                  if (pOVar15 == (Object__Class *)0x0) break;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pcVar18 = (pOVar15->_0).name;
                  if (pcVar18 == (char *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar15,(MethodInfo *)0x0);
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pcVar12 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                    uVar19 = func_?(&UNK_?);
                    FUN_?(uVar19,0);
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pcRam_? = pcVar12;
                  pMVar14 = (MonitorData *)(*pcRam_?)(pcVar18);
                  bVar5 = iRam_? != 0;
                  item[1].monitor = pMVar14;
                  if (bVar5) {
                    uVar16 = (uint)((ulonglong)&item[1].monitor >> 0xc);
                    lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar9 = *(ulonglong *)(lVar17 + 0xADDR);
                      puVar7 = (ulonglong *)(lVar17 + 0xADDR);
                      LOCK();
                      bVar5 = uVar9 == *puVar7;
                      if (bVar5) {
                        *puVar7 = uVar9 | 1L << (uVar16 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar5);
                  }
                  pMVar3 = 
                  MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                  ;
                  this_00 = (List_1_System_Object_ *)pOVar13[3].monitor;
                  if (this_00 == (List_1_System_Object_ *)0x0) break;
                  piVar20 = &(this_00->fields)._version;
                  *piVar20 = *piVar20 + 1;
                  pOVar21 = (this_00->fields)._items;
                  if (pOVar21 == (Object__Array *)0x0) break;
                  uVar16 = (this_00->fields)._size;
                  if (uVar16 < (uint)pOVar21->max_length) {
                    (this_00->fields)._size = uVar16 + 1;
                    FUN_?(pOVar21,(longlong)(int)uVar16,item);
                    uVar6 = uVar6 + 1;
                    pp_Var22 = pp_Var22 + 1;
                  }
                  else {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__AddWithResize
                              (this_00,item,pMVar3->klass->rgctx_data[0xe].method);
                    uVar6 = uVar6 + 1;
                    pp_Var22 = pp_Var22 + 1;
                  }
                }
              }
            }
          }
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

