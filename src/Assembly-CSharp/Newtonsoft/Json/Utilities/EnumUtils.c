
/* IList`1[Newtonsoft.Json.Schema.JsonSchemaType] GetFlagsValues[JsonSchemaType](JsonSchemaType) */

IList_1_Newtonsoft_Json_Schema_JsonSchemaType_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils_GetFlagsValues
          (JsonSchemaType__Enum value,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  handle.value = *method->parameters;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  mscorlib.dll::System::Type::Type_GetTypeFromHandle
            ((RuntimeTypeHandle)TypeRef__System__FlagsAttribute,(MethodInfo *)0x0);
  if (pTVar4 != (Type *)0x0) {
    cVar5 = (*(code *)(pTVar4->klass->vtable).__unknown_2.method)();
    if (cVar5 == '\0') {
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      args = (Object__Array *)func_?();
      func_?();
      func_?(args,pTVar4);
      func_?();
      message = StringUtils::StringUtils_FormatWith
                          (StringLiteral_Enum_type__0__is_not_a_set_of_fl,(IFormatProvider *)pCVar6,
                           args,(MethodInfo *)0x0);
      this_02 = (IsolatedStorageException *)func_?();
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1(this_02,message,(MethodInfo *)0x0);
      func_?();
    }
    else {
      if ((method->parameters[1][0x17].type & 1) == 0) {
        func_?();
      }
      pOVar7 = (Object *)func_?();
      if (pOVar7 != (Object *)0x0) {
        pTVar4 = mscorlib.dll::System::Object::Object_GetType(pOVar7,(MethodInfo *)0x0);
        func_?();
        if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
          func_?();
        }
        mscorlib.dll::System::Enum::Enum_GetUnderlyingType(pTVar4,(MethodInfo *)0x0);
        if ((method->parameters[1][0x17].type & 1) == 0) {
          func_?();
        }
        pOVar7 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?();
        }
        pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?();
        }
        mscorlib.dll::System::Convert::Convert_ToUInt64_15
                  (pOVar7,(IFormatProvider *)pCVar6,(MethodInfo *)0x0);
        pMVar8 = (MethodInfo *)&UNK_?;
        this = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
               (*(code *)method->parameters[2]->data)();
        if ((method->parameters[3][0x17].type & 1) == 0) {
          func_?();
        }
        pIVar9 = (IList_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)func_?();
        pUStack_10 = (UInt64__Class *)method->parameters[4];
        pIVar11 = pIVar9;
        (*(code *)(pUStack_10->_0).image)();
        if (this != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
          pIVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_IEnumerable_GetEnumerator
                              (this,
                               MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Utilities::EnumValue<unsigned_long>_>__GetEnumerator__
                              );
          uStack_1 = 0;
          while (pIVar12 != (IEnumerator *)0x0) {
            cVar5 = func_?();
            if (cVar5 == '\0') {
              pMVar8->methodPointer = (Il2CppMethodPointer)0xed;
              uStack_1 = 0xffffffff;
              if (pIVar12 != (IEnumerator *)0x0) {
                func_?();
              }
              if (pIVar9 != (IList_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)0x0) {
                if ((method->parameters[5][0x17].type & 1) == 0) {
                  func_?();
                }
                iVar13 = func_?();
                if (iVar13 == 0) {
                  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (this_01,(Object *)0x0,method->parameters[6],
                             MethodInfo__System__Func<Newtonsoft::Json::Utilities::EnumValue<unsigned_long>,_bool>__Func_System__Object__void__
                            );
                  pEVar14 = System.Core.dll::System::Linq::Enumerable::Enumerable_SingleOrDefault_6
                                      ((IEnumerable_1_Newtonsoft_Json_Utilities_EnumValue_1_System_UInt64_
                                        *)this,(Func_2_Newtonsoft_Json_Utilities_EnumValue_1_System_UInt64_Boolean_
                                                *)this_01,
                                       Newtonsoft__Json__Utilities__EnumValue<unsigned_long>_MethodInfo__System__Linq__Enumerable__SingleOrDefault<Newtonsoft::Json::Utilities::EnumValue<unsigned_long>_>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Utilities::EnumValue<unsigned_long>_>__System__Func<Newtonsoft::Json::Utilities::EnumValue<unsigned_long>,_bool>_
                                      );
                  if (pEVar14 != (EnumValue_1_System_UInt64_ *)0x0) {
                    func_?();
                    func_?();
                  }
                }
                *unaff_FS_OFFSET = uStack_3;
                return pIVar9;
              }
              break;
            }
            pIVar15 = pIVar12->klass;
            uVar16 = 0;
            uVar17._0_1_ = (pIVar15->_1).rank;
            uVar17._1_1_ = (pIVar15->_1).minimumAlignment;
            if (uVar17 != 0) {
              do {
                if (pIVar15->interfaceOffsets[uVar16].interfaceType ==
                    (Il2CppClass *)
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Utilities::EnumValue<unsigned_long>_>
                   ) {
                  ppMVar18 = &(&(pIVar15->vtable).get_Current)
                              [pIVar15->interfaceOffsets[uVar16].offset].method;
                  goto code_?;
                }
                uVar16 = uVar16 + 1;
              } while (uVar16 < uVar17);
            }
            ppMVar18 = (MethodInfo **)func_?();
code_?:
            this_00 = (Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument_
                       *)(*(code *)*ppMVar18)();
            if (this_00 ==
                (Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument_
                 *)0x0) break;
            CVar19 = mscorlib.dll::System::
                     Array+ArrayReadOnlyList`1[T]+<GetEnumerator>c__Iterator0[System::Reflection::
                     CustomAttributeTypedArgument]::
                     Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument__System_Collections_Generic_IEnumerator_T__get_Current
                               (this_00,
                                MethodInfo__Newtonsoft__Json__Utilities__EnumValue<unsigned_long>__get_Value__
                               );
            CVar20 = mscorlib.dll::System::
                     Array+ArrayReadOnlyList`1[T]+<GetEnumerator>c__Iterator0[System::Reflection::
                     CustomAttributeTypedArgument]::
                     Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument__System_Collections_Generic_IEnumerator_T__get_Current
                               (this_00,
                                MethodInfo__Newtonsoft__Json__Utilities__EnumValue<unsigned_long>__get_Value__
                               );
            CVar21.value = (Object *)((uint)CVar19.value & (uint)pIVar11);
            CVar21.argumentType = (Type *)((uint)CVar19.argumentType & (uint)pUStack_10);
            if ((CVar20 == CVar21) &&
               (pMVar8 = 
                MethodInfo__Newtonsoft__Json__Utilities__EnumValue<unsigned_long>__get_Value__,
               CVar21 = mscorlib.dll::System::
                        Array+ArrayReadOnlyList`1[T]+<GetEnumerator>c__Iterator0[System::Reflection
                        ::CustomAttributeTypedArgument]::
                        Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument__System_Collections_Generic_IEnumerator_T__get_Current
                                  (this_00,
                                   MethodInfo__Newtonsoft__Json__Utilities__EnumValue<unsigned_long>__get_Value__
                                  ), CVar21 != (CustomAttributeTypedArgument)0x0)) {
              pMVar8 = (MethodInfo *)&UNK_?;
              mscorlib.dll::System::Array+ArrayReadOnlyList`1[T]+<GetEnumerator>c__Iterator0[System
              ::Reflection::CustomAttributeTypedArgument]::
              Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument__System_Collections_Generic_IEnumerator_T__get_Current
                        (this_00,
                         MethodInfo__Newtonsoft__Json__Utilities__EnumValue<unsigned_long>__get_Value__
                        );
              pUStack_10 = TypeInfo__System__UInt64;
              pIVar11 = (IList_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)&UNK_?;
              pOVar7 = (Object *)func_?();
              if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                   0x2000000) != 0) &&
                 ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__Globalization__CultureInfo);
              }
              pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::
                       CultureInfo_get_CurrentCulture((MethodInfo *)0x0);
              if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__Convert);
              }
              mscorlib.dll::System::Convert::Convert_ChangeType_1
                        (pOVar7,(Type *)this_00,(IFormatProvider *)pCVar6,(MethodInfo *)0x0);
              if (pIVar9 == (IList_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)0x0) break;
              func_?();
              func_?();
              func_?();
              func_?();
            }
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar22 = (code *)swi(3);
  pIVar11 = (IList_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)(*pcVar22)();
  return pIVar11;
}


