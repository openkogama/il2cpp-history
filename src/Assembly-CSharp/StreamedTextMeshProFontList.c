
/* List`1[System.String] GetFontNames() */

List_1_System_String_ *
Assembly-CSharp.dll::StreamedTextMeshProFontList::StreamedTextMeshProFontList_GetFontNames
          (StreamedTextMeshProFontList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<StreamedFontInfo>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<StreamedFontInfo>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<StreamedFontInfo>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<StreamedFontInfo>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<StreamedFontInfo>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).fontInfoList;
  if (pLVar1 != (List_1_StreamedFontInfo_ *)0x0) {
    capacity = (pLVar1->fields)._size;
    this_00 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
               *)FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
    RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
    List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___ctor_2
              (this_00,capacity,
               MethodInfo__System__Collections__Generic__List<System::String>__List_int_);
    pLVar1 = (this->fields).fontInfoList;
    if (pLVar1 != (List_1_StreamedFontInfo_ *)0x0) {
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
        puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar5 = *puVar4;
          LOCK();
          uVar6 = *puVar4;
          if (uVar5 == uVar6) {
            *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar5 != uVar6);
      }
      pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
      uStack_8 = 0;
      LStack_9._8_8_ = pLStack_7;
      LStack_9._current = (Object *)0x0;
      uStack_3 = 0;
      pLStack_7 = &LStack_9;
      LStack_9._list = (List_1_System_Object_ *)pLVar1;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_9,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<StreamedFontInfo>__MoveNext__
                          );
        if (bVar10 == 0) {
          return (List_1_System_String_ *)this_00;
        }
        if ((Object_1 *)LStack_9._current == (Object_1 *)0x0) break;
        item = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                         ((Object_1 *)LStack_9._current,(MethodInfo *)0x0);
        pMVar11 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
        ;
        if (this_00 ==
            (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
             *)0x0) goto code_?;
        piVar12 = &(this_00->fields)._version;
        *piVar12 = *piVar12 + 1;
        pRVar13 = (this_00->fields)._items;
        uVar2 = (this_00->fields)._size;
        if (pRVar13 == (RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__Array *)0x0)
        goto code_?;
        if (uVar2 < (uint)pRVar13->max_length) {
          (this_00->fields)._size = uVar2 + 1;
          FUN_?(pRVar13,(longlong)(int)uVar2,item);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)this_00,(Object *)item,
                     pMVar11->klass->rgctx_data[0xe].method);
        }
      }
      goto code_?;
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
  pcVar14 = (code *)swi(3);
  pLVar15 = (List_1_System_String_ *)(*pcVar14)();
  return pLVar15;
}


/* String GetFontUrl(Int32) */

String * Assembly-CSharp.dll::StreamedTextMeshProFontList::StreamedTextMeshProFontList_GetFontUrl
                   (StreamedTextMeshProFontList *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<StreamedFontInfo>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (-1 < index) {
    pLVar1 = (this->fields).fontInfoList;
    if (pLVar1 == (List_1_StreamedFontInfo_ *)0x0) goto code_?;
    uVar2 = (pLVar1->fields)._size;
    if (index < (int)uVar2) {
      if (uVar2 <= (uint)index) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar3)();
        return pSVar4;
      }
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 == (StreamedFontInfo__Array *)0x0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar3)();
        return pSVar4;
      }
      if ((uint)index < (uint)pSVar5->max_length) {
        if (pSVar5->vector[index] != (StreamedFontInfo *)0x0) {
          return (pSVar5->vector[index]->fields).url;
        }
        goto code_?;
      }
      goto DAT_?;
    }
  }
  pLVar1 = (this->fields).fontInfoList;
  FUN_?(pLVar1);
  func_?(&MethodInfo__System__Collections__Generic__List<StreamedFontInfo>__get_Count__
                     );
  uVar6 = func_?(pLVar1);
  aiStackX_10[0] = func_?(uVar6,1);
  arg0 = (Object *)func_?(uRam_?,aiStackX_10);
  aiStackX_10[0] = index;
  arg1 = (Object *)func_?(uRam_?,aiStackX_10);
  pSVar4 = (String *)func_?(&StringLiteral_Range_is_0_____0___index_is__1_);
  pSVar4 = mscorlib.dll::System::String::String_Format_1(pSVar4,arg0,arg1,(MethodInfo *)0x0);
  uVar7 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_00 = (ArgumentOutOfRangeException *)func_?(uVar7);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,pSVar4,(MethodInfo *)0x0);
  uVar7 = func_?(&MethodInfo__StreamedTextMeshProFontList__GetFontUrl_int_);
  FUN_?(this_00,uVar7);
DAT_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar3)();
  return pSVar4;
}

