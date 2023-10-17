
/* IList`1[System.Int32Enum] GetFlagsValues[Int32Enum](Int32Enum) */

IList_1_System_Int32Enum_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils_GetFlagsValues
          (Int32Enum__Enum value,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Utilities::EnumValue<unsigned_long>_>__GetEnumerator__
                   );
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&MethodInfo__Newtonsoft__Json__Utilities__EnumValue<unsigned_long>__get_Value__)
    ;
    func_?(&TypeInfo__System__Enum);
    func_?(&
                    Newtonsoft__Json__Utilities__EnumValue<unsigned_long>_MethodInfo__System__Linq__Enumerable__SingleOrDefault<Newtonsoft::Json::Utilities::EnumValue<unsigned_long>_>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Utilities::EnumValue<unsigned_long>_>__System__Func<Newtonsoft::Json::Utilities::EnumValue<unsigned_long>,_bool>_
                   );
    func_?(&TypeRef__System__FlagsAttribute);
    func_?(&
                    TypeInfo__System__Func<Newtonsoft::Json::Utilities::EnumValue<unsigned_long>,_bool>
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Utilities::EnumValue<unsigned_long>_>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__System__UInt64);
    cRam_? = '\x01';
  }
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  mscorlib.dll::System::Type::Type_GetTypeFromHandle
            ((RuntimeTypeHandle)TypeRef__System__FlagsAttribute,(MethodInfo *)0x0);
  if (pTVar4 != (Type *)0x0) {
    cVar5 = (*(pTVar4->klass->vtable).__unknown_1.methodPtr)();
    if (cVar5 == '\0') {
      func_?();
      func_?();
      pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      func_?();
      args = (Object__Array *)func_?();
      func_?();
      func_?();
      func_?();
      pMVar7 = (MethodInfo *)0x0;
      pSVar8 = (String *)func_?(&StringLiteral_Enum_type__0__is_not_a_set_of_fl);
      pSVar8 = StringUtils::StringUtils_FormatWith(pSVar8,(IFormatProvider *)pCVar6,args,pMVar7);
      func_?();
      this_01 = (Exception *)func_?();
      func_?();
      mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar8,(MethodInfo *)0x0);
      func_?(&
                      System__Collections__Generic__IList<System::Int32Enum>_MethodInfo__Newtonsoft__Json__Utilities__EnumUtils__GetFlagsValues<System::Int32Enum>_System__Int32Enum_
                     );
      func_?();
code_?:
      func_?();
    }
    else {
      if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[1].rgctxDataDummy + 0xba) & 1) == 0) {
        func_?();
      }
      pTVar4 = mscorlib.dll::System::Object::Object_GetType
                         ((Object *)&stack0xffffffa0,(MethodInfo *)0x0);
      if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar4 = mscorlib.dll::System::Enum::Enum_GetUnderlyingType(pTVar4,(MethodInfo *)0x0);
      if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[1].rgctxDataDummy + 0xba) & 1) == 0) {
        func_?();
      }
      pOVar9 = (Object *)func_?();
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uVar10 = mscorlib.dll::System::Convert::Convert_ToUInt64
                         (pOVar9,(IFormatProvider *)pCVar6,(MethodInfo *)0x0);
      this = (Collection_1_System_Object_ *)
             (*((method->field7_0x1c).rgctx_data[3].method)->virtualMethodPointer)();
      pMVar7 = (method->field7_0x1c).rgctx_data[4].method;
      if ((pMVar7[3].iflags & 1) == 0) {
        pMVar7 = (MethodInfo *)func_?();
      }
      pIVar11 = (IList_1_System_Int32Enum_ *)func_?();
      if (pIVar11 != (IList_1_System_Int32Enum_ *)0x0) {
        (*((method->field7_0x1c).rgctx_data[5].method)->virtualMethodPointer)();
        if (this != (Collection_1_System_Object_ *)0x0) {
          pIVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[System::Object]::
                   Collection_1_System_Object__GetEnumerator
                             (this,
                              MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Utilities::EnumValue<unsigned_long>_>__GetEnumerator__
                             );
          uStack_1 = 1;
          while( true ) {
            uStack_13 = (uint)(uVar10 >> 0x20);
            uStack_14 = (uint)uVar10;
            if (pIVar12 == (IEnumerator_1_System_Object_ *)0x0) break;
            cVar5 = func_?();
            if (cVar5 == '\0') {
              uStack_1 = 0xffffffff;
              if (pIVar12 != (IEnumerator_1_System_Object_ *)0x0) {
                func_?();
              }
              uStack_1 = 0xffffffff;
              if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[6].rgctxDataDummy + 0xba) & 1) ==
                  0) {
                func_?();
              }
              iVar15 = func_?();
              if (iVar15 == 0) {
                pIVar16 = (method->field7_0x1c).rgctx_data[9].klass;
                if (pIVar16->initialized_and_no_error == 0) {
                  pIVar16 = (Il2CppClass *)func_?();
                }
                if (pIVar16->cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pIVar16 = (method->field7_0x1c).rgctx_data[9].klass;
                if (pIVar16->initialized_and_no_error == 0) {
                  pIVar16 = (Il2CppClass *)func_?();
                }
                this_00 = *(Func_2_Object_Boolean_ **)((int)pIVar16->static_fields + 4);
                if (this_00 == (Func_2_Object_Boolean_ *)0x0) {
                  pIVar16 = (method->field7_0x1c).rgctx_data[9].klass;
                  if (pIVar16->initialized_and_no_error == 0) {
                    pIVar16 = (Il2CppClass *)func_?();
                  }
                  if (pIVar16->cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pIVar16 = (method->field7_0x1c).rgctx_data[9].klass;
                  if (pIVar16->initialized_and_no_error == 0) {
                    pIVar16 = (Il2CppClass *)func_?();
                  }
                  pOVar9 = *(Object **)pIVar16->static_fields;
                  this_00 = (Func_2_Object_Boolean_ *)func_?();
                  if (this_00 == (Func_2_Object_Boolean_ *)0x0) break;
                  mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                            (this_00,pOVar9,(method->field7_0x1c).rgctx_data[10].rgctxDataDummy,
                             (MethodInfo *)0x0);
                  pIVar16 = (method->field7_0x1c).rgctx_data[9].klass;
                  if (pIVar16->initialized_and_no_error == 0) {
                    pIVar16 = (Il2CppClass *)func_?();
                  }
                  *(Func_2_Object_Boolean_ **)((int)pIVar16->static_fields + 4) = this_00;
                  if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[9].rgctxDataDummy + 0xba) & 1
                      ) == 0) {
                    func_?();
                  }
                  func_?();
                }
                pOVar9 = System.Core.dll::System::Linq::Enumerable::Enumerable_SingleOrDefault_2
                                   ((IEnumerable_1_System_Object_ *)pMVar7,this_00,
                                    Newtonsoft__Json__Utilities__EnumValue<unsigned_long>_MethodInfo__System__Linq__Enumerable__SingleOrDefault<Newtonsoft::Json::Utilities::EnumValue<unsigned_long>_>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Utilities::EnumValue<unsigned_long>_>__System__Func<Newtonsoft::Json::Utilities::EnumValue<unsigned_long>,_bool>_
                                   );
                if (pOVar9 != (Object *)0x0) {
                  if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[6].rgctxDataDummy + 0xba) & 1
                      ) == 0) {
                    func_?();
                  }
                  func_?();
                }
              }
              *unaff_FS_OFFSET = uStack_3;
              return pIVar11;
            }
            if (pIVar12 == (IEnumerator_1_System_Object_ *)0x0) break;
            uVar17 = 0;
            uVar18 = (pIVar12->klass->_1).interface_offsets_count;
            if (uVar18 != 0) {
              do {
                if (pIVar12->klass->interfaceOffsets[uVar17].interfaceType ==
                    (Il2CppClass *)
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Utilities::EnumValue<unsigned_long>_>
                   ) {
                  pIVar19 = &pIVar12->klass->vtable + pIVar12->klass->interfaceOffsets[uVar17].offset;
                  goto code_?;
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar18);
            }
            pIVar19 = (IEnumerator_1_System_Object___VTable *)func_?();
code_?:
            iVar15 = (*(pIVar19->get_Current).methodPtr)();
            if (iVar15 == 0) break;
            if ((((*(uint *)(iVar15 + 0x10) & uStack_14) == *(uint *)(iVar15 + 0x10)) &&
                ((*(uint *)(iVar15 + 0x14) & uStack_13) == *(uint *)(iVar15 + 0x14))) &&
               (*(int *)(iVar15 + 0x10) != 0 || *(int *)(iVar15 + 0x14) != 0)) {
              pOVar9 = (Object *)func_?();
              if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0
                 ) {
                func_?();
              }
              pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::
                       CultureInfo_get_CurrentCulture((MethodInfo *)0x0);
              if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pOVar9 = mscorlib.dll::System::Convert::Convert_ChangeType_1
                                 (pOVar9,pTVar4,(IFormatProvider *)pCVar6,(MethodInfo *)0x0);
              iVar15 = func_?();
              if (pOVar9 == (Object *)0x0) break;
              if ((pOVar9->klass->_0).element_class != *(Il2CppClass **)(iVar15 + 0x20))
              goto code_?;
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
  pcVar20 = (code *)swi(3);
  pIVar11 = (IList_1_System_Int32Enum_ *)(*pcVar20)();
  return pIVar11;
}