/* Object GetMaximumValue[Object](Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils_GetMaximumValue
                   (Type *enumType,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (enumType == (Type *)0x0) {
    this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,StringLiteral_enumType,(MethodInfo *)0x0);
  }
  else {
    if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Enum);
    }
    pTVar4 = mscorlib.dll::System::Enum::Enum_GetUnderlyingType(enumType,(MethodInfo *)0x0);
    RVar5.value = *method->parameters;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar6 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar5,(MethodInfo *)0x0);
    if (pTVar6 != (Type *)0x0) {
      cVar7 = (*(code *)(pTVar6->klass->vtable).IsAssignableFrom.method)();
      if (cVar7 == '\0') {
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?();
        }
        pCVar8 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
        args = (Object__Array *)func_?();
        if ((pTVar4 != (Type *)0x0) &&
           (pOVar9 = (Object *)(*(code *)(pTVar4->klass->vtable).__unknown.method)(),
           args != (Object__Array *)0x0)) {
          if ((pOVar9 == (Object *)0x0) || (iVar10 = func_?(), iVar10 != 0)) {
            if (args->max_length == 0) goto code_?;
            args->vector[0] = pOVar9;
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            message = mscorlib.dll::System::String::String_Format_4
                                ((IFormatProvider *)pCVar8,
                                 StringLiteral_TEnumType_is_not_assignable_from,args,
                                 (MethodInfo *)0x0);
            this = (ArgumentException *)func_?();
            mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
                      (this,message,(MethodInfo *)0x0);
          }
          else {
            func_?();
          }
          goto code_?;
        }
      }
      else {
        pIVar11 = EnumUtils_GetValues(enumType,(MethodInfo *)0x0);
        handle = TypeRef__System__FlagsAttribute;
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?();
        }
        mscorlib.dll::System::Type::Type_GetTypeFromHandle
                  ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        cVar7 = (*(code *)(enumType->klass->vtable).__unknown_2.method)();
        if (cVar7 == '\0') {
          if (pIVar11 != (IList_1_System_Object_ *)0x0) {
            iVar10 = func_?();
            uStack_1 = 2;
            while (iVar10 != 0) {
              cVar7 = func_?();
              if (cVar7 == '\0') {
joined_?:
                uStack_1 = 0xffffffff;
                if (iVar10 != 0) {
                  uStack_1 = 0xffffffff;
                  func_?();
                }
                pOVar9 = (Object *)func_?();
                RVar5.value = *method->parameters;
                if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                  func_?();
                }
                pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar5,(MethodInfo *)0x0)
                ;
                if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr
                     & 0x2000000) != 0) &&
                   ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
                  func_?();
                }
                pCVar8 = mscorlib.dll::System::Globalization::CultureInfo::
                         CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
                  func_?();
                }
                mscorlib.dll::System::Convert::Convert_ChangeType_1
                          (pOVar9,pTVar4,(IFormatProvider *)pCVar8,(MethodInfo *)0x0);
                if ((method->parameters[1][0x17].type & 1) == 0) {
                  func_?();
                }
                pOVar9 = (Object *)func_?();
                *unaff_FS_OFFSET = uStack_3;
                return pOVar9;
              }
              func_?();
              if ((method->parameters[1][0x17].type & 1) == 0) {
                func_?();
              }
              iVar12 = func_?();
              if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                   0x2000000) != 0) &&
                 ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
                func_?();
              }
              mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
              if (iVar12 == 0) break;
              func_?();
              func_?();
            }
          }
        }
        else if (pIVar11 != (IList_1_System_Object_ *)0x0) {
          iVar10 = func_?();
          uStack_1 = 0;
          while (iVar10 != 0) {
            cVar7 = func_?();
            if (cVar7 == '\0') goto joined_?;
            func_?();
            if ((method->parameters[1][0x17].type & 1) == 0) {
              func_?();
            }
            iVar12 = func_?();
            if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
              func_?();
            }
            mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
            if (iVar12 == 0) break;
            func_?();
          }
        }
      }
    }
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  pOVar9 = (Object *)(*pcVar13)();
  return pOVar9;
}


/* IList`1[System.String] GetNames(Type) */

