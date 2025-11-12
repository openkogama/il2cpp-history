
/* Void AddInputLink(Link) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddInputLink
               (MVWorldObject *this,Link *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).inputLinkRefs;
  if (pLVar1 != (List_1_MV_WorldObject_Link_ *)0x0) {
    FUN_?(pLVar1,link);
    if (link != (Link *)0x0) {
      (link->fields).inputWOID = (this->fields).id;
      if ((this->fields).OnInputLinkChanged !=
          (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) {
        pAVar2 = (this->fields).OnInputLinkChanged;
        (*(pAVar2->fields)._._.invoke_impl)
                  ((pAVar2->fields)._._.method_code,(this->fields).inputLinkRefs,
                   (pAVar2->fields)._._.method);
      }
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean AddObjectLink(ObjectLink) */

bool MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddObjectLink
               (MVWorldObject *this,ObjectLink *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__Add_MV__WorldObject__ObjectLink_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__Add_MV__WorldObject__ObjectLink_
  ;
  this_00 = (this->fields).objectLinkRefs;
  if (this_00 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pOVar3 = (this_00->fields)._items;
    if (pOVar3 != (ObjectLink__Array *)0x0) {
      uVar4 = (this_00->fields)._size;
      if (uVar4 < (uint)pOVar3->max_length) {
        (this_00->fields)._size = uVar4 + 1;
        FUN_?(pOVar3,(longlong)(int)uVar4,link);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)this_00,(Object *)link,
                   pMVar1->klass->rgctx_data[0xe].method);
      }
      (*(this->klass->vtable).OnObjectLinkChanged.methodPtr)
                (this,0,link,(this->klass->vtable).OnObjectLinkChanged.method);
      return 1;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void AddOutputLink(Link) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddOutputLink
               (MVWorldObject *this,Link *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).outputLinkRefs;
  if (pLVar1 != (List_1_MV_WorldObject_Link_ *)0x0) {
    FUN_?(pLVar1,link);
    if (link != (Link *)0x0) {
      (link->fields).outputWOID = (this->fields).id;
      if ((this->fields).OnOutputLinkChanged !=
          (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) {
        pAVar2 = (this->fields).OnOutputLinkChanged;
        (*(pAVar2->fields)._._.invoke_impl)
                  ((pAVar2->fields)._._.method_code,(this->fields).outputLinkRefs,
                   (pAVar2->fields)._._.method);
      }
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean ContainObjectLink(ObjectLink) */

bool MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_ContainObjectLink
               (MVWorldObject *this,ObjectLink *link,MethodInfo *method)

{
  iVar1 = MVWorldObject_GetIndexOfObjectLink(this,link,(MethodInfo *)0x0);
  return iVar1 != -1;
}


/* MVWorldObject DeepCopy() */

MVWorldObject *
MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_DeepCopy
          (MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Link);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVWorldObject *)
            (*(this->klass->vtable).ShallowCopy.methodPtr)
                      (this,(this->klass->vtable).ShallowCopy.method);
  pLVar2 = (List_1_MV_WorldObject_Link_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
  if (pMVar1 != (MVWorldObject *)0x0) {
    (pMVar1->fields).outputLinkRefs = pLVar2;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(pMVar1->fields).outputLinkRefs >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pLVar2 = (this->fields).outputLinkRefs;
    if (pLVar2 != (List_1_MV_WorldObject_Link_ *)0x0) {
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&uStack_8 >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pLVar2->fields)._version << 0x20);
      uStack_10 = 0;
      LStack_11._8_8_ = pLStack_9;
      LStack_11._current = (Object *)0x0;
      uStack_8 = 0;
      pLStack_9 = &LStack_11;
      LStack_11._list = (List_1_System_Object_ *)pLVar2;
      while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                (&LStack_11,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                                ), bVar12 != 0) {
        pLVar2 = (pMVar1->fields).outputLinkRefs;
        if (LStack_11._current == (Object *)0x0) goto code_?;
        uVar13 = *(undefined4 *)&LStack_11._current[1].klass;
        uVar14 = *(undefined4 *)&LStack_11._current[1].monitor;
        uVar15 = *(undefined1 *)((longlong)&LStack_11._current[1].monitor + 4);
        pOVar16 = (Object *)FUN_?(TypeInfo__MV__WorldObject__Link);
        *(undefined4 *)&pOVar16[1].klass = uVar13;
        *(undefined4 *)((longlong)&pOVar16[1].klass + 4) = uVar14;
        *(undefined4 *)&pOVar16[1].monitor = uVar14;
        *(undefined1 *)((longlong)&pOVar16[1].monitor + 4) = uVar15;
        pMVar17 = 
        MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
        ;
        if (pLVar2 == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
        piVar18 = &(pLVar2->fields)._version;
        *piVar18 = *piVar18 + 1;
        pLVar19 = (pLVar2->fields)._items;
        uVar3 = (pLVar2->fields)._size;
        if (pLVar19 == (Link__Array *)0x0) goto code_?;
        if (uVar3 < (uint)pLVar19->max_length) {
          (pLVar2->fields)._size = uVar3 + 1;
          FUN_?();
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)pLVar2,pOVar16,pMVar17->klass->rgctx_data[0xe].method
                    );
        }
      }
      pLVar2 = (List_1_MV_WorldObject_Link_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
      (pMVar1->fields).inputLinkRefs = pLVar2;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&(pMVar1->fields).inputLinkRefs >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      pLVar2 = (this->fields).inputLinkRefs;
      if (pLVar2 != (List_1_MV_WorldObject_Link_ *)0x0) {
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&uStack_8 >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
                     ((ulonglong)(uint)(pLVar2->fields)._version << 0x20);
        uStack_10 = 0;
        LStack_11._8_8_ = pLStack_9;
        LStack_11._current = (Object *)0x0;
        uStack_8 = 0;
        pLStack_9 = &LStack_11;
        LStack_11._list = (List_1_System_Object_ *)pLVar2;
        while( true ) {
          bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_11,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                             );
          if (bVar12 == 0) {
            pDVar20 = (this->fields).data;
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pDVar21 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                       *)FUN_?(
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                      );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
            Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                      (pDVar21,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            pDVar20 = HashtableFunctions::HashtableFunctions_DeepCopyHashTable
                                (pDVar20,(Dictionary_2_System_Object_System_Object_ *)pDVar21,
                                 (MethodInfo *)0x0);
            (pMVar1->fields).data = pDVar20;
            if (iRam_? != 0) {
              uVar3 = (uint)((ulonglong)&(pMVar1->fields).data >> 0xc);
              lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                LOCK();
                bVar7 = uVar5 == *puVar6;
                if (bVar7) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar7);
            }
            pDVar20 = (this->fields).runTimeData;
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pDVar21 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                       *)FUN_?(
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                      );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
            Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                      (pDVar21,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            pDVar20 = HashtableFunctions::HashtableFunctions_DeepCopyHashTable
                                (pDVar20,(Dictionary_2_System_Object_System_Object_ *)pDVar21,
                                 (MethodInfo *)0x0);
            (pMVar1->fields).runTimeData = pDVar20;
            if (iRam_? != 0) {
              uVar3 = (uint)((ulonglong)&(pMVar1->fields).runTimeData >> 0xc);
              lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                LOCK();
                bVar7 = uVar5 == *puVar6;
                if (bVar7) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar7);
            }
            return pMVar1;
          }
          pLVar2 = (pMVar1->fields).inputLinkRefs;
          if (LStack_11._current == (Object *)0x0) break;
          uVar13 = *(undefined4 *)&LStack_11._current[1].klass;
          uVar14 = *(undefined4 *)&LStack_11._current[1].monitor;
          uVar15 = *(undefined1 *)((longlong)&LStack_11._current[1].monitor + 4);
          pOVar16 = (Object *)FUN_?(TypeInfo__MV__WorldObject__Link);
          *(undefined4 *)&pOVar16[1].klass = uVar13;
          *(undefined4 *)((longlong)&pOVar16[1].klass + 4) = uVar14;
          *(undefined4 *)&pOVar16[1].monitor = uVar14;
          *(undefined1 *)((longlong)&pOVar16[1].monitor + 4) = uVar15;
          pMVar17 = 
          MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
          ;
          if (pLVar2 == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
          piVar18 = &(pLVar2->fields)._version;
          *piVar18 = *piVar18 + 1;
          pLVar19 = (pLVar2->fields)._items;
          uVar3 = (pLVar2->fields)._size;
          if (pLVar19 == (Link__Array *)0x0) goto code_?;
          if (uVar3 < (uint)pLVar19->max_length) {
            (pLVar2->fields)._size = uVar3 + 1;
            FUN_?();
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)pLVar2,pOVar16,
                       pMVar17->klass->rgctx_data[0xe].method);
          }
        }
        goto code_?;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar22 = (code *)swi(3);
  pMVar1 = (MVWorldObject *)(*pcVar22)();
  return pMVar1;
}