/* Object GetMaximumValue[Object](Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils_GetMaximumValue
                   (Type *enumType,MethodInfo *method)

{
  pIStack_1 = (Il2CppClass *)0xffffffff;
  pIStack_2 = (Il2CppInteropData *)&DAT_?;
  IStack_3.rgctxDataDummy = *(void **)unaff_FS_OFFSET;
  unaff_FS_OFFSET->rgctxDataDummy = &IStack_3;
  pIStack_4 = (IEnumerator_1_System_Object___Class *)&stack0xffffffbc;
  pIVar5 = (IEnumerator_1_System_Object___Class *)&stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeRef__System__FlagsAttribute);
    func_?(&TypeInfo__System__IConvertible);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<System::Object>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<System::Object>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__System__UInt64);
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  pIStack_6 = (Il2CppClass *)0x0;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar7 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)enumType,(Object **)0x0,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_EBX = (MethodInfo *)
                mscorlib.dll::System::Enum::Enum_GetUnderlyingType(enumType,(MethodInfo *)0x0);
    IVar8 = *(method->field7_0x1c).rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)IVar8,(MethodInfo *)0x0);
    if (pTVar9 != (Type *)0x0) {
      cVar10 = (*(pTVar9->klass->vtable).IsAssignableFrom.methodPtr)();
      if (cVar10 == '\0') goto code_?;
      unaff_EBX = (MethodInfo *)EnumUtils_GetValues(enumType,(MethodInfo *)0x0);
      IVar8.type = TypeRef__System__FlagsAttribute;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Type::Type_GetTypeFromHandle((RuntimeTypeHandle)IVar8,(MethodInfo *)0x0)
      ;
      if ((enumType != (Type *)0x0) &&
         (cVar10 = (*(enumType->klass->vtable).__unknown_1.methodPtr)(),
         unaff_EBX != (MethodInfo *)0x0)) {
        if (cVar10 == '\0') {
          pIStack_6 = (Il2CppClass *)func_?();
          IVar8.rgctxDataDummy = &pIStack_6;
          pIStack_1 = (Il2CppClass *)0x4;
          while (pIStack_6 != (Il2CppClass *)0x0) {
            cVar10 = func_?();
            if (cVar10 == '\0') goto code_?;
            if (pIStack_6 == (Il2CppClass *)0x0) break;
            iVar11 = func_?();
            enumType = (method->field7_0x1c).rgctx_data[1].rgctxDataDummy;
            if ((((IEnumerator_1_System_Object___Class *)enumType)->_1).initialized_and_no_error ==
                0) {
              enumType = (Type *)func_?();
            }
            iVar12 = 0;
            if (iVar11 != 0) {
              iVar12 = func_?();
              unaff_EBX = (MethodInfo *)0x0;
              if (iVar12 == 0) goto code_?;
            }
            if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0)
            {
              func_?();
            }
            mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
            unaff_EBX = (MethodInfo *)0x0;
            if (iVar12 == 0) break;
            pMVar13 = (MethodInfo *)&UNK_?;
            uVar14 = func_?();
            unaff_EBX = (MethodInfo *)((ulonglong)uVar14 >> 0x20);
            enumType = (Type *)uVar14;
            mscorlib.dll::System::UInt64::UInt64_CompareTo_1
                      ((UInt64 *)&stack0xffffffd0,ZEXT48(unaff_EBX),pMVar13);
          }
        }
        else {
          pIStack_6 = (Il2CppClass *)func_?();
          IVar8.rgctxDataDummy = &pIStack_6;
          pIStack_1 = (Il2CppClass *)0x1;
          while (pIStack_6 != (Il2CppClass *)0x0) {
            cVar10 = func_?();
            if (cVar10 == '\0') goto code_?;
            if (pIStack_6 == (Il2CppClass *)0x0) break;
            pIVar5 = TypeInfo__System__Collections__Generic__IEnumerator<System::Object>;
            iVar11 = func_?();
            enumType = (method->field7_0x1c).rgctx_data[1].rgctxDataDummy;
            if ((((IEnumerator_1_System_Object___Class *)enumType)->_1).initialized_and_no_error ==
                0) {
              pIVar5 = (IEnumerator_1_System_Object___Class *)enumType;
              enumType = (Type *)func_?();
            }
            unaff_EBX = (MethodInfo *)0x0;
            if ((iVar11 != 0) &&
               (pIVar5 = (IEnumerator_1_System_Object___Class *)enumType,
               unaff_EBX = (MethodInfo *)func_?(), unaff_EBX == (MethodInfo *)0x0))
            goto code_?;
            enumType = (Type *)pIVar5;
            if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0)
            {
              func_?();
            }
            mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
            if (unaff_EBX == (MethodInfo *)0x0) break;
            func_?();
          }
        }
      }
    }
  }
  else {
    func_?();
    IVar8.rgctxDataDummy = (void *)func_?();
    func_?();
    pMVar13 = (MethodInfo *)0x0;
    pSVar15 = (String *)func_?();
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              ((ArgumentNullException *)IVar8.method,pSVar15,pMVar13);
    func_?();
    func_?();
  }
  func_?();
code_?:
  func_?();
  func_?();
  func_?();
  goto code_?;
code_?:
  pIStack_1 = (Il2CppClass *)0xffffffff;
  if (pIStack_6 != (Il2CppClass *)0x0) {
    func_?();
  }
  pIStack_1 = (Il2CppClass *)0xffffffff;
  pOVar16 = (Object *)func_?();
  IVar8 = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)IVar8,(MethodInfo *)0x0);
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pCVar17 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  enumType = (Type *)mscorlib.dll::System::Convert::Convert_ChangeType_1
                               (pOVar16,pTVar9,(IFormatProvider *)pCVar17,(MethodInfo *)0x0);
  IVar8 = (Il2CppRGCTXData)(method->field7_0x1c).rgctx_data[1].rgctxDataDummy;
  if ((*(byte *)((int)IVar8.rgctxDataDummy + 0xba) & 1) == 0) {
    IStack_3 = IVar8;
    IVar8.rgctxDataDummy = (void *)func_?();
  }
  if ((IEnumerator_1_System_Object___Class *)enumType == (IEnumerator_1_System_Object___Class *)0x0)
  {
    pOVar16 = (Object *)0x0;
code_?:
    *unaff_FS_OFFSET = IStack_3;
    return pOVar16;
  }
  pIStack_4 = (IEnumerator_1_System_Object___Class *)enumType;
  IStack_3 = IVar8;
  pOVar16 = (Object *)func_?();
  unaff_EBX = method;
  if (pOVar16 != (Object *)0x0) goto code_?;
code_?:
  pIStack_4 = (IEnumerator_1_System_Object___Class *)enumType;
  IStack_3 = IVar8;
  func_?();
code_?:
  func_?();
  func_?();
  pCVar17 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  func_?();
  pOVar16 = (Object *)func_?(7,unaff_EBX);
  pMVar13 = (MethodInfo *)0x0;
  pSVar15 = (String *)func_?();
  pSVar15 = mscorlib.dll::System::String::String_Format_4
                      ((IFormatProvider *)pCVar17,pSVar15,pOVar16,pMVar13);
  func_?();
  this = (ArgumentException *)func_?();
  func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar15,(MethodInfo *)0x0)
  ;
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  pOVar16 = (Object *)(*pcVar18)();
  return pOVar16;
}


/* IList`1[System.String] GetNames(Type) */