IList_1_System_String_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils_GetNames
          (Type *enumType,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  pMStack_3 = (MethodInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pMStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (enumType != (Type *)0x0) {
    bVar4 = mscorlib.dll::System::Type::Type_get_IsEnum(enumType,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      pSVar5 = (String *)(*(code *)(enumType->klass->vtable).__unknown.method)();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Type__,pSVar5,StringLiteral___is_not_an_enum_,
                           (MethodInfo *)0x0);
      this_01 = (ArgumentException *)func_?();
      mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
                (this_01,pSVar5,(MethodInfo *)0x0);
      pMStack_3 = MethodInfo__Newtonsoft__Json__Utilities__EnumUtils__GetNames_System__Type_;
      func_?();
    }
    else {
      this = (List_1_UnityEngine_Vector4_ *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                (this,MethodInfo__System__Collections__Generic__List<System::String>__List__);
      source = mscorlib.dll::System::Type::Type_GetFields(enumType,(MethodInfo *)0x0);
      if (TypeInfo__Newtonsoft__Json__Utilities__EnumUtils->static_fields->__f__am_cache1 ==
          (Func_2_System_Reflection_FieldInfo_Boolean_ *)0x0) {
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__Func<System::Reflection::FieldInfo,_bool>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,(Object *)0x0,
                   MethodInfo__Newtonsoft__Json__Utilities__EnumUtils___GetNames_m__2_System__Reflection__FieldInfo_
                   ,
                   MethodInfo__System__Func<System::Reflection::FieldInfo,_bool>__Func_System__Object__void__
                  );
        TypeInfo__Newtonsoft__Json__Utilities__EnumUtils->static_fields->__f__am_cache1 =
             (Func_2_System_Reflection_FieldInfo_Boolean_ *)this_00;
      }
      pIVar6 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                         ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source,
                          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                           *)TypeInfo__Newtonsoft__Json__Utilities__EnumUtils->static_fields->
                             __f__am_cache1,
                          System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::FieldInfo>_System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>__System__Func<System::Reflection::FieldInfo,_bool>_
                         );
      if (pIVar6 != (IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)0x0) {
        piVar7 = (int *)func_?(0,
                                        TypeInfo__System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>
                                        ,pIVar6);
        uStack_1 = 0;
        while (piVar7 != (int *)0x0) {
          cVar8 = func_?();
          if (cVar8 == '\0') {
            uStack_1 = 0xffffffff;
            if (piVar7 != (int *)0x0) {
              func_?();
            }
            *unaff_FS_OFFSET = pMStack_3;
            return (IList_1_System_String_ *)this;
          }
          uVar9 = 0;
          uVar10 = *(ushort *)(*piVar7 + 0xb6);
          if (uVar10 != 0) {
            iVar11 = *(int *)(*piVar7 + 0x58);
            do {
              if (*(IEnumerator_1_System_Reflection_FieldInfo___Class **)(iVar11 + (uint)uVar9 * 8)
                  == 
                  TypeInfo__System__Collections__Generic__IEnumerator<System::Reflection::FieldInfo>
                 ) {
                puVar12 = (undefined4 *)
                         (*piVar7 + (*(int *)(iVar11 + 4 + (uint)uVar9 * 8) + 0x18) * 8);
                goto code_?;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar10);
          }
          puVar12 = (undefined4 *)func_?();
code_?:
          piVar13 = (int *)(*(code *)*puVar12)();
          if ((piVar13 == (int *)0x0) ||
             (item = (**(code **)(*piVar13 + 0x100))(piVar13,*(undefined4 *)(*piVar13 + 0x104)),
             this == (List_1_UnityEngine_Vector4_ *)0x0)) break;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this,item,
                     MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                    );
        }
      }
    }
  }
  func_?(0);
  func_?();
  pcVar14 = (code *)swi(3);
  pIVar15 = (IList_1_System_String_ *)(*pcVar14)();
  return pIVar15;
}