/* Dictionary`2[System.Object,System.Object] DeepCopyWorldObjectDataParameters() */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_DeepCopyWorldObjectDataParameters
          (MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStackX_8 = CONCAT31(uStackX_8._1_3_,3);
  pOVar1 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
  uStackX_8 = (this->fields).type;
  pOVar2 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectType,&uStackX_8);
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pDVar4 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar3)();
    return pDVar4;
  }
  uVar5 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,pOVar2,
             (InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar6 = uStackX_8;
  pWVar7 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
  uStackX_8 = uStackX_8 & 0xffffff00;
  iVar8._0_2_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.attrs;
  iVar8._2_1_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.type;
  iVar8._3_1_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.field_0xb;
  if (iVar8 < 0) {
    if (((TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).generic_class ==
         (Il2CppGenericClass *)0x0) ||
       (((TypeInfo__MV__WorldObject__WorldObjectDataParameters->_1).field_0x6d & 8) == 0)) {
      pOVar1 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters);
      FUN_?(pOVar1 + 1,&uStackX_8,(longlong)(int)(pWVar7->_1).instance_size + -0x10);
      if (iRam_? != 0) {
        uVar5 = 0xADDR;
        uVar6 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
        uVar9 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
    }
    else {
      pOVar1 = (Object *)0x0;
    }
  }
  else {
    pOVar1 = (Object *)(CONCAT44(uStackX_c,uVar6) & 0xffffffffffffff00);
  }
  uStackX_8 = (this->fields).id;
  pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_8);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,pOVar2,
             (InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8 = CONCAT31(uStackX_8._1_3_,1);
  pOVar1 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
  uStackX_8 = (this->fields).groupId;
  pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_8);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,pOVar2,
             (InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8 = CONCAT31(uStackX_8._1_3_,2);
  pOVar1 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
  uStackX_8 = (this->fields).itemId;
  pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_8);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,pOVar2,
             (InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8 = CONCAT31(uStackX_8._1_3_,9);
  pOVar1 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
  uStackX_8 = (this->fields).ownerActorNr;
  pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_8);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,pOVar2,
             (InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8 = CONCAT31(uStackX_8._1_3_,10);
  pOVar1 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
  uStackX_8 = (this->fields).previewOwnerProfileId;
  pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_8);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,pOVar2,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8._0_1_ = 4;
  pOVar1 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
  pIVar13 = (this->klass->vtable).get_Position.methodPtr;
  puVar14 = (undefined8 *)(*pIVar13)(&uStack_15,this,(this->klass->vtable).get_Position.method);
  uStack_16 = *(undefined4 *)(puVar14 + 1);
  uStack_17 = *puVar14;
  pOVar2 = (Object *)FUN_?(TypeInfo__UnityEngine__Vector3,&uStack_17);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,pOVar2,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar13 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8._0_1_ = 5;
  pOVar1 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
  pIVar13 = (this->klass->vtable).get_Rotation.methodPtr;
  puVar18 = (undefined4 *)(*pIVar13)(&uStack_15,this,(this->klass->vtable).get_Rotation.method);
  uStack_15 = *puVar18;
  uStack_19 = puVar18[1];
  uStack_20 = puVar18[2];
  uStack_21 = puVar18[3];
  pOVar2 = (Object *)FUN_?(TypeInfo__UnityEngine__Quaternion,&uStack_15);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,pOVar2,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar13 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8._0_1_ = 6;
  pOVar1 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
  pIVar13 = (this->klass->vtable).get_Scale.methodPtr;
  puVar14 = (undefined8 *)(*pIVar13)(&uStack_15,this,(this->klass->vtable).get_Scale.method);
  uStack_17 = *puVar14;
  uStack_16 = *(undefined4 *)(puVar14 + 1);
  pOVar2 = (Object *)FUN_?(TypeInfo__UnityEngine__Vector3,&uStack_17);
  uVar5 = CONCAT71((int7)((ulonglong)pIVar13 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,pOVar2,
             (InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8._0_1_ = 7;
  pOVar1 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters);
  pDVar4 = HashtableFunctions::HashtableFunctions_DeepCopyHashTable_1
                      ((this->fields).data,(MethodInfo *)0x0);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,(Object *)pDVar4,
             (InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8 = CONCAT31(uStackX_8._1_3_,8);
  pOVar1 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
  pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
            (*(this->klass->vtable).get_RunTimeData.methodPtr)(this);
  pDVar4 = HashtableFunctions::HashtableFunctions_DeepCopyHashTable_1(pDVar4,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,(Object *)pDVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  return (Dictionary_2_System_Object_System_Object_ *)this_00;
}


/* Int32 GetIndexOfObjectLink(ObjectLink) */

int32_t MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetIndexOfObjectLink
                  (MVWorldObject *this,ObjectLink *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).objectLinkRefs;
  uVar2 = 0;
  if (pLVar1 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
    lVar3 = 0x20;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return -1;
      }
      pLVar1 = (this->fields).objectLinkRefs;
      if (pLVar1 == (List_1_MV_WorldObject_ObjectLink_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        iVar5 = (*pcVar4)();
        return iVar5;
      }
      pOVar6 = (pLVar1->fields)._items;
      if (pOVar6 == (ObjectLink__Array *)0x0) break;
      if ((uint)pOVar6->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        iVar5 = (*pcVar4)();
        return iVar5;
      }
      lVar7 = *(longlong *)((longlong)pOVar6->vector + lVar3 + -0x20);
      if ((lVar7 == 0) || (link == (ObjectLink *)0x0)) break;
      if (*(int *)(lVar7 + 0x14) == (link->fields).objectConnectorWOID) {
        lVar7 = FUN_?((this->fields).objectLinkRefs,uVar2);
        if (lVar7 == 0) break;
        if (*(int *)(lVar7 + 0x18) == (link->fields).objectWOID) {
          return uVar2;
        }
      }
      pLVar1 = (this->fields).objectLinkRefs;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
      if (pLVar1 == (List_1_MV_WorldObject_ObjectLink_ *)0x0) break;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void GetLinksForClone(List`1[System.Int32]) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetLinksForClone
               (MVWorldObject *this,List_1_System_Int32_ *links,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).inputLinkRefs;
  if (pLVar1 != (List_1_MV_WorldObject_Link_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_9 = 0;
    LStack_10._8_8_ = pLStack_8;
    LStack_10._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_8 = &LStack_10;
    LStack_10._list = (List_1_System_Object_ *)pLVar1;
    while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_10,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                             ), pOVar12 = LStack_10._current, bVar11 != 0) {
      if (LStack_10._current == (Object *)0x0) {
code_?:
        FUN_?();
        FUN_?();
        goto code_?;
      }
      if (links == (List_1_System_Int32_ *)0x0) {
        FUN_?();
        goto code_?;
      }
      if (((links->fields)._size == 0) ||
         (iVar13 = FUN_?(links,*(undefined4 *)&LStack_10._current[1].klass,
                                MethodInfo__System__Collections__Generic__List<int>__Contains_int_->
                                klass->rgctx_data[0x17].rgctxDataDummy), iVar13 == -1)) {
        FUN_?(links,*(undefined4 *)&pOVar12[1].klass,
                      MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
    }
    pLVar1 = (this->fields).outputLinkRefs;
    if (pLVar1 != (List_1_MV_WorldObject_Link_ *)0x0) {
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
        lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
      uStack_9 = 0;
      LStack_10._8_8_ = pLStack_8;
      LStack_10._current = (Object *)0x0;
      uStack_3 = 0;
      pLStack_8 = &LStack_10;
      LStack_10._list = (List_1_System_Object_ *)pLVar1;
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_10,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                          );
        pOVar12 = LStack_10._current;
        if (bVar11 == 0) {
          return;
        }
        if (LStack_10._current == (Object *)0x0) break;
        if (links == (List_1_System_Int32_ *)0x0) goto code_?;
        if (((links->fields)._size == 0) ||
           (iVar13 = FUN_?(links,*(undefined4 *)&LStack_10._current[1].klass,
                                  MethodInfo__System__Collections__Generic__List<int>__Contains_int_
                                  ->klass->rgctx_data[0x17].rgctxDataDummy), iVar13 == -1)) {
          FUN_?(links,*(undefined4 *)&pOVar12[1].klass,
                        MethodInfo__System__Collections__Generic__List<int>__Add_int_);
        }
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void GetObjectLinksForClone(List`1[System.Int32]) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetObjectLinksForClone
               (MVWorldObject *this,List_1_System_Int32_ *objectLinks,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields).objectLinkRefs;
  if ((List_1_MV_WorldObject_ObjectLink_ *)LStack_1._list ==
      (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_MV_WorldObject_ObjectLink_ *)LStack_1._list)->fields)._version <<
               0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__MoveNext__
                      );
    pOVar11 = LStack_1._current;
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    if (objectLinks == (List_1_System_Int32_ *)0x0) {
      FUN_?();
      break;
    }
    if (((objectLinks->fields)._size == 0) ||
       (iVar12 = FUN_?(objectLinks,*(undefined4 *)&LStack_1._current[1].klass,
                              MethodInfo__System__Collections__Generic__List<int>__Contains_int_->
                              klass->rgctx_data[0x17].rgctxDataDummy), iVar12 == -1)) {
      FUN_?(objectLinks,*(undefined4 *)&pOVar11[1].klass,
                    MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    }
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PartialRemoveFromWOData(Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_PartialRemoveFromWOData
               (MVWorldObject *this,Dictionary_2_System_Object_System_Object_ *dataToRemove,
               MethodInfo *method)

{
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields).data;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  ,dataToRemove,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                 );
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (dataToRemove == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2 = 0;
  uStack_3 = 0;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pDStack_5 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  str1 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  uStack_9 = (ulonglong)(uint)(dataToRemove->fields)._version;
  uStack_10 = 2;
  DStack_11._version = (undefined4)uStack_9;
  DStack_11._index = uStack_9._4_4_;
  DStack_11._current.key = (Object *)0x0;
  DStack_11._current.value = (Object *)0x0;
  DStack_11._getEnumeratorRetType = 2;
  DStack_11._36_4_ = 0;
  pDStack_5 = dataToRemove;
  DStack_11._dictionary = dataToRemove;
  do {
    while( true ) {
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_11,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
        source = DStack_11._current.value;
        key = DStack_11._current.key;
        if (bVar12 == 0) {
          return;
        }
        pOStack_13 = DStack_11._current.key;
        pDStack_14 = (Dictionary_2_System_Object_System_Object_ *)DStack_11._current.value;
        if ((Dictionary_2_System_Object_System_Object_ *)DStack_11._current.value !=
            (Dictionary_2_System_Object_System_Object_ *)0x0) break;
        if (this_00 ==
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Remove
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,DStack_11._current.key,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                  );
      }
      bVar15 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((((((Dictionary_2_System_Object_System_Object___Class *)(DStack_11._current.value)->klass)
            ->_1).naturalAligment < bVar15) ||
          ((Dictionary_2_System_Object_System_Object___Class *)
           (((Dictionary_2_System_Object_System_Object___Class *)(DStack_11._current.value)->klass)
           ->_1).typeHierarchy[(ulonglong)bVar15 - 1] !=
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) ||
         ((Dictionary_2_System_Object_System_Object_ *)DStack_11._current.value ==
          (Dictionary_2_System_Object_System_Object_ *)0x0)) break;
      if (this_00 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) {
code_?:
        FUN_?();
        goto code_?;
      }
      iVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,DStack_11._current.key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar16 < 0) {
        func_?(&
                            MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                           );
        lVar17 = func_?(&pOStack_13);
        if (lVar17 == 0) {
          pSVar18 = (String *)func_?(&StringLiteral_Target_hashtable_doesn_t_contain);
        }
        else {
          pSVar18 = (String *)func_?(&StringLiteral_Target_hashtable_doesn_t_contain);
          FUN_?(lVar17);
          str1 = (Dictionary_2_System_Object_System_Object_ *)func_?(3,lVar17);
        }
        str2 = (String *)func_?(&::StringLiteral__);
        pSVar18 = mscorlib.dll::System::String::String_Concat_5
                            (pSVar18,(String *)str1,str2,(MethodInfo *)0x0);
        uVar19 = func_?(&TypeInfo__System__ArgumentException);
        this_01 = (InvalidEnumArgumentException *)func_?(uVar19);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(this_01,pSVar18,(MethodInfo *)0x0);
        uVar19 = func_?(&
                                     MethodInfo__MV__Common__CommonUtils__PartialRemoveFromHashtable_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__Collections__Generic__Dictionary<System::Object,_System::Object>__bool_
                                    );
        FUN_?(this_01,uVar19);
        goto code_?;
      }
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_00,key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      target = str1;
      if (pDVar20 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar15 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar20->klass->_1).naturalAligment < bVar15) ||
           (bVar21 = true,
           (Dictionary_2_System_Object_System_Object___Class *)
           (pDVar20->klass->_1).typeHierarchy[(ulonglong)bVar15 - 1] !=
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar21 = false;
        }
        if (bVar21) {
          target = pDVar20;
        }
      }
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
                (target,(Dictionary_2_System_Object_System_Object_ *)source,0,(MethodInfo *)0x0);
    }
    if (this_00 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Remove
              ((Dictionary_2_System_Object_System_Object_ *)this_00,DStack_11._current.key,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
              );
  } while( true );
}


/* Void PartialUpdateWOData(Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_PartialUpdateWOData
               (MVWorldObject *this,Dictionary_2_System_Object_System_Object_ *newWOData,
               MethodInfo *method)

{
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields).data;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  ,newWOData,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Incompatible_types_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (newWOData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2 = 0;
  uStack_3 = 0;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pDStack_5 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  str1 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  uStack_9 = (ulonglong)(uint)(newWOData->fields)._version;
  uStack_10 = 2;
  DStack_11._version = (undefined4)uStack_9;
  DStack_11._index = uStack_9._4_4_;
  DStack_11._current.key = (Object *)0x0;
  DStack_11._current.value = (Object *)0x0;
  DStack_11._getEnumeratorRetType = 2;
  DStack_11._36_4_ = 0;
  uStack_12 = 0;
  pDStack_13 = &DStack_11;
  pDStack_5 = newWOData;
  DStack_11._dictionary = newWOData;
  while( true ) {
    bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      (&DStack_11,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                      );
    value = DStack_11._current.value;
    pOVar15 = DStack_11._current.key;
    if (bVar14 == 0) {
      return;
    }
    pOStack_16 = DStack_11._current.key;
    pDStack_17 = (Dictionary_2_System_Object_System_Object_ *)DStack_11._current.value;
    if ((Dictionary_2_System_Object_System_Object_ *)DStack_11._current.value ==
        (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    if (this_00 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) break;
    iVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,DStack_11._current.key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar18 < 0) {
      in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar15,value,
                 (InsertionBehavior__Enum)in_R9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    else {
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar15,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
        FUN_?();
        break;
      }
      lVar20 = FUN_?(&(pDVar19->klass->_0).byval_arg);
      lVar21 = FUN_?(&(((Dictionary_2_System_Object_System_Object___Class *)value->klass)->
                              _0).byval_arg);
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (lVar20 != lVar21) {
        values = (String__Array *)func_?(TypeInfo__System__String);
        FUN_?(values);
        FUN_?(values,0,StringLiteral_Incompatible_types_);
        FUN_?(pDVar19);
        pTVar22 = mscorlib.dll::System::Object::Object_GetType((Object *)pDVar19,(MethodInfo *)0x0);
        pDVar19 = str1;
        if (pTVar22 != (Type *)0x0) {
          FUN_?(pTVar22);
          pDVar19 = (Dictionary_2_System_Object_System_Object_ *)func_?(3,pTVar22);
        }
        FUN_?(values);
        FUN_?(values,1,pDVar19);
        FUN_?(values);
        uVar23 = func_?(&StringLiteral__and_);
        FUN_?(values,2,uVar23);
        func_?(&
                            MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                           );
        pOVar15 = (Object *)func_?(&pOStack_16);
        FUN_?(pOVar15);
        pTVar22 = mscorlib.dll::System::Object::Object_GetType(pOVar15,(MethodInfo *)0x0);
        pDVar19 = str1;
        if (pTVar22 != (Type *)0x0) {
          FUN_?(pTVar22);
          pDVar19 = (Dictionary_2_System_Object_System_Object_ *)func_?(3,pTVar22);
        }
        FUN_?(values);
        FUN_?(values,3,pDVar19);
        FUN_?(values);
        uVar23 = func_?(&StringLiteral__for_key__);
        FUN_?(values,4,uVar23);
        func_?(&
                            MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                           );
        lVar20 = func_?(&pOStack_16);
        if (lVar20 != 0) {
          FUN_?(lVar20);
          str1 = (Dictionary_2_System_Object_System_Object_ *)func_?(3,lVar20);
        }
        FUN_?(values);
        FUN_?(values,5,str1);
        FUN_?(values);
        func_?(&::StringLiteral__);
        FUN_?(values);
        pSVar24 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
        uVar23 = func_?(&TypeInfo__System__ArgumentException);
        pIVar25 = (InvalidEnumArgumentException *)func_?(uVar23);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(pIVar25,pSVar24,(MethodInfo *)0x0);
        uVar23 = func_?(&
                                     MethodInfo__MV__Common__CommonUtils__PartialUpdateHashtable_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                                    );
        FUN_?(pIVar25,uVar23);
        goto code_?;
      }
      bVar26 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar19->klass->_1).naturalAligment < bVar26) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar19->klass->_1).typeHierarchy[(ulonglong)bVar26 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar15,value,
                   (InsertionBehavior__Enum)in_R9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      else {
        bVar26 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((((Dictionary_2_System_Object_System_Object___Class *)value->klass)->_1).
             naturalAligment < bVar26) ||
           (bVar27 = true,
           (Dictionary_2_System_Object_System_Object___Class *)
           (((Dictionary_2_System_Object_System_Object___Class *)value->klass)->_1).typeHierarchy
           [(ulonglong)bVar26 - 1] !=
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar27 = false;
        }
        source = str1;
        if (bVar27) {
          source = (Dictionary_2_System_Object_System_Object_ *)value;
        }
        MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                  (pDVar19,source,(MethodInfo *)0x0);
      }
    }
  }
  FUN_?();
code_?:
  func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                     );
  lVar20 = func_?(&pOStack_16);
  if (lVar20 == 0) {
    pSVar24 = (String *)func_?(&StringLiteral_Update_table_contains_NULL_valye);
  }
  else {
    pSVar24 = (String *)func_?(&StringLiteral_Update_table_contains_NULL_valye);
    FUN_?(lVar20);
    str1 = (Dictionary_2_System_Object_System_Object_ *)func_?(3,lVar20);
  }
  str2 = (String *)func_?(&::StringLiteral__);
  pSVar24 = mscorlib.dll::System::String::String_Concat_5
                      (pSVar24,(String *)str1,str2,(MethodInfo *)0x0);
  uVar23 = func_?(&TypeInfo__System__ArgumentException);
  pIVar25 = (InvalidEnumArgumentException *)func_?(uVar23);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(pIVar25,pSVar24,(MethodInfo *)0x0);
  uVar23 = func_?(&
                               MethodInfo__MV__Common__CommonUtils__PartialUpdateHashtable_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                              );
  FUN_?(pIVar25,uVar23);
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean RemoveInputLink(Link) */

bool MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveInputLink
               (MVWorldObject *this,Link *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Remove_MV__WorldObject__Link_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).inputLinkRefs;
  if (this_00 != (List_1_MV_WorldObject_Link_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Remove
                      ((List_1_System_Object_ *)this_00,(Object *)link,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Remove_MV__WorldObject__Link_
                      );
    pAVar2 = (this->fields).OnInputLinkChanged;
    if (pAVar2 != (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) {
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,(this->fields).inputLinkRefs,
                 (pAVar2->fields)._._.method);
      return bVar1;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean RemoveObjectLink(ObjectLink) */

bool MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveObjectLink
               (MVWorldObject *this,ObjectLink *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  index = MVWorldObject_GetIndexOfObjectLink(this,link,(MethodInfo *)0x0);
  if (index != -1) {
    this_00 = (this->fields).objectLinkRefs;
    if (this_00 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)this_00,index,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__RemoveAt_int_
                );
      (*(this->klass->vtable).OnObjectLinkChanged.methodPtr)
                (this,1,link,(this->klass->vtable).OnObjectLinkChanged.method);
      return 1;
    }
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  return 0;
}


/* Boolean RemoveOutputLink(Link) */

bool MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveOutputLink
               (MVWorldObject *this,Link *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Remove_MV__WorldObject__Link_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).outputLinkRefs;
  if (this_00 != (List_1_MV_WorldObject_Link_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Remove
                      ((List_1_System_Object_ *)this_00,(Object *)link,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Remove_MV__WorldObject__Link_
                      );
    if ((this->fields).OnOutputLinkChanged !=
        (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) {
      pAVar2 = (this->fields).OnOutputLinkChanged;
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,(this->fields).outputLinkRefs,
                 (pAVar2->fields)._._.method);
    }
    return bVar1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* MVWorldObject ShallowCopy() */

MVWorldObject *
MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_ShallowCopy
          (MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__MVWorldObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVWorldObject *)FUN_?(this);
  if (pMVar1 != (MVWorldObject *)0x0) {
    bVar2 = (TypeInfo__MV__WorldObject__MVWorldObject->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__MV__WorldObject__MVWorldObject)) {
      FUN_?(pMVar1,TypeInfo__MV__WorldObject__MVWorldObject);
      pcVar3 = (code *)swi(3);
      pMVar1 = (MVWorldObject *)(*pcVar3)();
      return pMVar1;
    }
  }
  return pMVar1;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_ToString
                   (MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__owner_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__id__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__groupId__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__itemId__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__System__String);
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString
                     ((Enum *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar3)();
    return pSVar2;
  }
  FUN_?(lVar1,0,pSVar2);
  FUN_?(lVar1,1,StringLiteral__id__);
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this->fields,(MethodInfo *)0x0);
  FUN_?(lVar1,2,pSVar2);
  FUN_?(lVar1,3,StringLiteral__groupId__);
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).groupId,(MethodInfo *)0x0);
  FUN_?(lVar1,4,pSVar2);
  FUN_?(lVar1,5,StringLiteral__itemId__);
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).itemId,(MethodInfo *)0x0);
  FUN_?(lVar1,6,pSVar2);
  FUN_?(lVar1,7,StringLiteral__owner_);
  mscorlib.dll::System::Int32::Int32_ToString
            ((Int32 *)&(this->fields).ownerActorNr,(MethodInfo *)0x0);
  FUN_?(lVar1,8);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (lVar1 == 0) {
    uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar4);
    pSVar2 = (String *)func_?(&StringLiteral_values);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,pSVar2,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__System__String__Concat_System__String____);
    FUN_?(this_00,uVar4);
    pcVar3 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar3)();
    return pSVar2;
  }
  if (*(int *)(lVar1 + 0x18) < 2) {
    if (*(longlong *)(lVar1 + 0x18) == 0) {
      return (String *)**(undefined8 **)(lRam_? + 0xb8);
    }
    if (*(int *)(lVar1 + 0x18) == 0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar3)();
      return pSVar2;
    }
    if (*(String **)(lVar1 + 0x20) != (String *)0x0) {
      return *(String **)(lVar1 + 0x20);
    }
  }
  else {
    plVar5 = (longlong *)(lVar1 + 0x20);
    values = (String__Array *)0x0;
    pSVar6 = values;
    pSVar7 = values;
    while (uVar8 = (uint)pSVar6, (int)uVar8 < (int)*(uint *)(lVar1 + 0x18)) {
      if (*(uint *)(lVar1 + 0x18) <= uVar8) goto code_?;
      if (*plVar5 != 0) {
        pSVar7 = (String__Array *)
                  ((longlong)pSVar7->vector + (longlong)*(int *)(*plVar5 + 0x10) + -0x20);
      }
      plVar5 = plVar5 + 1;
      pSVar6 = (String__Array *)(ulonglong)(uVar8 + 1);
    }
    if (0x7fffffff < (longlong)pSVar7) {
      uVar4 = func_?(&TypeInfo__System__OutOfMemoryException);
      this_02 = (OutOfMemoryException *)func_?(uVar4);
      mscorlib.dll::System::OutOfMemoryException::OutOfMemoryException__ctor
                (this_02,(MethodInfo *)0x0);
      uVar4 = func_?(&MethodInfo__System__String__Concat_System__String____);
      FUN_?(this_02,uVar4);
      pcVar3 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar3)();
      return pSVar2;
    }
    iVar9 = (int)pSVar7;
    if (iVar9 != 0) {
      pSVar2 = (String *)FUN_?((ulonglong)pSVar7 & 0xffffffff);
      plVar5 = (longlong *)(lVar1 + 0x20);
      pSVar6 = values;
      pSVar7 = values;
code_?:
      do {
        iVar10 = (int)pSVar6;
        uVar8 = (uint)pSVar7;
        if (*(int *)(lVar1 + 0x18) <= (int)uVar8) {
code_?:
          if (iVar10 == iVar9) {
            return pSVar2;
          }
          lVar1 = FUN_?(lVar1);
          pSVar11 = TypeInfo__System__String;
          if ((lVar1 != 0) &&
             (values = (String__Array *)FUN_?(lVar1), values == (String__Array *)0x0)) {
            FUN_?(lVar1,pSVar11);
            pcVar3 = (code *)swi(3);
            pSVar2 = (String *)(*pcVar3)();
            return pSVar2;
          }
          pSVar2 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
          return pSVar2;
        }
        if (*(uint *)(lVar1 + 0x18) <= uVar8) goto code_?;
        lVar12 = *plVar5;
        if ((lVar12 != 0) && (*(int *)(lVar12 + 0x10) != 0)) {
          iVar13 = *(int *)(lVar12 + 0x10);
          if (iVar9 - iVar10 < iVar13) {
            iVar10 = -1;
            goto code_?;
          }
          if (pSVar2 == (String *)0x0) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            pSVar2 = (String *)(*pcVar3)();
            return pSVar2;
          }
          if ((pSVar2->fields)._stringLength - iVar10 < iVar13) {
            uVar4 = func_?(&TypeInfo__System__IndexOutOfRangeException);
            this_01 = (IndexOutOfRangeException *)func_?(uVar4);
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                      (this_01,(MethodInfo *)0x0);
            uVar4 = func_?(&
                                        MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                       );
            FUN_?(this_01,uVar4);
            pcVar3 = (code *)swi(3);
            pSVar2 = (String *)(*pcVar3)();
            return pSVar2;
          }
          src = (uint8_t *)(lVar12 + 0x14);
          dest = &(pSVar2->fields)._firstChar + iVar10;
          uVar14 = (ulonglong)(uint)(iVar13 * 2);
          if ((uVar14 <= (ulonglong)((longlong)dest - (longlong)src)) &&
             (uVar14 <= (ulonglong)((longlong)src - (longlong)dest))) {
            mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                      ((uint8_t *)dest,src,iVar13 * 2,(MethodInfo *)0x0);
            pSVar6 = (String__Array *)(ulonglong)(uint)(iVar10 + iVar13);
            pSVar7 = (String__Array *)(ulonglong)(uVar8 + 1);
            plVar5 = plVar5 + 1;
            goto code_?;
          }
          FUN_?(dest,src,uVar14);
          pSVar6 = (String__Array *)(ulonglong)(uint)(iVar10 + iVar13);
        }
        pSVar7 = (String__Array *)(ulonglong)(uVar8 + 1);
        plVar5 = plVar5 + 1;
      } while( true );
    }
  }
  return (String *)**(undefined8 **)(lRam_? + 0xb8);
}