IList_1_System_String_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils_GetNames
          (Type *enumType,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::FieldInfo>_System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>__System__Func<System::Reflection::FieldInfo,_bool>_
                   );
    func_?(&TypeInfo__System__Func<System::Reflection::FieldInfo,_bool>);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<System::Reflection::FieldInfo>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__EnumUtils____c___GetNames_b__10_0_System__Reflection__FieldInfo_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c);
    cRam_? = '\x01';
  }
  if (enumType != (Type *)0x0) {
    cVar4 = (*(enumType->klass->vtable).get_IsEnum.methodPtr)
                      (enumType,(enumType->klass->vtable).get_IsEnum.method);
    if (cVar4 == '\0') {
      func_?(enumType);
      pSVar5 = (String *)func_?(7,enumType);
      str2 = (String *)func_?(&StringLiteral___is_not_an_enum_);
      str0 = (String *)func_?(&StringLiteral_Type__);
      pSVar5 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar5,str2,(MethodInfo *)0x0);
      uVar6 = func_?(&TypeInfo__System__ArgumentException);
      this_01 = (ArgumentException *)func_?(uVar6);
      func_?(this_01);
      mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
                (this_01,pSVar5,(MethodInfo *)0x0);
      func_?(&MethodInfo__Newtonsoft__Json__Utilities__EnumUtils__GetNames_System__Type_);
      func_?();
    }
    else {
      this = (List_1_System_Object_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
      if (this != (List_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)this,
                   MethodInfo__System__Collections__Generic__List<System::String>__List__);
        source = mscorlib.dll::System::Type::Type_GetFields(enumType,(MethodInfo *)0x0);
        if ((TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c->_1).cctor_finished_or_no_cctor
            == 0) {
          func_?(TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c);
        }
        this_00 = TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c->static_fields->__9__10_0;
        if (this_00 == (Func_2_System_Reflection_FieldInfo_Boolean_ *)0x0) {
          if ((TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c->_1).cctor_finished_or_no_cctor
              == 0) {
            func_?(TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c);
          }
          object = TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c->static_fields->__9;
          this_00 = (Func_2_System_Reflection_FieldInfo_Boolean_ *)
                    func_?(TypeInfo__System__Func<System::Reflection::FieldInfo,_bool>);
          if (this_00 == (Func_2_System_Reflection_FieldInfo_Boolean_ *)0x0) goto code_?;
          mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                    ((Func_2_Object_Boolean_ *)this_00,(Object *)object,
                     MethodInfo__Newtonsoft__Json__Utilities__EnumUtils____c___GetNames_b__10_0_System__Reflection__FieldInfo_
                     ,(MethodInfo *)0x0);
          TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c->static_fields->__9__10_0 = this_00;
          func_?(&TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c->static_fields->
                           __9__10_0,this_00);
        }
        pIVar7 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_4
                           ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Boolean_ *)this_00
                            ,
                            System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::FieldInfo>_System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>__System__Func<System::Reflection::FieldInfo,_bool>_
                           );
        if (pIVar7 != (IEnumerable_1_System_Object_ *)0x0) {
          piVar8 = (int *)func_?(0,
                                          TypeInfo__System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>
                                          ,pIVar7);
          uStack_1 = 1;
          while( true ) {
            if (piVar8 == (int *)0x0) break;
            cVar4 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar8);
            if (cVar4 == '\0') {
              uStack_1 = 0xffffffff;
              if (piVar8 != (int *)0x0) {
                func_?(0,TypeInfo__System__IDisposable,piVar8);
                *unaff_FS_OFFSET = uStack_3;
                return (IList_1_System_String_ *)this;
              }
              *unaff_FS_OFFSET = uStack_3;
              return (IList_1_System_String_ *)this;
            }
            if (piVar8 == (int *)0x0) break;
            uVar9 = 0;
            uVar10 = *(ushort *)(*piVar8 + 0xb2);
            if (uVar10 != 0) {
              do {
                if (*(IEnumerator_1_System_Reflection_FieldInfo___Class **)
                     (*(int *)(*piVar8 + 0x58) + (uint)uVar9 * 8) ==
                    TypeInfo__System__Collections__Generic__IEnumerator<System::Reflection::FieldInfo>
                   ) {
                  puVar11 = (undefined4 *)
                           (*(int *)(*(int *)(*piVar8 + 0x58) + 4 + (uint)uVar9 * 8) * 8 + 0xbc +
                           *piVar8);
                  goto code_?;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar10);
            }
            puVar11 = (undefined4 *)
                     func_?(piVar8,
                                     TypeInfo__System__Collections__Generic__IEnumerator<System::Reflection::FieldInfo>
                                     ,0);
code_?:
            piVar12 = (int *)(*(code *)*puVar11)(piVar8,puVar11[1]);
            if (piVar12 == (int *)0x0) break;
            item = (Object *)(**(code **)(*piVar12 + 0xf4))(piVar12,*(undefined4 *)(*piVar12 + 0xf8));
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      (this,item,
                       MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                      );
          }
        }
      }
    }
  }