/* EnumValues`1[System.Int64] GetNamesAndValues[Int64](Type) */

EnumValues_1_System_Int64_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils_GetNamesAndValues
          (Type *enumType,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (enumType == (Type *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,StringLiteral_enumType,(MethodInfo *)0x0);
    func_?();
  }
  else {
    ValidationUtils::ValidationUtils_ArgumentTypeIsEnum
              (enumType,StringLiteral_enumType,(MethodInfo *)0x0);
    pIStack_4 = EnumUtils_GetValues(enumType,(MethodInfo *)0x0);
    pIVar5 = EnumUtils_GetNames(enumType,(MethodInfo *)0x0);
    if (((*method->parameters)[0x17].type & 1) == 0) {
      func_?();
    }
    pEStack_6 = (EnumValues_1_System_Int64_ *)func_?();
    (*(code *)method->parameters[1]->data)();
    unaff_EDI = (Object__Array *)0x0;
    while( true ) {
      unaff_EBX = method;
      if (pIStack_4 == (IList_1_System_Object_ *)0x0) break;
      iVar7 = func_?();
      if (iVar7 <= (int)unaff_EDI) {
        *unaff_FS_OFFSET = uStack_3;
        return pEStack_6;
      }
      uStack_1 = 0;
      if (pIVar5 == (IList_1_System_String_ *)0x0) break;
      func_?();
      func_?();
      RVar8.value = method->parameters[2];
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar8,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                         ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ChangeType_1
                ((Object *)pCVar9,(Type *)pCVar9,(IFormatProvider *)pCVar9,(MethodInfo *)0x0);
      func_?();
      pIVar5 = (IList_1_System_String_ *)func_?();
      func_?();
      puVar10 = (undefined4 *)func_?();
      pIStack_4 = (IList_1_System_Object_ *)*puVar10;
      (*(code *)method->parameters[5]->data)();
      if (pEStack_6 == (EnumValues_1_System_Int64_ *)0x0) break;
      (*(code *)method->parameters[6]->data)();
      uStack_1 = 0xffffffff;
      unaff_EDI = (Object__Array *)((int)&unaff_EDI->klass + 1);
    }
  }
  func_?();
  func_?();
  func_?();
  RVar8.value = method->parameters[2];
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?();
  }
  mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar8,(MethodInfo *)0x0);
  func_?();
  func_?();
  value = (Object *)func_?();
  pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
    func_?();
  }
  mscorlib.dll::System::Convert::Convert_ToUInt64_15
            (value,(IFormatProvider *)pCVar9,(MethodInfo *)0x0);
  func_?();
  func_?();
  func_?();
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  message = mscorlib.dll::System::String::String_Format_4
                      ((IFormatProvider *)unaff_EBX,StringLiteral_Value_from_enum_with_the_underly,
                       unaff_EDI,(MethodInfo *)0x0);
  innerException = TypeInfo__System__Exception;
  this_00 = (Exception *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_3
            (this_00,message,(Exception *)innerException,(MethodInfo *)0x0);
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  pEVar12 = (EnumValues_1_System_Int64_ *)(*pcVar11)();
  return pEVar12;
}


