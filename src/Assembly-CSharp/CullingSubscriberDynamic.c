
/* Void Destroy() */

void Assembly-CSharp.dll::CullingSubscriberDynamic::CullingSubscriberDynamic_Destroy
               (CullingSubscriberDynamic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  CullingApiWrapper::CullingApiWrapper_UnSubscribe((ICullingSubscriber *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<PriorityDataUpdate>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UpdateController____c__DisplayClass6_0___RemoveUpdateObject_b__0_PriorityDataUpdate_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController____c__DisplayClass6_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__UpdateController____c__DisplayClass6_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(CullingSubscriberDynamic **)(lVar1 + 0x10) = this;
    if (bVar2) {
      uVar3 = (uint)(lVar1 + 0x10U >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    uVar3 = 0;
    lVar7 = 0x20;
    while( true ) {
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar8 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar8 == (List_1_PriorityDataUpdate___Array *)0x0) break;
      if ((int)pLVar8->max_length <= (int)uVar3) {
        return;
      }
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar8 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar8 == (List_1_PriorityDataUpdate___Array *)0x0) break;
      if ((uint)pLVar8->max_length <= uVar3) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      match = *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
               (lVar1 + 0x18);
      this_00 = *(List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
                 ((longlong)pLVar8->vector + lVar7 + -0x20);
      if (match == (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      {
        match = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                FUN_?(TypeInfo__System__Predicate<PriorityDataUpdate>);
        FUN_?(match,lVar1);
        *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)(lVar1 + 0x18)
             = match;
        func_?(lVar1 + 0x18);
      }
      if (this_00 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
      XmlSchemaObjectTable+XmlSchemaObjectEntry]::
      List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__RemoveAll
                (this_00,match,
                 MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                );
      uVar3 = uVar3 + 1;
      lVar7 = lVar7 + 8;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CullingSubscriberDynamic::CullingSubscriberDynamic_OnStateChanged
               (CullingSubscriberDynamic *this,CullingGroupEvent cullingGroupEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  distanceBandIndex = (this->fields).cullingBandIndex;
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = CullingApiWrapper::CullingApiWrapper_Visible
                    (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
  if (((this->fields).overrideDistanceBandIndex != -1) &&
     (bStackX_15 = cullingGroupEvent.m_ThisState,
     (int)(bStackX_15 & 0x7f) <= (this->fields).overrideDistanceBandIndex)) {
    value = 1;
  }
  if ((this->fields).keepRootAlive == 0) {
    pGVar1 = (this->fields).root;
    if (pGVar1 == (GameObject *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,value,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).cullingGroup != (GameObject__Array *)0x0) {
    pGVar3 = (this->fields).cullingGroup;
    ppGVar4 = pGVar3->vector;
    for (uVar5 = 0; (int)uVar5 < (int)pGVar3->max_length; uVar5 = uVar5 + 1) {
      if ((uint)pGVar3->max_length <= uVar5) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pGVar1 = *ppGVar4;
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
      if (pGVar1 != (GameObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,value,(MethodInfo *)0x0);
        }
      }
      ppGVar4 = ppGVar4 + 1;
    }
  }
  return;
}


/* Void SetCullingRadius(Single) */

void Assembly-CSharp.dll::CullingSubscriberDynamic::CullingSubscriberDynamic_SetCullingRadius
               (CullingSubscriberDynamic *this,float radius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar1 != (BoundingSphere__Array *)0x0) {
    uVar2 = (this->fields)._CullingIndex_k__BackingField;
    if (uVar2 < (uint)pBVar1->max_length) {
      pBVar1->vector[(int)uVar2].radius = radius;
      return;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetStateCullingGroupUpdate(Boolean) */

void Assembly-CSharp.dll::CullingSubscriberDynamic::
     CullingSubscriberDynamic_SetStateCullingGroupUpdate
               (CullingSubscriberDynamic *this,bool visible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).cullingGroup != (GameObject__Array *)0x0) {
    pGVar1 = (this->fields).cullingGroup;
    ppGVar2 = pGVar1->vector;
    for (uVar3 = 0; (int)uVar3 < (int)pGVar1->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pGVar1->max_length <= uVar3) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = *ppGVar2;
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
      if (this_00 != (GameObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_00->fields)._.m_CachedPtr != (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,visible,(MethodInfo *)0x0);
        }
      }
      ppGVar2 = ppGVar2 + 1;
    }
  }
  return;
}


/* Void SetStateRoot(Boolean) */

void Assembly-CSharp.dll::CullingSubscriberDynamic::CullingSubscriberDynamic_SetStateRoot
               (CullingSubscriberDynamic *this,bool visible,MethodInfo *method)

{
  if ((this->fields).keepRootAlive != 0) {
    return;
  }
  obj = (this->fields).root;
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,CONCAT71(in_register_00000011,visible),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,visible);
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::CullingSubscriberDynamic::CullingSubscriberDynamic_UpdateControllerUpdate
               (CullingSubscriberDynamic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  uVar1 = (this->fields)._CullingIndex_k__BackingField;
  pBVar2 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if ((pBVar2 != (BoundingSphere__Array *)0x0) &&
     (obj = (this->fields).rootTransform, obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = 0;
    fStack_4 = 0.0;
    pvVar5 = (obj->fields)._._.m_CachedPtr;
    if (pvVar5 != (void *)0x0) {
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar5,&uStack_3);
      if ((uint)pBVar2->max_length <= uVar1) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pBVar2->vector[(int)uVar1].position.x = (float)(undefined4)uStack_3;
      pBVar2->vector[(int)uVar1].position.y = (float)uStack_3._4_4_;
      pBVar2->vector[(int)uVar1].position.z = fStack_4;
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* CullingSubscriberDynamic(Single, Int32, GameObject, GameObject[], Boolean) */

void Assembly-CSharp.dll::CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
               (CullingSubscriberDynamic *this,float radius,int32_t cullingBandIndex,
               GameObject *root,GameObject__Array *cullingGroup,bool keepRootAlive,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).cullingBandIndex = cullingBandIndex;
  (this->fields).keepRootAlive = keepRootAlive;
  (this->fields).overrideDistanceBandIndex = -1;
  (this->fields).root = root;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).root >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).cullingGroup = cullingGroup;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).cullingGroup >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (root != (GameObject *)0x0) {
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (root,(MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (this->fields).rootTransform = pTVar7;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)&(this->fields).rootTransform >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    CullingApiWrapper::CullingApiWrapper_Subscribe((ICullingSubscriber *)this,(MethodInfo *)0x0);
    uVar2 = (this->fields)._CullingIndex_k__BackingField;
    pBVar8 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if ((pBVar8 != (BoundingSphere__Array *)0x0) &&
       (pTVar7 = (this->fields).rootTransform, pTVar7 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_9 = (CullingSubscriberDynamic *)0x0;
      uStack_10 = uStack_10 & 0xffffffff00000000;
      pvVar11 = (pTVar7->fields)._._.m_CachedPtr;
      if (pvVar11 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcRam_? = pcVar12;
      (*pcRam_?)(pvVar11,&uStack_9);
      if (uVar2 < (uint)pBVar8->max_length) {
        pBVar8->vector[(int)uVar2].position.x = (float)(undefined4)uStack_9;
        pBVar8->vector[(int)uVar2].position.y = (float)uStack_9._4_4_;
        pBVar8->vector[(int)uVar2].position.z = (float)uStack_10;
        pBVar8 = TypeInfo__CullingApiWrapper->static_fields->spheres;
        if (pBVar8 == (BoundingSphere__Array *)0x0) goto code_?;
        uVar2 = (this->fields)._CullingIndex_k__BackingField;
        if (uVar2 < (uint)pBVar8->max_length) {
          pBVar8->vector[(int)uVar2].radius = radius;
          if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_
                          ,2,1,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UpdateController);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&uStack_9 >> 0xc);
            puVar5 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar4 = *puVar5;
              LOCK();
              uVar3 = *puVar5;
              if (uVar4 == uVar3) {
                *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (uVar4 != uVar3);
          }
          uStack_10._0_4_ = 2.8026e-45;
          uStack_10._4_4_ = 1;
          uStack_9 = this;
          if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__UpdateController);
          }
          pLVar14 = TypeInfo__UpdateController->static_fields->updateBuckets;
          if (pLVar14 != (List_1_PriorityDataUpdate___Array *)0x0) {
            if ((uint)pLVar14->max_length < 3) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if (pLVar14->vector[2] != (List_1_PriorityDataUpdate_ *)0x0) {
              uStack_15 = (undefined4)uStack_9;
              uStack_16 = uStack_9._4_4_;
              uStack_17 = (float)uStack_10;
              uStack_18 = uStack_10._4_4_;
              FUN_?(pLVar14->vector[2],&uStack_15,
                            MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_
                           );
              return;
            }
          }
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

