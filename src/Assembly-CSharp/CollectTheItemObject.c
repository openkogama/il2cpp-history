
/* Void InitializeGreyOutScript() */

void Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_InitializeGreyOutScript
               (CollectTheItemObject *this,MethodInfo *method)

{
  pGVar1 = (this->fields).greyOutObject;
  if (pGVar1 == (GreyOutObjectScript *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
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
  pLVar3 = (pGVar1->fields).pickupOriginalMaterials;
  if (pLVar3 != (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) {
    length = (pLVar3->fields)._size;
    uVar4 = 0;
    piVar5 = &(pLVar3->fields)._version;
    *piVar5 = *piVar5 + 1;
    (pLVar3->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pMVar6 = 
    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
    ;
    this_00 = (pGVar1->fields).pickupObject;
    if (this_00 != (GameObject *)0x0) {
      if ((
          UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                     );
      }
      p_Var10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_GetComponentsInChildren_4
                          (this_00,0,((pMVar6->field7_0x38).rgctx_data)->method);
      if (p_Var10 != (_Il2CppFullySharedGenericType__Array *)0x0) {
        pp_Var16 = p_Var10->vector;
        while( true ) {
          if ((int)p_Var10->max_length <= (int)uVar4) {
            return;
          }
          if ((uint)p_Var10->max_length <= uVar4) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          obj = (Object__Class *)*pp_Var16;
          item = (Object *)FUN_?(TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
          bVar7 = iRam_? != 0;
          *(undefined1 *)&item[2].klass = 1;
          item[1].klass = obj;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)(item + 1) >> 0xc);
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
          if (obj == (Object__Class *)0x0) break;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pcVar12 = (obj->_0).name;
          if (pcVar12 == (char *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          pMVar14 = (MonitorData *)(*pcRam_?)(pcVar12);
          bVar7 = iRam_? != 0;
          item[1].monitor = pMVar14;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&item[1].monitor >> 0xc);
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
          pMVar6 = 
          MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
          ;
          pLVar3 = (pGVar1->fields).pickupOriginalMaterials;
          if (pLVar3 == (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) break;
          piVar5 = &(pLVar3->fields)._version;
          *piVar5 = *piVar5 + 1;
          pGVar15 = (pLVar3->fields)._items;
          if (pGVar15 == (GreyOutObjectScript_PickupOriginalMaterials__Array *)0x0) break;
          uVar8 = (pLVar3->fields)._size;
          if (uVar8 < (uint)pGVar15->max_length) {
            (pLVar3->fields)._size = uVar8 + 1;
            FUN_?(pGVar15,(longlong)(int)uVar8,item);
            uVar4 = uVar4 + 1;
            pp_Var16 = pp_Var16 + 1;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)pLVar3,item,pMVar6->klass->rgctx_data[0xe].method);
            uVar4 = uVar4 + 1;
            pp_Var16 = pp_Var16 + 1;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean ShouldDoBlinking() */

bool Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_ShouldDoBlinking
               (CollectTheItemObject *this,MethodInfo *method)

{
  pCVar1 = (this->fields).blinker;
  if (pCVar1 == (CollectTheItemBlinker *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pCVar1->fields)._.visible == 0) {
    return 0;
  }
  fVar4 = (this->fields).fadeTimer;
  if (_UNK_? <= fVar4) {
    return 1;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pcRam_? = pcVar2;
  fVar6 = (float)(*pcRam_?)();
  (this->fields).fadeTimer = fVar6 + fVar4;
  return 0;
}


/* Void Update() */

void Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_Update
               (CollectTheItemObject *this,MethodInfo *method)

{
  this_00 = (this->fields).blinker;
  if (this_00 == (CollectTheItemBlinker *)0x0) {
DAT_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this_00->fields)._.visible != 0) {
    fVar2 = (this->fields).fadeTimer;
    if (_UNK_? <= fVar2) {
      if (this_00 != (CollectTheItemBlinker *)0x0) {
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_00,BlinkType__Enum_AboutToExpire,_UNK_?,
                   (MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                        ,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this == (CollectTheItemObject *)0x0) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pvVar3 = (this->fields)._._._._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar3,0);
        return;
      }
      goto DAT_?;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar5 = (float)(*pcRam_?)();
    (this->fields).fadeTimer = fVar5 + fVar2;
  }
  return;
}


/* Void set_EnableFading(Boolean) */

void Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_set_EnableFading
               (CollectTheItemObject *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,CONCAT71(in_register_00000011,value),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (CollectTheItemObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (this->fields)._._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar2,value);
  return;
}