/* EnumValues`1[System.UInt64] GetNamesAndValues[JsonSchemaType]() */

EnumValues_1_System_UInt64_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils_GetNamesAndValues_1
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle.value = *method->parameters;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  pEVar1 = EnumUtils_GetNamesAndValues_2
                     (enumType,
                      Newtonsoft__Json__Utilities__EnumValues<unsigned_long>_MethodInfo__Newtonsoft__Json__Utilities__EnumUtils__GetNamesAndValues<unsigned_long>_System__Type_
                     );
  return pEVar1;
}


/* EnumValues`1[System.UInt64] GetNamesAndValues[UInt64](Type) */

EnumValues_1_System_UInt64_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils_GetNamesAndValues_2
          (Type *enumType,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (enumType == (Type *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,StringLiteral_enumType,(MethodInfo *)0x0);
    func_?();
  }
  else {
    ValidationUtils::ValidationUtils_ArgumentTypeIsEnum
              (enumType,StringLiteral_enumType,(MethodInfo *)0x0);
    pIStack_4 = EnumUtils_GetValues(enumType,(MethodInfo *)0x0);
    pIVar5 = EnumUtils_GetNames(enumType,(MethodInfo *)0x0);
    if (((*method->parameters)[0x17].type & 1) == 0) {
      func_?();
    }
    pEStack_6 = (EnumValues_1_System_UInt64_ *)func_?();
    (*(code *)method->parameters[1]->data)();
    unaff_EDI = (Object__Array *)0x0;
    while( true ) {
      unaff_EBX = method;
      if (pIStack_4 == (IList_1_System_Object_ *)0x0) break;
      iVar7 = func_?();
      if (iVar7 <= (int)unaff_EDI) {
        *unaff_FS_OFFSET = uStack_3;
        return pEStack_6;
      }
      uStack_1 = 0;
      if (pIVar5 == (IList_1_System_String_ *)0x0) break;
      func_?();
      func_?();
      RVar8.value = method->parameters[2];
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar8,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                         ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ChangeType_1
                ((Object *)pCVar9,(Type *)pCVar9,(IFormatProvider *)pCVar9,(MethodInfo *)0x0);
      func_?();
      pIVar5 = (IList_1_System_String_ *)func_?();
      func_?();
      puVar10 = (undefined4 *)func_?();
      pIStack_4 = (IList_1_System_Object_ *)*puVar10;
      (*(code *)method->parameters[5]->data)();
      if (pEStack_6 == (EnumValues_1_System_UInt64_ *)0x0) break;
      (*(code *)method->parameters[6]->data)();
      uStack_1 = 0xffffffff;
      unaff_EDI = (Object__Array *)((int)&unaff_EDI->klass + 1);
    }
  }
  func_?();
  func_?();
  func_?();
  RVar8.value = method->parameters[2];
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?();
  }
  mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar8,(MethodInfo *)0x0);
  func_?();
  func_?();
  value = (Object *)func_?();
  pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
    func_?();
  }
  mscorlib.dll::System::Convert::Convert_ToUInt64_15
            (value,(IFormatProvider *)pCVar9,(MethodInfo *)0x0);
  func_?();
  func_?();
  func_?();
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  message = mscorlib.dll::System::String::String_Format_4
                      ((IFormatProvider *)unaff_EBX,StringLiteral_Value_from_enum_with_the_underly,
                       unaff_EDI,(MethodInfo *)0x0);
  innerException = TypeInfo__System__Exception;
  this_00 = (Exception *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_3
            (this_00,message,(Exception *)innerException,(MethodInfo *)0x0);
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  pEVar12 = (EnumValues_1_System_UInt64_ *)(*pcVar11)();
  return pEVar12;
}


