
/* Object2ObjectSnapData GetObject2ObjectSnapData(GameObject) */

Object2ObjectSnapData *
Assembly-CSharp.dll::RTG::Object2ObjectSnapDataDb::Object2ObjectSnapDataDb_GetObject2ObjectSnapData
          (Object2ObjectSnapDataDb *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>__Add_UnityEngine__GameObject__RTG__Object2ObjectSnapData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>__ContainsKey_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>__get_Item_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Object2ObjectSnapData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields)._objectToSnapData;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (pDVar1,(Object *)gameObject,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>__ContainsKey_UnityEngine__GameObject_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      pOVar3 = (Object2ObjectSnapData *)FUN_?(TypeInfo__RTG__Object2ObjectSnapData);
      Object2ObjectSnapData::Object2ObjectSnapData__ctor(pOVar3,(MethodInfo *)0x0);
      if (pOVar3 != (Object2ObjectSnapData *)0x0) {
        bVar4 = Object2ObjectSnapData::Object2ObjectSnapData_Initialize
                          (pOVar3,gameObject,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          return (Object2ObjectSnapData *)0x0;
        }
        this_00 = (this->fields)._objectToSnapData;
        if (this_00 != (Dictionary_2_UnityEngine_GameObject_RTG_Object2ObjectSnapData_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)gameObject,
                     (Object *)pOVar3,CONCAT31((int3)((uint)in_R9D >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>__Add_UnityEngine__GameObject__RTG__Object2ObjectSnapData_
                     ->klass->rgctx_data[0x22].method);
          return pOVar3;
        }
      }
    }
    else {
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(this->fields)._objectToSnapData;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
        uVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (pDVar1,(Object *)gameObject,
                           MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>__get_Item_UnityEngine__GameObject_
                           ->klass->rgctx_data[0x21].method);
        if ((int)uVar5 < 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                    ((Object *)gameObject,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          pOVar3 = (Object2ObjectSnapData *)(*pcVar6)();
          return pOVar3;
        }
        pDVar7 = (pDVar1->fields)._entries;
        if (pDVar7 != (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                       *)0x0) {
          if (uVar5 < (uint)pDVar7->max_length) {
            return (Object2ObjectSnapData *)pDVar7->vector[(int)uVar5].value;
          }
          FUN_?();
          pcVar6 = (code *)swi(3);
          pOVar3 = (Object2ObjectSnapData *)(*pcVar6)();
          return pOVar3;
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        pOVar3 = (Object2ObjectSnapData *)(*pcVar6)();
        return pOVar3;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pOVar3 = (Object2ObjectSnapData *)(*pcVar6)();
  return pOVar3;
}


/* Object2ObjectSnapDataDb() */

void Assembly-CSharp.dll::RTG::Object2ObjectSnapDataDb::Object2ObjectSnapDataDb__ctor
               (Object2ObjectSnapDataDb *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>__Singleton__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._objectToSnapData =
       (Dictionary_2_UnityEngine_GameObject_RTG_Object2ObjectSnapData_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

