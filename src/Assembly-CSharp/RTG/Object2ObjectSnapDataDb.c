
/* Object2ObjectSnapData GetObject2ObjectSnapData(GameObject) */

Object2ObjectSnapData *
Assembly-CSharp.dll::RTG::Object2ObjectSnapDataDb::Object2ObjectSnapDataDb_GetObject2ObjectSnapData
          (Object2ObjectSnapDataDb *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>__Add_UnityEngine__GameObject__RTG__Object2ObjectSnapData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>__ContainsKey_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>__get_Item_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__RTG__Object2ObjectSnapData);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields)._objectToSnapData;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)gameObject,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>__ContainsKey_UnityEngine__GameObject_
                      );
    if (bVar2 == 0) {
      pOVar3 = (Object2ObjectSnapData *)func_?(TypeInfo__RTG__Object2ObjectSnapData);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__RTG__AABB);
        func_?(&TypeInfo__RTG__BoxFaceAreaDesc);
        func_?(&TypeRef__RTG__BoxFace);
        func_?(&TypeInfo__System__Enum);
        func_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__
                       );
        func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
        func_?(&TypeInfo__System__Type);
        cRam_? = '\x01';
      }
      handle = TypeRef__RTG__BoxFace;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Enum);
      }
      pAVar5 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar4,(MethodInfo *)0x0);
      if (pAVar5 != (Array *)0x0) {
        iVar6 = mscorlib.dll::System::Array::Array_get_Length(pAVar5,(MethodInfo *)0x0);
        pAVar7 = (AABB__Array *)func_?(TypeInfo__RTG__AABB,iVar6);
        ppAVar8 = &(pOVar3->fields)._snapAreaBounds;
        *ppAVar8 = pAVar7;
        func_?(ppAVar8,pAVar7);
        pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)TypeRef__RTG__BoxFace,(MethodInfo *)0x0);
        pAVar5 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar4,(MethodInfo *)0x0);
        if (pAVar5 != (Array *)0x0) {
          iVar6 = mscorlib.dll::System::Array::Array_get_Length(pAVar5,(MethodInfo *)0x0);
          pBVar9 = (BoxFaceAreaDesc__Array *)func_?(TypeInfo__RTG__BoxFaceAreaDesc,iVar6)
          ;
          ppBVar10 = &(pOVar3->fields)._snapAreaDesc;
          *ppBVar10 = pBVar9;
          func_?(ppBVar10,pBVar9);
          this_01 = (List_1_UnityEngine_Vector3_ *)
                    func_?(
                                   TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>
                                   );
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
          ppLVar11 = &(pOVar3->fields)._vertsBuffer;
          *ppLVar11 = this_01;
          func_?(ppLVar11,this_01);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)pOVar3,ExceptionArgument__Enum_obj,in_stack_12);
          bVar2 = Object2ObjectSnapData::Object2ObjectSnapData_Initialize
                            (pOVar3,gameObject,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            return (Object2ObjectSnapData *)0x0;
          }
          this_00 = (this->fields)._objectToSnapData;
          if (this_00 != (Dictionary_2_UnityEngine_GameObject_RTG_Object2ObjectSnapData_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)gameObject,
                       (Object *)pOVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>__Add_UnityEngine__GameObject__RTG__Object2ObjectSnapData_
                      );
            return pOVar3;
          }
        }
      }
    }
    else {
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._objectToSnapData;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar1,(Object *)gameObject,
                            MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>__get_Item_UnityEngine__GameObject_
                           );
        return (Object2ObjectSnapData *)TVar13.m_Index;
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  pOVar3 = (Object2ObjectSnapData *)(*pcVar14)();
  return pOVar3;
}


/* Object2ObjectSnapDataDb() */

void Assembly-CSharp.dll::RTG::Object2ObjectSnapDataDb::Object2ObjectSnapDataDb__ctor
               (Object2ObjectSnapDataDb *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>
                   );
    func_?(&MethodInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>__Singleton__);
    func_?(&TypeInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::Object2ObjectSnapData>__Dictionary__
            );
  (this->fields)._objectToSnapData =
       (Dictionary_2_UnityEngine_GameObject_RTG_Object2ObjectSnapData_ *)this_00;
  func_?(&this->fields,this_00);
  if ((TypeInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>->_1).cctor_finished_or_no_cctor == 0)
  {
    func_?(TypeInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>);
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,
             MethodInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>__Singleton__);
  return;
}