code_?:
  uVar6 = func_?();
  func_?(uVar6);
  pcVar13 = (code *)swi(3);
  pIVar14 = (IList_1_System_String_ *)(*pcVar13)();
  return pIVar14;
}


/* EnumValues`1[System.UInt64] GetNamesAndValues[Int32Enum]() */

EnumValues_1_System_UInt64_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils_GetNamesAndValues
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    Newtonsoft__Json__Utilities__EnumValues<unsigned_long>_MethodInfo__Newtonsoft__Json__Utilities__EnumUtils__GetNamesAndValues<unsigned_long>_System__Type_
                   );
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  pEVar1 = EnumUtils_GetNamesAndValues_2
                     (enumType,
                      Newtonsoft__Json__Utilities__EnumValues<unsigned_long>_MethodInfo__Newtonsoft__Json__Utilities__EnumUtils__GetNamesAndValues<unsigned_long>_System__Type_
                     );
  return pEVar1;
}


/* EnumValues`1[System.Int64] GetNamesAndValues[Int64](Type) */

EnumValues_1_System_Int64_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils_GetNamesAndValues_1
          (Type *enumType,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Collections__Generic__ICollection<System::Object>);
    func_?(&TypeInfo__System__Collections__Generic__IList<System::Object>);
    func_?(&TypeInfo__System__Collections__Generic__IList<System::String>);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_enumType);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)enumType,(Object **)0x0,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    ValidationUtils::ValidationUtils_ArgumentTypeIsEnum
              (enumType,StringLiteral_enumType,(MethodInfo *)0x0);
    pIVar5 = EnumUtils_GetValues(enumType,(MethodInfo *)0x0);
    pIVar6 = EnumUtils_GetNames(enumType,(MethodInfo *)0x0);
    if ((*(byte *)((int)((method->field7_0x1c).rgctx_data)->rgctxDataDummy + 0xba) & 1) == 0) {
      func_?();
    }
    pEVar7 = (EnumValues_1_System_Int64_ *)func_?();
    if (pEVar7 != (EnumValues_1_System_Int64_ *)0x0) {
      (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)();
      iVar8 = 0;
      if (pIVar5 != (IList_1_System_Object_ *)0x0) {
        while( true ) {
          iVar9 = func_?();
          if (iVar9 <= iVar8) {
            *unaff_FS_OFFSET = uStack_3;
            return pEVar7;
          }
          uStack_1 = 0;
          if (pIVar6 == (IList_1_System_String_ *)0x0) break;
          func_?();
          func_?();
          handle = (method->field7_0x1c).rgctx_data[2];
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pOVar10 = (Object *)0x0;
          mscorlib.dll::System::Type::Type_GetTypeFromHandle
                    ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
          if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          conversionType =
               mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                         ((MethodInfo *)0x0);
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pIVar6 = (IList_1_System_String_ *)0x0;
          pOVar10 = mscorlib.dll::System::Convert::Convert_ChangeType_1
                             (pOVar10,(Type *)conversionType,(IFormatProvider *)conversionType,
                              (MethodInfo *)0x0);
          func_?();
          iVar9 = func_?();
          if (iVar9 == 0) break;
          iVar9 = func_?();
          if (pOVar10 == (Object *)0x0) break;
          if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(iVar9 + 0x20))
          goto code_?;
          puVar11 = (undefined4 *)func_?();
          (*(code *)*puVar11)();
          (*((method->field7_0x1c).rgctx_data[7].method)->virtualMethodPointer)();
          uStack_1 = 0xffffffff;
          iVar8 = iVar8 + 1;
        }
      }
    }
  }
  else {
    func_?();
    this = (ArgumentNullException *)func_?();
    func_?();
    method_00 = (MethodInfo *)0x0;
    paramName = (String *)func_?();
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,method_00);
    func_?();
    func_?();
