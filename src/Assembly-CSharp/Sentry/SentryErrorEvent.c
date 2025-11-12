
/* SentryErrorEvent(String, List`1[Sentry.Breadcrumb], String,
   Dictionary`2[System.String,System.String], Dictionary`2[System.String,System.Object]) */

void Assembly-CSharp.dll::Sentry::SentryErrorEvent::SentryErrorEvent__ctor
               (SentryErrorEvent *this,String *message,List_1_Sentry_Breadcrumb_ *breadcrumbs,
               String *stackTrace,Dictionary_2_System_String_System_String_ *tags,
               Dictionary_2_System_String_System_Object_ *extra,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_error_stack_trace);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  SentryEvent::SentryEvent__ctor
            ((SentryEvent *)this,message,tags,extra,breadcrumbs,(MethodInfo *)0x0);
  key = StringLiteral_error_stack_trace;
  this_00 = (this->fields)._.extra;
  if (this_00 == (Dictionary_2_System_String_System_Object_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pMVar2 = MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
           ->klass->rgctx_data[0x22].method;
  if (StringLiteral_error_stack_trace == (String *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
              (ExceptionArgument__Enum_key,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  piVar3 = &(this_00->fields)._version;
  *piVar3 = *piVar3 + 1;
  if ((this_00->fields)._buckets == (Int32__Array *)0x0) {
    FUN_?(this_00,0);
  }
  pIVar4 = (IEqualityComparer_1_System_Object_ *)(this_00->fields)._comparer;
  pDVar5 = (this_00->fields)._entries;
  if (pIVar4 == (IEqualityComparer_1_System_Object_ *)0x0) {
    uVar6 = (*(key->klass->vtable).GetHashCode.methodPtr)
                       (key,(key->klass->vtable).GetHashCode.method);
  }
  else {
    pvVar7 = pMVar2->klass->rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
      pvVar7 = (void *)FUN_?(pvVar7);
    }
    uVar6 = FUN_?(1,pvVar7);
  }
  pIVar8 = (this_00->fields)._buckets;
  iVar9 = 0;
  uVar6 = uVar6 & 0x7fffffff;
  if (pIVar8 == (Int32__Array *)0x0) goto code_?;
  uVar10 = (int)uVar6 % (int)pIVar8->max_length;
  if (uVar10 < (uint)pIVar8->max_length) {
    piVar3 = pIVar8->vector + (int)uVar10;
    uVar10 = *piVar3 - 1;
    if (pIVar4 == (IEqualityComparer_1_System_Object_ *)0x0) {
      pEVar11 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
                EqualityComparer_1_System_Object__get_Default(pMVar2->klass->rgctx_data[3].method);
      if (pDVar5 == (Dictionary_2_TKey_TValue_Entry_System_String_System_Object___Array *)0x0)
      goto code_?;
      while (uVar10 < (uint)pDVar5->max_length) {
        if (pDVar5->vector[(int)uVar10].hashCode == uVar6) {
          if (pEVar11 == (EqualityComparer_1_System_Object_ *)0x0) goto code_?;
          cVar12 = (*(pEVar11->klass->vtable).__unknown.methodPtr)
                             (pEVar11,pDVar5->vector[(int)uVar10].key,key,
                              (pEVar11->klass->vtable).__unknown.method);
          if (cVar12 != '\0') goto DAT_?;
        }
        if ((uint)pDVar5->max_length <= uVar10) goto code_?;
        uVar10 = pDVar5->vector[(int)uVar10].next;
        if ((int)pDVar5->max_length <= iVar9) goto code_?;
        iVar9 = iVar9 + 1;
      }
    }
    else {
      if (pDVar5 == (Dictionary_2_TKey_TValue_Entry_System_String_System_Object___Array *)0x0)
      goto code_?;
      while (uVar10 < (uint)pDVar5->max_length) {
        if (pDVar5->vector[(int)uVar10].hashCode == uVar6) {
          pIVar13 = pMVar2->klass->rgctx_data[1].rgctxDataDummy;
          if ((pIVar13->field_0x135 & 1) == 0) {
            pIVar13 = (Il2CppClass *)FUN_?(pIVar13);
          }
          pIVar14 = pIVar4->klass;
          uVar15 = 0;
          uVar16._0_1_ = (pIVar14->_1).rank;
          uVar16._1_1_ = (pIVar14->_1).minimumAlignment;
          if (uVar16 != 0) {
            do {
              if (pIVar14->interfaceOffsets[uVar15].interfaceType == pIVar13) {
                pVVar17 = &(pIVar14->vtable).Equals + pIVar14->interfaceOffsets[uVar15].offset;
                goto code_?;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar16);
          }
          pVVar17 = (VirtualInvokeData *)FUN_?(pIVar4,pIVar13,0);
code_?:
          cVar12 = (*pVVar17->methodPtr)(pIVar4);
          if (cVar12 != '\0') {
DAT_?:
            mscorlib.dll::System::ThrowHelper::
            ThrowHelper_1_ThrowAddingDuplicateWithKeyArgumentException
                      ((Object *)key,(MethodInfo *)0x0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if ((uint)pDVar5->max_length <= uVar10) goto code_?;
        uVar10 = pDVar5->vector[(int)uVar10].next;
        if ((int)pDVar5->max_length <= iVar9) {
code_?:
          mscorlib.dll::System::ThrowHelper::
          ThrowHelper_1_ThrowInvalidOperationException_ConcurrentOperationsNotSupported
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar9 = iVar9 + 1;
      }
    }
    bVar18 = false;
    bVar19 = false;
    if ((this_00->fields)._freeCount < 1) {
      uVar10 = (this_00->fields)._count;
      if (uVar10 == (uint)pDVar5->max_length) {
        pMVar2 = pMVar2->klass->rgctx_data[0x36].method;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Collections__HashHelpers);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        iVar20 = (this_00->fields)._count;
        if (*(int *)&(TypeInfo__System__Collections__HashHelpers->_1).field_0x1c == 0) {
          FUN_?();
        }
        iVar20 = mscorlib.dll::System::Collections::HashHelpers::HashHelpers_1_ExpandPrime
                           (iVar20,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Resize_1
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,iVar20,0,
                   pMVar2->klass->rgctx_data[0x38].method);
        bVar18 = true;
      }
      pDVar5 = (this_00->fields)._entries;
      (this_00->fields)._count = uVar10 + 1;
      if (bVar18) {
        pIVar8 = (this_00->fields)._buckets;
        if (pIVar8 == (Int32__Array *)0x0) goto code_?;
        uVar21 = (int)uVar6 % (int)pIVar8->max_length;
        if ((uint)pIVar8->max_length <= uVar21) goto code_?;
        piVar3 = pIVar8->vector + (int)uVar21;
      }
    }
    else {
      uVar10 = (this_00->fields)._freeList;
      bVar19 = true;
      piVar22 = &(this_00->fields)._freeCount;
      *piVar22 = *piVar22 + -1;
    }
    if (pDVar5 == (Dictionary_2_TKey_TValue_Entry_System_String_System_Object___Array *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar10 < (uint)pDVar5->max_length) {
      ppOVar23 = &pDVar5->vector[(longlong)(int)uVar10 + -2].value;
      if (bVar19) {
        (this_00->fields)._freeList = *(int32_t *)((longlong)ppOVar23 + 0x24);
      }
      *(uint *)(ppOVar23 + 4) = uVar6;
      iVar9 = *piVar3;
      ppOVar23[5] = (Object *)key;
      *(int *)((longlong)ppOVar23 + 0x24) = iVar9 + -1;
      func_?(ppOVar23 + 5);
      ppOVar23[6] = (Object *)stackTrace;
      func_?(ppOVar23 + 6);
      *piVar3 = uVar10 + 1;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