/* MVWorldObject() */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject__ctor
               (MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_MV_WorldObject_Link_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).outputLinkRefs = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).outputLinkRefs >> 0xc);
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
  pLVar1 = (List_1_MV_WorldObject_Link_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).inputLinkRefs = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).inputLinkRefs >> 0xc);
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
  this_00 = (List_1_MV_WorldObject_ObjectLink_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>)
  ;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).objectLinkRefs = this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).objectLinkRefs >> 0xc);
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
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).runTimeData = (Dictionary_2_System_Object_System_Object_ *)this_01;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).runTimeData >> 0xc);
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


/* Vector3 get_Position() */

Vector3 * MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_Position
                    (Vector3 *__return_storage_ptr__,MVWorldObject *this,MethodInfo *method)

{
  fVar1 = (this->fields).position.z;
  fVar2 = (this->fields).position.y;
  __return_storage_ptr__->x = (this->fields).position.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Quaternion get_Rotation() */

Quaternion *
MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_Rotation
          (Quaternion *__return_storage_ptr__,MVWorldObject *this,MethodInfo *method)

{
  fVar1 = (this->fields).rotation.y;
  fVar2 = (this->fields).rotation.z;
  fVar3 = (this->fields).rotation.w;
  __return_storage_ptr__->x = (this->fields).rotation.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->w = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 get_Scale() */

Vector3 * MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_Scale
                    (Vector3 *__return_storage_ptr__,MVWorldObject *this,MethodInfo *method)

{
  fVar1 = (this->fields).scale.z;
  fVar2 = (this->fields).scale.y;
  __return_storage_ptr__->x = (this->fields).scale.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Vector3 get_WorldPosition() */

Vector3 * MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldPosition
                    (Vector3 *__return_storage_ptr__,MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  __return_storage_ptr__->x = (pVVar1->zeroVector).x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Quaternion get_WorldRotation() */

Quaternion *
MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
          (Quaternion *__return_storage_ptr__,MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  __return_storage_ptr__->x = (pQVar1->identityQuaternion).x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  __return_storage_ptr__->w = fVar4;
  return __return_storage_ptr__;
}


/* Void set_Position(Vector3) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_set_Position
               (MVWorldObject *this,Vector3 *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  (this->fields).position.x = value->x;
  (this->fields).position.y = fVar1;
  (this->fields).position.z = fVar2;
  return;
}


/* Void set_Rotation(Quaternion) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_set_Rotation
               (MVWorldObject *this,Quaternion *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  fVar3 = value->w;
  (this->fields).rotation.x = value->x;
  (this->fields).rotation.y = fVar1;
  (this->fields).rotation.z = fVar2;
  (this->fields).rotation.w = fVar3;
  return;
}


/* Void set_Scale(Vector3) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_set_Scale
               (MVWorldObject *this,Vector3 *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  (this->fields).scale.x = value->x;
  (this->fields).scale.y = fVar1;
  (this->fields).scale.z = fVar2;
  return;
}