code_?:
    func_?();
  }
  func_?();
  func_?();
  return (EnumValues_1_System_Int64_ *)&UNK_?;
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
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Collections__Generic__ICollection<System::Object>);
    func_?(&TypeInfo__System__Collections__Generic__IList<System::Object>);
    func_?(&TypeInfo__System__Collections__Generic__IList<System::String>);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_enumType);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)enumType,(Object **)0x0,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    ValidationUtils::ValidationUtils_ArgumentTypeIsEnum
              (enumType,StringLiteral_enumType,(MethodInfo *)0x0);
    pIVar5 = EnumUtils_GetValues(enumType,(MethodInfo *)0x0);
    pIVar6 = EnumUtils_GetNames(enumType,(MethodInfo *)0x0);
    if ((*(byte *)((int)((method->field7_0x1c).rgctx_data)->rgctxDataDummy + 0xba) & 1) == 0) {
      func_?();
    }
    pEVar7 = (EnumValues_1_System_UInt64_ *)func_?();
    if (pEVar7 != (EnumValues_1_System_UInt64_ *)0x0) {
      (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)();
      iVar8 = 0;
      if (pIVar5 != (IList_1_System_Object_ *)0x0) {
        while( true ) {
          iVar9 = func_?();
          if (iVar9 <= iVar8) {
            *unaff_FS_OFFSET = uStack_3;
            return pEVar7;
          }
          uStack_1 = 0;
          if (pIVar6 == (IList_1_System_String_ *)0x0) break;
          func_?();
          func_?();
          handle = (method->field7_0x1c).rgctx_data[2];
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pOVar10 = (Object *)0x0;
          mscorlib.dll::System::Type::Type_GetTypeFromHandle
                    ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
          if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          conversionType =
               mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                         ((MethodInfo *)0x0);
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pIVar6 = (IList_1_System_String_ *)0x0;
          pOVar10 = mscorlib.dll::System::Convert::Convert_ChangeType_1
                             (pOVar10,(Type *)conversionType,(IFormatProvider *)conversionType,
                              (MethodInfo *)0x0);
          func_?();
          iVar9 = func_?();
          if (iVar9 == 0) break;
          iVar9 = func_?();
          if (pOVar10 == (Object *)0x0) break;
          if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(iVar9 + 0x20))
          goto code_?;
          puVar11 = (undefined4 *)func_?();
          (*(code *)*puVar11)();
          (*((method->field7_0x1c).rgctx_data[7].method)->virtualMethodPointer)();
          uStack_1 = 0xffffffff;
          iVar8 = iVar8 + 1;
        }
      }
    }
  }
  else {
    func_?();
    this = (ArgumentNullException *)func_?();
    func_?();
    method_00 = (MethodInfo *)0x0;
    paramName = (String *)func_?();
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,method_00);
    func_?();
    func_?();