/* IList`1[System.String] GetNames[Object]() */

IList_1_System_String_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils_GetNames_1
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle.value = *method->parameters;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  pIVar1 = EnumUtils_GetNames(enumType,(MethodInfo *)0x0);
  return pIVar1;
}


/* IList`1[System.Object] GetValues(Type) */

IList_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils_GetValues
          (Type *enumType,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (enumType != (Type *)0x0) {
    bVar4 = mscorlib.dll::System::Type::Type_get_IsEnum(enumType,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      pSVar5 = (String *)(*(code *)(enumType->klass->vtable).__unknown.method)();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Type__,pSVar5,StringLiteral___is_not_an_enum_,
                           (MethodInfo *)0x0);
      this_01 = (ArgumentException *)func_?();
      mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
                (this_01,pSVar5,(MethodInfo *)0x0);
      func_?();
    }
    else {
      this = (List_1_UnityEngine_Vector4_ *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                (this,MethodInfo__System__Collections__Generic__List<System::Object>__List__);
      source = mscorlib.dll::System::Type::Type_GetFields(enumType,(MethodInfo *)0x0);
      if (TypeInfo__Newtonsoft__Json__Utilities__EnumUtils->static_fields->__f__am_cache0 ==
          (Func_2_System_Reflection_FieldInfo_Boolean_ *)0x0) {
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__Func<System::Reflection::FieldInfo,_bool>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,(Object *)0x0,
                   MethodInfo__Newtonsoft__Json__Utilities__EnumUtils___GetValues_m__1_System__Reflection__FieldInfo_
                   ,
                   MethodInfo__System__Func<System::Reflection::FieldInfo,_bool>__Func_System__Object__void__
                  );
        TypeInfo__Newtonsoft__Json__Utilities__EnumUtils->static_fields->__f__am_cache0 =
             (Func_2_System_Reflection_FieldInfo_Boolean_ *)this_00;
      }
      pIVar6 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                         ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source,
                          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                           *)TypeInfo__Newtonsoft__Json__Utilities__EnumUtils->static_fields->
                             __f__am_cache0,
                          System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::FieldInfo>_System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>__System__Func<System::Reflection::FieldInfo,_bool>_
                         );
      if (pIVar6 != (IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)0x0) {
        piVar7 = (int *)func_?(0,
                                        TypeInfo__System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>
                                        ,pIVar6);
        uStack_1 = 0;
        while (piVar7 != (int *)0x0) {
          cVar8 = func_?();
          if (cVar8 == '\0') {
            uStack_1 = 0xffffffff;
            if (piVar7 != (int *)0x0) {
              func_?();
            }
            *unaff_FS_OFFSET = uStack_3;
            return (IList_1_System_Object_ *)this;
          }
          uVar9 = 0;
          uVar10 = *(ushort *)(*piVar7 + 0xb6);
          if (uVar10 != 0) {
            iVar11 = *(int *)(*piVar7 + 0x58);
            do {
              if (*(IEnumerator_1_System_Reflection_FieldInfo___Class **)(iVar11 + (uint)uVar9 * 8)
                  == 
                  TypeInfo__System__Collections__Generic__IEnumerator<System::Reflection::FieldInfo>
                 ) {
                puVar12 = (undefined4 *)
                         (*piVar7 + (*(int *)(iVar11 + 4 + (uint)uVar9 * 8) + 0x18) * 8);
                goto code_?;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar10);
          }
          puVar12 = (undefined4 *)func_?();
code_?:
          piVar13 = (int *)(*(code *)*puVar12)();
          if ((piVar13 == (int *)0x0) ||
             (item = (**(code **)(*piVar13 + 0x148))
                               (piVar13,enumType,*(undefined4 *)(*piVar13 + 0x14c)),
             this == (List_1_UnityEngine_Vector4_ *)0x0)) break;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this,item,
                     MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                    );
        }
      }
    }
  }
  func_?(0);
  func_?();
  pcVar14 = (code *)swi(3);
  pIVar15 = (IList_1_System_Object_ *)(*pcVar14)();
  return pIVar15;
}