code_?:
    func_?();
  }
  func_?();
  func_?();
  return (EnumValues_1_System_UInt64_ *)&UNK_?;
}


/* IList`1[System.String] GetNames[Object]() */

IList_1_System_String_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils_GetNames_1
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
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
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::FieldInfo>_System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>__System__Func<System::Reflection::FieldInfo,_bool>_
                   );
    func_?(&TypeInfo__System__Func<System::Reflection::FieldInfo,_bool>);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<System::Reflection::FieldInfo>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::Object>);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__EnumUtils____c___GetValues_b__8_0_System__Reflection__FieldInfo_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c);
    cRam_? = '\x01';
  }
  if (enumType != (Type *)0x0) {
    cVar4 = (*(enumType->klass->vtable).get_IsEnum.methodPtr)
                      (enumType,(enumType->klass->vtable).get_IsEnum.method);
    if (cVar4 == '\0') {
      func_?(enumType);
      pSVar5 = (String *)func_?(7,enumType);
      str2 = (String *)func_?(&StringLiteral___is_not_an_enum_);
      str0 = (String *)func_?(&StringLiteral_Type__);
      pSVar5 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar5,str2,(MethodInfo *)0x0);
      uVar6 = func_?(&TypeInfo__System__ArgumentException);
      this_01 = (ArgumentException *)func_?(uVar6);
      func_?(this_01);
      mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
                (this_01,pSVar5,(MethodInfo *)0x0);
      func_?(&MethodInfo__Newtonsoft__Json__Utilities__EnumUtils__GetValues_System__Type_);
      func_?();
    }
    else {
      this = (List_1_System_Object_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
      if (this != (List_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)this,
                   MethodInfo__System__Collections__Generic__List<System::Object>__List__);
        source = mscorlib.dll::System::Type::Type_GetFields(enumType,(MethodInfo *)0x0);
        if ((TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c->_1).cctor_finished_or_no_cctor
            == 0) {
          func_?(TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c);
        }
        this_00 = TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c->static_fields->__9__8_0;
        if (this_00 == (Func_2_System_Reflection_FieldInfo_Boolean_ *)0x0) {
          if ((TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c->_1).cctor_finished_or_no_cctor
              == 0) {
            func_?(TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c);
          }
          object = TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c->static_fields->__9;
          this_00 = (Func_2_System_Reflection_FieldInfo_Boolean_ *)
                    func_?(TypeInfo__System__Func<System::Reflection::FieldInfo,_bool>);
          if (this_00 == (Func_2_System_Reflection_FieldInfo_Boolean_ *)0x0) goto code_?;
          mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                    ((Func_2_Object_Boolean_ *)this_00,(Object *)object,
                     MethodInfo__Newtonsoft__Json__Utilities__EnumUtils____c___GetValues_b__8_0_System__Reflection__FieldInfo_
                     ,(MethodInfo *)0x0);
          TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c->static_fields->__9__8_0 = this_00;
          func_?(&TypeInfo__Newtonsoft__Json__Utilities__EnumUtils____c->static_fields->
                           __9__8_0,this_00);
        }
        pIVar7 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_4
                           ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Boolean_ *)this_00
                            ,
                            System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::FieldInfo>_System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>__System__Func<System::Reflection::FieldInfo,_bool>_
                           );
        if (pIVar7 != (IEnumerable_1_System_Object_ *)0x0) {
          piVar8 = (int *)func_?(0,
                                          TypeInfo__System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>
                                          ,pIVar7);
          uStack_1 = 1;
          while( true ) {
            if (piVar8 == (int *)0x0) break;
            cVar4 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar8);
            if (cVar4 == '\0') {
              uStack_1 = 0xffffffff;
              if (piVar8 != (int *)0x0) {
                func_?(0,TypeInfo__System__IDisposable,piVar8);
                *unaff_FS_OFFSET = uStack_3;
                return (IList_1_System_Object_ *)this;
              }
              *unaff_FS_OFFSET = uStack_3;
              return (IList_1_System_Object_ *)this;
            }
            if (piVar8 == (int *)0x0) break;
            uVar9 = 0;
            uVar10 = *(ushort *)(*piVar8 + 0xb2);
            if (uVar10 != 0) {
              do {
                if (*(IEnumerator_1_System_Reflection_FieldInfo___Class **)
                     (*(int *)(*piVar8 + 0x58) + (uint)uVar9 * 8) ==
                    TypeInfo__System__Collections__Generic__IEnumerator<System::Reflection::FieldInfo>
                   ) {
                  puVar11 = (undefined4 *)
                           (*(int *)(*(int *)(*piVar8 + 0x58) + 4 + (uint)uVar9 * 8) * 8 + 0xbc +
                           *piVar8);
                  goto code_?;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar10);
            }
            puVar11 = (undefined4 *)
                     func_?(piVar8,
                                     TypeInfo__System__Collections__Generic__IEnumerator<System::Reflection::FieldInfo>
                                     ,0);
code_?:
            piVar12 = (int *)(*(code *)*puVar11)(piVar8,puVar11[1]);
            if (piVar12 == (int *)0x0) break;
            item = (Object *)
                   (**(code **)(*piVar12 + 0x17c))(piVar12,enumType,*(undefined4 *)(*piVar12 + 0x180));
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      (this,item,
                       MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                      );
          }
        }
      }
    }
  }
code_?:
  uVar6 = func_?();
  func_?(uVar6);
  pcVar13 = (code *)swi(3);
  pIVar14 = (IList_1_System_Object_ *)(*pcVar13)();
  return pIVar14;
}


/* IList`1[System.Object] GetValues[Object]() */

IList_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils_GetValues_1
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  pIVar1 = EnumUtils_GetValues(enumType,(MethodInfo *)0x0);
  uVar2 = (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
                    (pIVar1,(method->field7_0x1c).rgctx_data[1].rgctxDataDummy);
  pIVar1 = (IList_1_System_Object_ *)
           (*((method->field7_0x1c).rgctx_data[2].method)->virtualMethodPointer)
                     (uVar2,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy);
  return pIVar1;
}