/* IList`1[System.Object] GetValues[Object]() */

IList_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils_GetValues_1
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle.value = *method->parameters;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  pIVar1 = EnumUtils_GetValues(enumType,(MethodInfo *)0x0);
  uVar2 = (*(code *)method->parameters[1]->data)(pIVar1,method->parameters[1]);
  pIVar1 = (IList_1_System_Object_ *)
           (*(code *)method->parameters[2]->data)(uVar2,method->parameters[2]);
  return pIVar1;
}


/* Boolean <GetFlagsValues`1>m__0[JsonSchemaType](EnumValue`1[System.UInt64]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils__GetFlagsValues_1_m__0
               (EnumValue_1_System_UInt64_ *v,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (v != (EnumValue_1_System_UInt64_ *)0x0) {
    CVar1 = mscorlib.dll::System::Array+ArrayReadOnlyList`1[T]+<GetEnumerator>c__Iterator0[System::
            Reflection::CustomAttributeTypedArgument]::
            Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument__System_Collections_Generic_IEnumerator_T__get_Current
                      ((Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument_
                        *)v,
                       MethodInfo__Newtonsoft__Json__Utilities__EnumValue<unsigned_long>__get_Value__
                      );
    if (CVar1 == (CustomAttributeTypedArgument)0x0) {
      return 1;
    }
    return 0;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean <GetNames>m__2(FieldInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils__GetNames_m__2
               (FieldInfo_1 *field,MethodInfo *method)

{
  if (field != (FieldInfo_1 *)0x0) {
    uVar1 = (*(code *)(field->klass->vtable).__unknown_6.method)
                      (field,(field->klass->vtable).__unknown_7.methodPtr);
    return (byte)(uVar1 >> 6) & 1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

