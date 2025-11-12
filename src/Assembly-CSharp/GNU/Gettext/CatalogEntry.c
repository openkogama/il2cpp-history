
/* Void AddAutoComment(String, Boolean) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_AddAutoComment
               (CatalogEntry *this,String *comment,bool ifNotExists,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (ifNotExists != 0) {
    pLVar1 = (this->fields).autocomments;
    if (pLVar1 == (List_1_System_String_ *)0x0) goto code_?;
    cVar2 = FUN_?(pLVar1,comment);
    if (cVar2 != '\0') {
      return;
    }
  }
  pMVar3 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
  pLVar1 = (this->fields).autocomments;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    piVar4 = &(pLVar1->fields)._version;
    *piVar4 = *piVar4 + 1;
    pSVar5 = (pLVar1->fields)._items;
    if (pSVar5 != (String__Array *)0x0) {
      uVar6 = (pLVar1->fields)._size;
      if ((uint)pSVar5->max_length <= uVar6) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)pLVar1,(Object *)comment,
                   pMVar3->klass->rgctx_data[0xe].method);
        return;
      }
      (pLVar1->fields)._size = uVar6 + 1;
      if (uVar6 < (uint)pSVar5->max_length) {
        bVar7 = iRam_? != 0;
        pSVar5->vector[(int)uVar6] = comment;
        if (bVar7) {
          uVar6 = (uint)((ulonglong)(pSVar5->vector + (int)uVar6) >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar8;
            LOCK();
            uVar10 = *puVar8;
            if (uVar9 == uVar10) {
              *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar10);
        }
        return;
      }
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void AddAutoComment(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_AddAutoComment_1
               (CatalogEntry *this,String *comment,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
  this_00 = (this->fields).autocomments;
  if (this_00 != (List_1_System_String_ *)0x0) {
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar3 = (this_00->fields)._items;
    if (pSVar3 != (String__Array *)0x0) {
      uVar4 = (this_00->fields)._size;
      if ((uint)pSVar3->max_length <= uVar4) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)this_00,(Object *)comment,
                   pMVar1->klass->rgctx_data[0xe].method);
        return;
      }
      (this_00->fields)._size = uVar4 + 1;
      if ((uint)pSVar3->max_length <= uVar4) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar6 = iRam_? != 0;
      pSVar3->vector[(int)uVar4] = comment;
      if (bVar6) {
        uVar4 = (uint)((ulonglong)(pSVar3->vector + (int)uVar4) >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddReference(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_AddReference
               (CatalogEntry *this,String *reference,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).references;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    cVar2 = FUN_?(pLVar1,reference);
    pMVar3 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
    if (cVar2 != '\0') {
      return;
    }
    pLVar1 = (this->fields).references;
    if (pLVar1 != (List_1_System_String_ *)0x0) {
      piVar4 = &(pLVar1->fields)._version;
      *piVar4 = *piVar4 + 1;
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 != (String__Array *)0x0) {
        uVar6 = (pLVar1->fields)._size;
        if ((uint)pSVar5->max_length <= uVar6) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)pLVar1,(Object *)reference,
                     pMVar3->klass->rgctx_data[0xe].method);
          return;
        }
        (pLVar1->fields)._size = uVar6 + 1;
        if (uVar6 < (uint)pSVar5->max_length) {
          bVar7 = iRam_? != 0;
          pSVar5->vector[(int)uVar6] = reference;
          if (bVar7) {
            uVar6 = (uint)((ulonglong)(pSVar5->vector + (int)uVar6) >> 0xc);
            puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar9 = *puVar8;
              LOCK();
              uVar10 = *puVar8;
              if (uVar9 == uVar10) {
                *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (uVar9 != uVar10);
          }
          return;
        }
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ClearAutoComments() */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_ClearAutoComments
               (CatalogEntry *this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [32];
  int iVar4;
  int iVar5;
  List_1_System_String_ *pLVar6;
  String__Array *this_00;
  code *pcVar7;
  int iVar8;
  int32_t iVar9;
  ArgumentNullException *this_01;
  undefined8 uVar10;
  IndexOutOfRangeException *pIVar11;
  String *pSVar12;
  undefined1 (*pauVar13) [32];
  undefined1 (*pauVar14) [32];
  undefined1 (*pauVar15) [16];
  String **ppSVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auVar20 [32];
  
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar6 = (this->fields).autocomments;
  if (pLVar6 == (List_1_System_String_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar4 = (pLVar6->fields)._size;
  piVar1 = &(pLVar6->fields)._version;
  *piVar1 = *piVar1 + 1;
  (pLVar6->fields)._size = 0;
  if (iVar4 < 1) {
    return;
  }
  this_00 = (pLVar6->fields)._items;
  if (this_00 == (String__Array *)0x0) {
    uVar10 = func_?(&TypeInfo__System__ArgumentNullException,0,iVar4,0);
    this_01 = (ArgumentNullException *)func_?(uVar10);
    pSVar12 = (String *)func_?(&StringLiteral_array);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_01,pSVar12,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__System__Array__Clear_MethodInfo__System__Array__int__int_
                                );
    FUN_?(this_01,uVar10);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (iVar4 < 0) {
    uVar10 = func_?(&TypeInfo__System__IndexOutOfRangeException,0,iVar4,0);
    pIVar11 = (IndexOutOfRangeException *)func_?(uVar10);
    pSVar12 = (String *)func_?(&StringLiteral_length___0);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (pIVar11,pSVar12,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__System__Array__Clear_MethodInfo__System__Array__int__int_
                                );
    FUN_?(pIVar11,uVar10);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((((Array__Class *)this_00->klass)->_1).initialized_and_no_error == 0 &&
      ((((Array__Class *)this_00->klass)->_1).initialized == 0 &&
      ((((Array__Class *)this_00->klass)->_1).enumtype == 0 &&
      ((((Array__Class *)this_00->klass)->_1).nullabletype == 0 &&
      ((((Array__Class *)this_00->klass)->_1).is_generic == 0 &&
      ((((Array__Class *)this_00->klass)->_1).has_references == 0 &&
      ((((Array__Class *)this_00->klass)->_1).init_pending == 0 &&
      (((Array__Class *)this_00->klass)->_1).size_init_pending == 0))))))) {
    uVar10 = FUN_?();
    FUN_?(uVar10,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (this_00->bounds == (Il2CppArrayBounds *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = this_00->bounds->lower_bound;
  }
  if (0 < iVar8) {
    uVar10 = func_?(&TypeInfo__System__IndexOutOfRangeException,0,iVar4,0);
    pIVar11 = (IndexOutOfRangeException *)func_?(uVar10);
    pSVar12 = (String *)func_?(&StringLiteral_index___lower_bound);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (pIVar11,pSVar12,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__System__Array__Clear_MethodInfo__System__Array__int__int_
                                );
    FUN_?(pIVar11,uVar10);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = mscorlib.dll::System::Array::Array_get_Length((Array *)this_00,(MethodInfo *)0x0);
  if (iVar9 - iVar4 < -iVar8) {
    uVar10 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar11 = (IndexOutOfRangeException *)func_?(uVar10);
    pSVar12 = (String *)func_?(&StringLiteral_index___length___size);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (pIVar11,pSVar12,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__System__Array__Clear_MethodInfo__System__Array__int__int_
                                );
    FUN_?(pIVar11,uVar10);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar5 = (((Array__Class *)this_00->klass)->_1).native_size;
  uVar18 = (ulonglong)(iVar5 * iVar4);
  ppSVar16 = (String **)((longlong)this_00->vector + (longlong)iVar5 * (longlong)-iVar8);
  switch(uVar18) {
  case 0:
    return;
  case 8:
    *(undefined8 *)((longlong)ppSVar16 + (uVar18 - 8)) = 0;
    return;
  case 9:
    *(undefined8 *)((longlong)ppSVar16 + (uVar18 - 9)) = 0;
    *(undefined1 *)((longlong)ppSVar16 + (uVar18 - 1)) = 0;
    return;
  case 10:
    *(undefined8 *)((longlong)ppSVar16 + (uVar18 - 10)) = 0;
    *(undefined2 *)((longlong)ppSVar16 + (uVar18 - 2)) = 0;
    return;
  case 0xb:
    *(undefined8 *)((longlong)ppSVar16 + (uVar18 - 0xb)) = 0;
    *(undefined2 *)((longlong)ppSVar16 + (uVar18 - 3)) = 0;
    *(undefined1 *)((longlong)ppSVar16 + (uVar18 - 1)) = 0;
    return;
  case 0xc:
    *(undefined8 *)((longlong)ppSVar16 + (uVar18 - 0xc)) = 0;
  case 4:
    *(undefined4 *)((longlong)ppSVar16 + (uVar18 - 4)) = 0;
    return;
  case 0xd:
    *(undefined8 *)((longlong)ppSVar16 + (uVar18 - 0xd)) = 0;
  case 5:
    *(undefined4 *)((longlong)ppSVar16 + (uVar18 - 5)) = 0;
    *(undefined1 *)((longlong)ppSVar16 + (uVar18 - 1)) = 0;
    return;
  case 0xe:
    *(undefined8 *)((longlong)ppSVar16 + (uVar18 - 0xe)) = 0;
  case 6:
    *(undefined4 *)((longlong)ppSVar16 + (uVar18 - 6)) = 0;
  case 2:
    *(undefined2 *)((longlong)ppSVar16 + (uVar18 - 2)) = 0;
    return;
  case 0xf:
    *(undefined8 *)((longlong)ppSVar16 + (uVar18 - 0xf)) = 0;
  case 7:
    *(undefined4 *)((longlong)ppSVar16 + (uVar18 - 7)) = 0;
  case 3:
    *(undefined2 *)((longlong)ppSVar16 + (uVar18 - 3)) = 0;
  case 1:
    *(undefined1 *)((longlong)ppSVar16 + (uVar18 - 1)) = 0;
    return;
  }
  auVar20._0_16_ = ZEXT816(0);
  if (uVar18 < 0x21) {
    *(undefined1 (*) [16])ppSVar16 = auVar20._0_16_;
    *(undefined1 (*) [16])((longlong)ppSVar16 + (uVar18 - 0x10)) = auVar20._0_16_;
    return;
  }
  if (uRam_? < 3) {
    if ((uVar18 <= uRam_?) || ((bRam_? & 2) == 0)) {
      lVar19 = ((ulonglong)ppSVar16 & 0xf) - 0x10;
      pauVar15 = (undefined1 (*) [16])((longlong)ppSVar16 - lVar19);
      uVar18 = uVar18 + lVar19;
      if (0x80 < uVar18) {
        do {
          *pauVar15 = auVar20._0_16_;
          pauVar15[1] = auVar20._0_16_;
          pauVar15[2] = auVar20._0_16_;
          pauVar15[3] = auVar20._0_16_;
          pauVar15[4] = auVar20._0_16_;
          pauVar15[5] = auVar20._0_16_;
          pauVar15[6] = auVar20._0_16_;
          pauVar15[7] = auVar20._0_16_;
          pauVar15 = pauVar15 + 8;
          uVar18 = uVar18 - 0x80;
        } while (0x7f < uVar18);
      }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)*(uint *)(&UNK_? + (uVar18 + 0xf >> 4) * 4) + 0xADDR))
                (pauVar15,-lVar19);
      return;
    }
  }
  else if (((uVar18 <= uRam_?) || (uRam_? < uVar18)) ||
          ((bRam_? & 2) == 0)) {
    auVar20._16_16_ = auVar20._0_16_;
    lVar19 = ((ulonglong)ppSVar16 & 0x1f) - 0x20;
    pauVar13 = (undefined1 (*) [32])((longlong)ppSVar16 - lVar19);
    uVar18 = uVar18 + lVar19;
    if (0x100 < uVar18) {
      if (uRam_? < uVar18) {
        do {
          uVar17 = uVar18;
          pauVar14 = pauVar13;
          auVar3 = vmovntdq_avx(auVar20);
          *pauVar14 = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[1] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[2] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[3] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[4] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[5] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[6] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[7] = auVar3;
          pauVar13 = pauVar14 + 8;
          uVar18 = uVar17 - 0x100;
        } while (0xff < uVar17 - 0x100);
        uVar18 = uVar17 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar17) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(*pauVar14 + uVar18) = auVar3;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[1] + uVar18) = auVar3;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[2] + uVar18) = auVar3;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[3] + uVar18) = auVar3;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[4] + uVar18) = auVar3;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[5] + uVar18) = auVar3;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[6] + uVar18) = auVar3;
        default:
          *(undefined1 (*) [32])(pauVar14[-1] + uVar17) = auVar20;
        case 0x100:
          *(undefined1 (*) [32])ppSVar16 = auVar20;
          return;
        }
      }
      do {
        *pauVar13 = auVar20;
        pauVar13[1] = auVar20;
        pauVar13[2] = auVar20;
        pauVar13[3] = auVar20;
        pauVar13[4] = auVar20;
        pauVar13[5] = auVar20;
        pauVar13[6] = auVar20;
        pauVar13[7] = auVar20;
        pauVar13 = pauVar13 + 8;
        uVar18 = uVar18 - 0x100;
      } while (0xff < uVar18);
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulonglong)*(uint *)(&UNK_? + (uVar18 + 0x1f >> 5) * 4) + 0xADDR))
              (0,-lVar19);
    return;
  }
  for (; uVar18 != 0; uVar18 = uVar18 - 1) {
    *(undefined1 *)ppSVar16 = 0;
    ppSVar16 = (String **)((longlong)ppSVar16 + 1);
  }
  return;
}


/* Void ClearReferences() */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_ClearReferences
               (CatalogEntry *this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [32];
  int iVar4;
  int iVar5;
  List_1_System_String_ *pLVar6;
  String__Array *this_00;
  code *pcVar7;
  int iVar8;
  int32_t iVar9;
  ArgumentNullException *this_01;
  undefined8 uVar10;
  IndexOutOfRangeException *pIVar11;
  String *pSVar12;
  undefined1 (*pauVar13) [32];
  undefined1 (*pauVar14) [32];
  undefined1 (*pauVar15) [16];
  String **ppSVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auVar20 [32];
  
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar6 = (this->fields).references;
  if (pLVar6 == (List_1_System_String_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar4 = (pLVar6->fields)._size;
  piVar1 = &(pLVar6->fields)._version;
  *piVar1 = *piVar1 + 1;
  (pLVar6->fields)._size = 0;
  if (iVar4 < 1) {
    return;
  }
  this_00 = (pLVar6->fields)._items;
  if (this_00 == (String__Array *)0x0) {
    uVar10 = func_?(&TypeInfo__System__ArgumentNullException,0,iVar4,0);
    this_01 = (ArgumentNullException *)func_?(uVar10);
    pSVar12 = (String *)func_?(&StringLiteral_array);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_01,pSVar12,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__System__Array__Clear_MethodInfo__System__Array__int__int_
                                );
    FUN_?(this_01,uVar10);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (iVar4 < 0) {
    uVar10 = func_?(&TypeInfo__System__IndexOutOfRangeException,0,iVar4,0);
    pIVar11 = (IndexOutOfRangeException *)func_?(uVar10);
    pSVar12 = (String *)func_?(&StringLiteral_length___0);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (pIVar11,pSVar12,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__System__Array__Clear_MethodInfo__System__Array__int__int_
                                );
    FUN_?(pIVar11,uVar10);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((((Array__Class *)this_00->klass)->_1).initialized_and_no_error == 0 &&
      ((((Array__Class *)this_00->klass)->_1).initialized == 0 &&
      ((((Array__Class *)this_00->klass)->_1).enumtype == 0 &&
      ((((Array__Class *)this_00->klass)->_1).nullabletype == 0 &&
      ((((Array__Class *)this_00->klass)->_1).is_generic == 0 &&
      ((((Array__Class *)this_00->klass)->_1).has_references == 0 &&
      ((((Array__Class *)this_00->klass)->_1).init_pending == 0 &&
      (((Array__Class *)this_00->klass)->_1).size_init_pending == 0))))))) {
    uVar10 = FUN_?();
    FUN_?(uVar10,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (this_00->bounds == (Il2CppArrayBounds *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = this_00->bounds->lower_bound;
  }
  if (0 < iVar8) {
    uVar10 = func_?(&TypeInfo__System__IndexOutOfRangeException,0,iVar4,0);
    pIVar11 = (IndexOutOfRangeException *)func_?(uVar10);
    pSVar12 = (String *)func_?(&StringLiteral_index___lower_bound);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (pIVar11,pSVar12,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__System__Array__Clear_MethodInfo__System__Array__int__int_
                                );
    FUN_?(pIVar11,uVar10);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = mscorlib.dll::System::Array::Array_get_Length((Array *)this_00,(MethodInfo *)0x0);
  if (iVar9 - iVar4 < -iVar8) {
    uVar10 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar11 = (IndexOutOfRangeException *)func_?(uVar10);
    pSVar12 = (String *)func_?(&StringLiteral_index___length___size);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (pIVar11,pSVar12,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__System__Array__Clear_MethodInfo__System__Array__int__int_
                                );
    FUN_?(pIVar11,uVar10);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar5 = (((Array__Class *)this_00->klass)->_1).native_size;
  uVar18 = (ulonglong)(iVar5 * iVar4);
  ppSVar16 = (String **)((longlong)this_00->vector + (longlong)iVar5 * (longlong)-iVar8);
  switch(uVar18) {
  case 0:
    return;
  case 8:
    *(undefined8 *)((longlong)ppSVar16 + (uVar18 - 8)) = 0;
    return;
  case 9:
    *(undefined8 *)((longlong)ppSVar16 + (uVar18 - 9)) = 0;
    *(undefined1 *)((longlong)ppSVar16 + (uVar18 - 1)) = 0;
    return;
  case 10:
    *(undefined8 *)((longlong)ppSVar16 + (uVar18 - 10)) = 0;
    *(undefined2 *)((longlong)ppSVar16 + (uVar18 - 2)) = 0;
    return;
  case 0xb:
    *(undefined8 *)((longlong)ppSVar16 + (uVar18 - 0xb)) = 0;
    *(undefined2 *)((longlong)ppSVar16 + (uVar18 - 3)) = 0;
    *(undefined1 *)((longlong)ppSVar16 + (uVar18 - 1)) = 0;
    return;
  case 0xc:
    *(undefined8 *)((longlong)ppSVar16 + (uVar18 - 0xc)) = 0;
  case 4:
    *(undefined4 *)((longlong)ppSVar16 + (uVar18 - 4)) = 0;
    return;
  case 0xd:
    *(undefined8 *)((longlong)ppSVar16 + (uVar18 - 0xd)) = 0;
  case 5:
    *(undefined4 *)((longlong)ppSVar16 + (uVar18 - 5)) = 0;
    *(undefined1 *)((longlong)ppSVar16 + (uVar18 - 1)) = 0;
    return;
  case 0xe:
    *(undefined8 *)((longlong)ppSVar16 + (uVar18 - 0xe)) = 0;
  case 6:
    *(undefined4 *)((longlong)ppSVar16 + (uVar18 - 6)) = 0;
  case 2:
    *(undefined2 *)((longlong)ppSVar16 + (uVar18 - 2)) = 0;
    return;
  case 0xf:
    *(undefined8 *)((longlong)ppSVar16 + (uVar18 - 0xf)) = 0;
  case 7:
    *(undefined4 *)((longlong)ppSVar16 + (uVar18 - 7)) = 0;
  case 3:
    *(undefined2 *)((longlong)ppSVar16 + (uVar18 - 3)) = 0;
  case 1:
    *(undefined1 *)((longlong)ppSVar16 + (uVar18 - 1)) = 0;
    return;
  }
  auVar20._0_16_ = ZEXT816(0);
  if (uVar18 < 0x21) {
    *(undefined1 (*) [16])ppSVar16 = auVar20._0_16_;
    *(undefined1 (*) [16])((longlong)ppSVar16 + (uVar18 - 0x10)) = auVar20._0_16_;
    return;
  }
  if (uRam_? < 3) {
    if ((uVar18 <= uRam_?) || ((bRam_? & 2) == 0)) {
      lVar19 = ((ulonglong)ppSVar16 & 0xf) - 0x10;
      pauVar15 = (undefined1 (*) [16])((longlong)ppSVar16 - lVar19);
      uVar18 = uVar18 + lVar19;
      if (0x80 < uVar18) {
        do {
          *pauVar15 = auVar20._0_16_;
          pauVar15[1] = auVar20._0_16_;
          pauVar15[2] = auVar20._0_16_;
          pauVar15[3] = auVar20._0_16_;
          pauVar15[4] = auVar20._0_16_;
          pauVar15[5] = auVar20._0_16_;
          pauVar15[6] = auVar20._0_16_;
          pauVar15[7] = auVar20._0_16_;
          pauVar15 = pauVar15 + 8;
          uVar18 = uVar18 - 0x80;
        } while (0x7f < uVar18);
      }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)*(uint *)(&UNK_? + (uVar18 + 0xf >> 4) * 4) + 0xADDR))
                (pauVar15,-lVar19);
      return;
    }
  }
  else if (((uVar18 <= uRam_?) || (uRam_? < uVar18)) ||
          ((bRam_? & 2) == 0)) {
    auVar20._16_16_ = auVar20._0_16_;
    lVar19 = ((ulonglong)ppSVar16 & 0x1f) - 0x20;
    pauVar13 = (undefined1 (*) [32])((longlong)ppSVar16 - lVar19);
    uVar18 = uVar18 + lVar19;
    if (0x100 < uVar18) {
      if (uRam_? < uVar18) {
        do {
          uVar17 = uVar18;
          pauVar14 = pauVar13;
          auVar3 = vmovntdq_avx(auVar20);
          *pauVar14 = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[1] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[2] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[3] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[4] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[5] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[6] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[7] = auVar3;
          pauVar13 = pauVar14 + 8;
          uVar18 = uVar17 - 0x100;
        } while (0xff < uVar17 - 0x100);
        uVar18 = uVar17 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar17) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(*pauVar14 + uVar18) = auVar3;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[1] + uVar18) = auVar3;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[2] + uVar18) = auVar3;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[3] + uVar18) = auVar3;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[4] + uVar18) = auVar3;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[5] + uVar18) = auVar3;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[6] + uVar18) = auVar3;
        default:
          *(undefined1 (*) [32])(pauVar14[-1] + uVar17) = auVar20;
        case 0x100:
          *(undefined1 (*) [32])ppSVar16 = auVar20;
          return;
        }
      }
      do {
        *pauVar13 = auVar20;
        pauVar13[1] = auVar20;
        pauVar13[2] = auVar20;
        pauVar13[3] = auVar20;
        pauVar13[4] = auVar20;
        pauVar13[5] = auVar20;
        pauVar13[6] = auVar20;
        pauVar13[7] = auVar20;
        pauVar13 = pauVar13 + 8;
        uVar18 = uVar18 - 0x100;
      } while (0xff < uVar18);
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulonglong)*(uint *)(&UNK_? + (uVar18 + 0x1f >> 5) * 4) + 0xADDR))
              (0,-lVar19);
    return;
  }
  for (; uVar18 != 0; uVar18 = uVar18 - 1) {
    *(undefined1 *)ppSVar16 = 0;
    ppSVar16 = (String **)((longlong)ppSVar16 + 1);
  }
  return;
}


/* String GetTranslation(Int32) */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_GetTranslation
                   (CatalogEntry *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (-1 < index) {
    pLVar1 = (this->fields).translations;
    if (pLVar1 != (List_1_System_String_ *)0x0) {
      uVar2 = (pLVar1->fields)._size;
      if ((int)uVar2 <= index) goto code_?;
      if (uVar2 <= (uint)index) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar3)();
        return pSVar4;
      }
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 != (String__Array *)0x0) {
        if ((uint)index < (uint)pSVar5->max_length) {
          return pSVar5->vector[index];
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar3)();
        return pSVar4;
      }
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar3)();
    return pSVar4;
  }
code_?:
  return (String *)**(undefined8 **)(lRam_? + 0xb8);
}


/* Boolean IsInFormat(String) */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_IsInFormat
               (CatalogEntry *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__0__format);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral__0__format;
  pSVar2 = (this->fields).moreFlags;
  if ((pSVar2 == (String *)0x0) || ((pSVar2->fields)._stringLength == 0)) {
    return 0;
  }
  PStack_3._arg0 = (Object *)0x0;
  PStack_3._arg1 = (Object *)0x0;
  PStack_3._arg2 = (Object *)0x0;
  PStack_3._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor
            (&PStack_3,(Object *)format,(MethodInfo *)0x0);
  PStack_4._arg0 = PStack_3._arg0;
  PStack_4._arg1 = PStack_3._arg1;
  PStack_4._arg2 = PStack_3._arg2;
  PStack_4._args = PStack_3._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_4,(MethodInfo *)0x0);
  pSVar2 = (this->fields).moreFlags;
  if (pSVar2 != (String *)0x0) {
    pSVar5 = mscorlib.dll::System::String::String_Split
                       (pSVar2,0x2c,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
    uVar6 = 0;
    if (pSVar5 != (String__Array *)0x0) {
      ppSVar7 = pSVar5->vector;
      while( true ) {
        if ((int)pSVar5->max_length <= (int)uVar6) {
          return 0;
        }
        if ((uint)pSVar5->max_length <= uVar6) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        if (*ppSVar7 == (String *)0x0) break;
        pSVar2 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                           (*ppSVar7,String_TrimType__Enum_Both,(MethodInfo *)0x0);
        if ((pSVar2 == pSVar1) ||
           ((((pSVar2 != (String *)0x0 && (pSVar1 != (String *)0x0)) &&
             ((pSVar2->fields)._stringLength == (pSVar1->fields)._stringLength)) &&
            (bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar2->fields)._firstChar,
                                (uint8_t *)&(pSVar1->fields)._firstChar,
                                (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar9 != 0)))) {
          return 1;
        }
        uVar6 = uVar6 + 1;
        ppSVar7 = ppSVar7 + 1;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* String MakeKey(String, String) */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_MakeKey
                   (String *msgid,String *context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__0__1_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral__0__1_;
  if ((msgid != (String *)0x0) && ((msgid->fields)._stringLength != 0)) {
    if ((context == (String *)0x0) || ((context->fields)._stringLength == 0)) {
      pSVar2 = (String *)**(undefined8 **)(lRam_? + 0xb8);
    }
    else {
      pSVar2 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                         (context,String_TrimType__Enum_Both,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_4
                         (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
    }
    PStack_3._arg0 = (Object *)0x0;
    PStack_3._arg1 = (Object *)0x0;
    PStack_3._arg2 = (Object *)0x0;
    PStack_3._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_3,(Object *)pSVar2,(Object *)msgid,(MethodInfo *)0x0);
    PStack_4._arg0 = PStack_3._arg0;
    PStack_4._arg1 = PStack_3._arg1;
    PStack_4._arg2 = PStack_3._arg2;
    PStack_4._args = PStack_3._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_4,(MethodInfo *)0x0);
    return pSVar1;
  }
  uVar5 = func_?(&TypeInfo__System__Exception);
  this = (Exception *)func_?(uVar5);
  pSVar1 = (String *)func_?(&StringLiteral_Msgid_cannot_be_empty);
  mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar1,(MethodInfo *)0x0);
  uVar5 = func_?(&
                              MethodInfo__GNU__Gettext__CatalogEntry__MakeKey_System__String__System__String_
                             );
  FUN_?(this,uVar5);
  pcVar6 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar6)();
  return pSVar1;
}


/* Void MarkOwnerDirty() */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_MarkOwnerDirty
               (CatalogEntry *this,MethodInfo *method)

{
  if ((this->fields).owner != (Catalog *)0x0) {
    pCVar1 = (this->fields).owner;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs,1,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    (pCVar1->fields).isDirty = 1;
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__System__EventArgs);
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pCVar1->klass->vtable).OnDirtyChanged.methodPtr)
              (pCVar1,TypeInfo__System__EventArgs->static_fields->Empty,
               (pCVar1->klass->vtable).OnDirtyChanged.method);
    return;
  }
  return;
}


/* Void RemoveReference(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_RemoveReference
               (CatalogEntry *this,String *reference,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Remove_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).references;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    cVar2 = FUN_?(pLVar1,reference);
    if (cVar2 != '\0') {
      pLVar1 = (this->fields).references;
      if (pLVar1 == (List_1_System_String_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)pLVar1,(Object *)reference,
                 MethodInfo__System__Collections__Generic__List<System::String>__Remove_System__String_
                );
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean RemoveReferenceTo(String) */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_RemoveReferenceTo
               (CatalogEntry *this,String *fileNamePrefix,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__RemoveAt_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).references;
  index = 0;
  bVar2 = 0;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    lVar3 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)index) {
        return bVar2;
      }
      pLVar1 = (this->fields).references;
      if (pLVar1 == (List_1_System_String_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= index) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        bVar2 = (*pcVar4)();
        return bVar2;
      }
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 == (String__Array *)0x0) break;
      if ((uint)pSVar5->max_length <= index) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        bVar2 = (*pcVar4)();
        return bVar2;
      }
      this_00 = *(String **)((longlong)pSVar5->vector + lVar3 + -0x20);
      if (this_00 == (String *)0x0) break;
      bVar6 = mscorlib.dll::System::String::String_StartsWith
                        (this_00,fileNamePrefix,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        pLVar1 = (this->fields).references;
        if (pLVar1 == (List_1_System_String_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)pLVar1,index,
                   MethodInfo__System__Collections__Generic__List<System::String>__RemoveAt_int_);
        index = index - 1;
        bVar2 = 1;
        lVar3 = lVar3 + -8;
      }
      pLVar1 = (this->fields).references;
      index = index + 1;
      lVar3 = lVar3 + 8;
    } while (pLVar1 != (List_1_System_String_ *)0x0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void SetPluralString(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_SetPluralString
               (CatalogEntry *this,String *plural,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).plural = plural;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).plural >> 0xc);
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
  if ((plural != (String *)0x0) && ((plural->fields)._stringLength != 0)) {
    (this->fields).hasPlural = 1;
    return;
  }
  (this->fields).hasPlural = 0;
  return;
}


/* Void SetString(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_SetString
               (CatalogEntry *this,String *str,MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  (this->fields).str = str;
  if (bVar1) {
    (this->fields).validity = 0;
    return;
  }
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
  (this->fields).validity = 0;
  return;
}


/* Void SetTranslation(String, Int32) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_SetTranslation
               (CatalogEntry *this,String *translation,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).translations;
  pMVar2 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
  do {
    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_ = pMVar2;
    if (pLVar1 == (List_1_System_String_ *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (this->fields).translations;
    if (index < (pLVar1->fields)._size) {
      if (this_00 == (List_1_System_String_ *)0x0) goto code_?;
      if ((uint)(this_00->fields)._size <= (uint)index) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pSVar4 = (this_00->fields)._items;
      if (pSVar4 == (String__Array *)0x0) goto code_?;
      if ((uint)pSVar4->max_length <= (uint)index) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pSVar5 = pSVar4->vector[index];
      if ((pSVar5 != translation) &&
         ((((pSVar5 == (String *)0x0 || (translation == (String *)0x0)) ||
           ((pSVar5->fields)._stringLength != (translation->fields)._stringLength)) ||
          (bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar5->fields)._firstChar,
                              (uint8_t *)&(translation->fields)._firstChar,
                              (longlong)(pSVar5->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar6 == 0)))) {
        pLVar1 = (this->fields).translations;
        if (pLVar1 == (List_1_System_String_ *)0x0) goto code_?;
        if ((uint)(pLVar1->fields)._size <= (uint)index) goto code_?;
        pSVar4 = (pLVar1->fields)._items;
        if (pSVar4 == (String__Array *)0x0) goto code_?;
        FUN_?(pSVar4,(longlong)index);
        piVar7 = &(pLVar1->fields)._version;
        *piVar7 = *piVar7 + 1;
        (this->fields).validity = 0;
        if ((this->fields).owner != (Catalog *)0x0) {
          Catalog::Catalog_set_IsDirty((this->fields).owner,1,(MethodInfo *)0x0);
        }
      }
      return;
    }
    item = (Object *)**(undefined8 **)(lRam_? + 0xb8);
    if (this_00 == (List_1_System_String_ *)0x0) goto code_?;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    pSVar4 = (this_00->fields)._items;
    if (pSVar4 == (String__Array *)0x0) goto code_?;
    uVar8 = (this_00->fields)._size;
    if (uVar8 < (uint)pSVar4->max_length) {
      (this_00->fields)._size = uVar8 + 1;
      FUN_?(pSVar4,(longlong)(int)uVar8,item);
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__AddWithResize
                ((List_1_System_Object_ *)this_00,item,pMVar2->klass->rgctx_data[0xe].method);
    }
    pLVar1 = (this->fields).translations;
    pMVar2 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
  } while( true );
}


/* Void SetTranslations(String[]) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_SetTranslations
               (CatalogEntry *this,String__Array *translations,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_String_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)this_00,(IEnumerable_1_System_Object_ *)translations,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  bVar1 = iRam_? != 0;
  (this->fields).translations = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).translations >> 0xc);
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
  (this->fields).validity = 0;
  if ((this->fields).owner != (Catalog *)0x0) {
    Catalog::Catalog_set_IsDirty((this->fields).owner,1,(MethodInfo *)0x0);
  }
  return;
}


/* CatalogEntry(Catalog, String, String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry__ctor
               (CatalogEntry *this,Catalog *owner,String *str,String *plural,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).context = (String *)**(undefined8 **)(lRam_? + 0xb8);
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).context >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  iVar6 = iRam_?;
  (this->fields).owner = owner;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).owner >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar5);
  }
  (this->fields).str = str;
  iVar7 = 0;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar5);
  }
  (this->fields).plural = plural;
  if (iVar7 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).plural >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if ((plural == (String *)0x0) || ((plural->fields)._stringLength == 0)) {
    bVar8 = 0;
  }
  else {
    bVar8 = 1;
  }
  (this->fields).hasPlural = bVar8;
  pLVar9 = (List_1_System_String_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar9,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  bVar5 = iRam_? != 0;
  (this->fields).references = pLVar9;
  if (bVar5) {
    uVar1 = (uint)((ulonglong)&(this->fields).references >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pLVar9 = (List_1_System_String_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar9,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  bVar5 = iRam_? != 0;
  (this->fields).autocomments = pLVar9;
  if (bVar5) {
    uVar1 = (uint)((ulonglong)&(this->fields).autocomments >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pLVar9 = (List_1_System_String_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar9,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  bVar5 = iRam_? != 0;
  (this->fields).translations = pLVar9;
  if (bVar5) {
    uVar1 = (uint)((ulonglong)&(this->fields).translations >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  (this->fields).isFuzzy = 0;
  (this->fields).isModified = 0;
  (this->fields).isAutomatic = 0;
  (this->fields).validity = 0;
  return;
}


/* CatalogEntry(Catalog, CatalogEntry) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry__ctor_1
               (CatalogEntry *this,Catalog *owner,CatalogEntry *dt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).context = (String *)**(undefined8 **)(lRam_? + 0xb8);
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).context >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).owner = owner;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).owner >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  if (dt == (CatalogEntry *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->fields).str = (dt->fields).str;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).plural = (dt->fields).plural;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).plural >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  (this->fields).hasPlural = (dt->fields).hasPlural;
  pLVar9 = (dt->fields).translations;
  pLVar10 = (List_1_System_String_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)pLVar10,(IEnumerable_1_System_Object_ *)pLVar9,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  bVar6 = iRam_? != 0;
  (this->fields).translations = pLVar10;
  if (bVar6) {
    uVar2 = (uint)((ulonglong)&(this->fields).translations >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pLVar9 = (dt->fields).references;
  pLVar10 = (List_1_System_String_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)pLVar10,(IEnumerable_1_System_Object_ *)pLVar9,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  bVar6 = iRam_? != 0;
  (this->fields).references = pLVar10;
  if (bVar6) {
    uVar2 = (uint)((ulonglong)&(this->fields).references >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pLVar9 = (dt->fields).autocomments;
  pLVar10 = (List_1_System_String_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)pLVar10,(IEnumerable_1_System_Object_ *)pLVar9,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  iVar1 = iRam_?;
  (this->fields).autocomments = pLVar10;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).autocomments >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).isFuzzy = (dt->fields).isFuzzy;
  (this->fields).isModified = (dt->fields).isModified;
  (this->fields).isAutomatic = (dt->fields).isAutomatic;
  (this->fields).hasBadTokens = (dt->fields).hasBadTokens;
  (this->fields).moreFlags = (dt->fields).moreFlags;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).moreFlags >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).comment = (dt->fields).comment;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).comment >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).validity = (dt->fields).validity;
  (this->fields).errorString = (dt->fields).errorString;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).errorString >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).context = (dt->fields).context;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).context >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* String[] get_AutoComments() */

String__Array *
Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_AutoComments
          (CatalogEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<System::String>__ToArray__;
  pLVar2 = (this->fields).autocomments;
  if (pLVar2 != (List_1_System_String_ *)0x0) {
    if ((pLVar2->fields)._size != 0) {
      pvVar3 = MethodInfo__System__Collections__Generic__List<System::String>__ToArray__->klass->
               rgctx_data[3].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
        pvVar3 = (void *)FUN_?(pvVar3);
      }
      pSVar4 = (String__Array *)FUN_?(pvVar3);
      mscorlib.dll::System::Array::Array_Copy_3
                ((Array *)(pLVar2->fields)._items,0,(Array *)pSVar4,0,(pLVar2->fields)._size,
                 (MethodInfo *)0x0);
      return pSVar4;
    }
    pvVar3 = MethodInfo__System__Collections__Generic__List<System::String>__ToArray__->klass->
             rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?(pvVar3);
    }
    if (*(int *)((longlong)pvVar3 + 0xe4) == 0) {
      FUN_?(pvVar3);
    }
    pIVar5 = pMVar1->klass->rgctx_data[2].klass;
    if ((pIVar5->field_0x135 & 1) == 0) {
      pIVar5 = (Il2CppClass *)FUN_?(pIVar5);
    }
    return *(String__Array **)pIVar5->static_fields;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pSVar4 = (String__Array *)(*pcVar6)();
  return pSVar4;
}


/* String get_Flags() */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_Flags
                   (CatalogEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___fuzzy);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (String *)**(undefined8 **)(lRam_? + 0xb8);
  if ((this->fields).isFuzzy != 0) {
    pSVar1 = StringLiteral___fuzzy;
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar1,(this->fields).moreFlags,(MethodInfo *)0x0);
  pSVar1 = ::StringLiteral__;
  if ((pSVar2 == (String *)0x0) || ((pSVar2->fields)._stringLength == 0)) {
    return (String *)**(undefined8 **)(lRam_? + 0xb8);
  }
  if ((::StringLiteral__ == (String *)0x0) || ((::StringLiteral__->fields)._stringLength == 0)) {
    if ((pSVar2 != (String *)0x0) && ((pSVar2->fields)._stringLength != 0)) {
      return pSVar2;
    }
    return (String *)**(undefined8 **)(lRam_? + 0xb8);
  }
  if ((pSVar2 == (String *)0x0) || ((pSVar2->fields)._stringLength == 0)) {
    return ::StringLiteral__;
  }
  iVar3 = (::StringLiteral__->fields)._stringLength;
  pSVar4 = (String *)FUN_?((pSVar2->fields)._stringLength + iVar3,pSVar2,0);
  if (pSVar4 == (String *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar5)();
    return pSVar1;
  }
  if ((pSVar1->fields)._stringLength <= (pSVar4->fields)._stringLength) {
    puVar6 = &(pSVar4->fields)._firstChar;
    puVar7 = &(pSVar1->fields)._firstChar;
    uVar8 = (pSVar1->fields)._stringLength * 2;
    if (((ulonglong)((longlong)puVar6 - (longlong)puVar7) < (ulonglong)uVar8) ||
       ((ulonglong)((longlong)puVar7 - (longlong)puVar6) < (ulonglong)uVar8)) {
      FUN_?();
    }
    else {
      mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                ((uint8_t *)puVar6,(uint8_t *)puVar7,uVar8,(MethodInfo *)0x0);
    }
    if ((pSVar2->fields)._stringLength <= (pSVar4->fields)._stringLength - iVar3) {
      puVar7 = &(pSVar4->fields)._firstChar + iVar3;
      puVar6 = &(pSVar2->fields)._firstChar;
      uVar8 = (pSVar2->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar7 - (longlong)puVar6) < (ulonglong)uVar8) ||
         ((ulonglong)((longlong)puVar6 - (longlong)puVar7) < (ulonglong)uVar8)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar7,(uint8_t *)puVar6,uVar8,(MethodInfo *)0x0);
      }
      return pSVar4;
    }
    uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar10 = (IndexOutOfRangeException *)func_?(uVar9);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar10,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                               );
    FUN_?(pIVar10,uVar9);
    pcVar5 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar5)();
    return pSVar1;
  }
  uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  pIVar10 = (IndexOutOfRangeException *)func_?(uVar9);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
            (pIVar10,(MethodInfo *)0x0);
  uVar9 = func_?(&
                              MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                             );
  FUN_?(pIVar10,uVar9);
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* Boolean get_HasComment() */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_HasComment
               (CatalogEntry *this,MethodInfo *method)

{
  pSVar1 = (this->fields).comment;
  if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
    return 1;
  }
  return 0;
}


/* Boolean get_HasContext() */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_HasContext
               (CatalogEntry *this,MethodInfo *method)

{
  pSVar1 = (this->fields).context;
  if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
    return 1;
  }
  return 0;
}


/* Boolean get_IsTranslated() */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_IsTranslated
               (CatalogEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).translations;
  if (pLVar1 == (List_1_System_String_ *)0x0) goto code_?;
  pCVar2 = (this->fields).owner;
  iVar3 = (pLVar1->fields)._size;
  if (pCVar2 == (Catalog *)0x0) goto code_?;
  iVar4 = Catalog::Catalog_get_PluralFormsCount(pCVar2,(MethodInfo *)0x0);
  if (iVar3 < iVar4) {
    if ((this->fields).hasPlural == 0) {
      pLVar1 = (this->fields).translations;
      if (pLVar1 == (List_1_System_String_ *)0x0) goto code_?;
      if ((pLVar1->fields)._size == 0) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      pSVar7 = (pLVar1->fields)._items;
      if (pSVar7 == (String__Array *)0x0) goto code_?;
      if ((int)pSVar7->max_length == 0) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      if ((pSVar7->vector[0] != (String *)0x0) &&
         (bVar6 = 1, (pSVar7->vector[0]->fields)._stringLength != 0)) goto code_?;
    }
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
code_?:
  if ((bVar6 == 0) || ((this->fields).hasPlural == 0)) {
    return bVar6;
  }
  pCVar2 = (this->fields).owner;
  uVar8 = 0;
  if (pCVar2 != (Catalog *)0x0) {
    lVar9 = 0x20;
    do {
      iVar4 = Catalog::Catalog_get_PluralFormsCount(pCVar2,(MethodInfo *)0x0);
      if (iVar4 <= (int)uVar8) {
        return bVar6;
      }
      pLVar1 = (this->fields).translations;
      if (pLVar1 == (List_1_System_String_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar8) goto code_?;
      pSVar7 = (pLVar1->fields)._items;
      if (pSVar7 == (String__Array *)0x0) break;
      if ((uint)pSVar7->max_length <= uVar8) goto code_?;
      lVar10 = *(longlong *)((longlong)pSVar7->vector + lVar9 + -0x20);
      if ((lVar10 == 0) || (*(int *)(lVar10 + 0x10) == 0)) {
        return 0;
      }
      pCVar2 = (this->fields).owner;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while (pCVar2 != (Catalog *)0x0);
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* String get_Key() */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_Key
                   (CatalogEntry *this,MethodInfo *method)

{
  pSVar1 = (this->fields).context;
  arg1 = (this->fields).str;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__0__1_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  format = StringLiteral__0__1_;
  if ((arg1 != (String *)0x0) && ((arg1->fields)._stringLength != 0)) {
    if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
      pSVar1 = (String *)**(undefined8 **)(lRam_? + 0xb8);
    }
    else {
      pSVar1 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                         (pSVar1,String_TrimType__Enum_Both,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                         (pSVar1,::StringLiteral__,(MethodInfo *)0x0);
    }
    PStack_2._arg0 = (Object *)0x0;
    PStack_2._arg1 = (Object *)0x0;
    PStack_2._arg2 = (Object *)0x0;
    PStack_2._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_2,(Object *)pSVar1,(Object *)arg1,(MethodInfo *)0x0);
    PStack_3._arg0 = PStack_2._arg0;
    PStack_3._arg1 = PStack_2._arg1;
    PStack_3._arg2 = PStack_2._arg2;
    PStack_3._args = PStack_2._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,format,&PStack_3,(MethodInfo *)0x0);
    return pSVar1;
  }
  uVar4 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar4);
  pSVar1 = (String *)func_?(&StringLiteral_Msgid_cannot_be_empty);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar1,(MethodInfo *)0x0);
  uVar4 = func_?(&
                              MethodInfo__GNU__Gettext__CatalogEntry__MakeKey_System__String__System__String_
                             );
  FUN_?(this_00,uVar4);
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* String get_LocaleCode() */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_LocaleCode
                   (CatalogEntry *this,MethodInfo *method)

{
  pCVar1 = (this->fields).owner;
  if (pCVar1 == (Catalog *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__IsoCodes);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IO__Path);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = (pCVar1->fields).Language;
  pSVar4 = (String *)**(undefined8 **)(lRam_? + 0xb8);
  if ((pSVar3 != (String *)0x0) && ((pSVar3->fields)._stringLength != 0)) {
    if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__GNU__Gettext__IsoCodes);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar5 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByCode;
    if (pIVar5 == (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0)
    goto code_?;
    cVar6 = FUN_?(4,
                          TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                          ,pIVar5,pSVar3);
    if (cVar6 == '\0') goto code_?;
    if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GNU__Gettext__IsoCodes);
    }
    if (TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByCode ==
        (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) goto code_?;
    lVar7 = FUN_?();
    if (lVar7 == 0) goto code_?;
    pSVar4 = *(String **)(lVar7 + 0x18);
    pSVar3 = (pCVar1->fields).Country;
    if ((pSVar3 == (String *)0x0) || ((pSVar3->fields)._stringLength == 0))
    goto code_?;
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar4,::StringLiteral__,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__GNU__Gettext__IsoCodes);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode ==
        (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) goto code_?;
    cVar6 = FUN_?(4,
                          TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                         );
    if (cVar6 == '\0') {
code_?:
      pSVar4 = (String *)0x0;
    }
    else {
      if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GNU__Gettext__IsoCodes);
      }
      if (TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode ==
          (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0)
      goto code_?;
      plVar8 = (longlong *)FUN_?();
      if (plVar8 == (longlong *)0x0) goto code_?;
      pSVar4 = (String *)(**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat_4(pSVar3,pSVar4,(MethodInfo *)0x0);
  }
code_?:
  if ((((pSVar4 == (String *)0x0) || ((pSVar4->fields)._stringLength == 0)) &&
      (pSVar3 = (pCVar1->fields).fileName, pSVar3 != (String *)0x0)) &&
     ((pSVar3->fields)._stringLength != 0)) {
    if (*(int *)&(TypeInfo__System__IO__Path->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = mscorlib.dll::System::IO::Path::Path_1_GetFileNameWithoutExtension
                       (pSVar3,(MethodInfo *)0x0);
    if (pSVar3 == (String *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
    if ((pSVar3->fields)._stringLength == 2) {
      if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar9 = IsoCodes::IsoCodes_IsKnownLanguageCode(pSVar3,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        pSVar4 = pSVar3;
      }
      return pSVar4;
    }
    if (((pSVar3->fields)._stringLength == 5) && (*(short *)&pSVar3[1].klass == 0x5f)) {
      pSVar10 = mscorlib.dll::System::String::String_Substring_1(pSVar3,0,2,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar9 = IsoCodes::IsoCodes_IsKnownLanguageCode(pSVar10,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        pSVar10 = mscorlib.dll::System::String::String_Substring_1(pSVar3,3,2,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__GNU__Gettext__IsoCodes);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
          FUN_?();
        }
        pIVar5 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode;
        if (pIVar5 == (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0)
        goto code_?;
        cVar6 = FUN_?(4,
                              TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                              ,pIVar5,pSVar10);
        if (cVar6 != '\0') {
          pSVar4 = pSVar3;
        }
      }
    }
  }
  return pSVar4;
}


/* Int32 get_NumberOfTranslations() */

int32_t Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_NumberOfTranslations
                  (CatalogEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).translations;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* String[] get_References() */

String__Array *
Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_References
          (CatalogEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<System::String>__ToArray__;
  pLVar2 = (this->fields).references;
  if (pLVar2 != (List_1_System_String_ *)0x0) {
    if ((pLVar2->fields)._size != 0) {
      pvVar3 = MethodInfo__System__Collections__Generic__List<System::String>__ToArray__->klass->
               rgctx_data[3].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
        pvVar3 = (void *)FUN_?(pvVar3);
      }
      pSVar4 = (String__Array *)FUN_?(pvVar3);
      mscorlib.dll::System::Array::Array_Copy_3
                ((Array *)(pLVar2->fields)._items,0,(Array *)pSVar4,0,(pLVar2->fields)._size,
                 (MethodInfo *)0x0);
      return pSVar4;
    }
    pvVar3 = MethodInfo__System__Collections__Generic__List<System::String>__ToArray__->klass->
             rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?(pvVar3);
    }
    if (*(int *)((longlong)pvVar3 + 0xe4) == 0) {
      FUN_?(pvVar3);
    }
    pIVar5 = pMVar1->klass->rgctx_data[2].klass;
    if ((pIVar5->field_0x135 & 1) == 0) {
      pIVar5 = (Il2CppClass *)FUN_?(pIVar5);
    }
    return *(String__Array **)pIVar5->static_fields;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pSVar4 = (String__Array *)(*pcVar6)();
  return pSVar4;
}


/* Int32 get_TranslationsCount() */

int32_t Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_TranslationsCount
                  (CatalogEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).translations;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_Comment(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_set_Comment
               (CatalogEntry *this,String *value,MethodInfo *method)

{
  pSVar1 = (this->fields).comment;
  if ((pSVar1 != value) &&
     ((((pSVar1 == (String *)0x0 || (value == (String *)0x0)) ||
       ((pSVar1->fields)._stringLength != (value->fields)._stringLength)) ||
      (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(value->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar2 == 0)))) {
    bVar3 = iRam_? != 0;
    (this->fields).comment = value;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).comment >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    if ((this->fields).owner != (Catalog *)0x0) {
      Catalog::Catalog_set_IsDirty((this->fields).owner,1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void set_Context(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_set_Context
               (CatalogEntry *this,String *value,MethodInfo *method)

{
  if (value == (String *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pSVar2 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                     (value,String_TrimType__Enum_Both,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields).context = pSVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).context >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void set_Flags(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_set_Flags
               (CatalogEntry *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fuzzy);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).isFuzzy = 0;
  (this->fields).moreFlags = (String *)**(undefined8 **)(lRam_? + 0xb8);
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).moreFlags >> 0xc);
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
  if ((value == (String *)0x0) || ((value->fields)._stringLength == 0)) {
    return;
  }
  lVar6 = FUN_?(TypeInfo__System__Char);
  if (lVar6 == 0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((*(int *)(lVar6 + 0x18) != 0) &&
     (*(undefined2 *)(lVar6 + 0x20) = 0x23, 1 < *(uint *)(lVar6 + 0x18))) {
    uVar2 = 0;
    *(undefined2 *)(lVar6 + 0x22) = 0x2c;
    if (*(longlong *)(lVar6 + 0x18) == 0) {
      pSVar8 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                         (value,String_TrimType__Enum_Head,(MethodInfo *)0x0);
    }
    else {
      if (*(int *)(lVar6 + 0x18) == 0) goto DAT_?;
      pSVar8 = mscorlib.dll::System::String::String_TrimHelper
                         (value,(uint16_t *)(lVar6 + 0x20),*(int32_t *)(lVar6 + 0x18),
                          String_TrimType__Enum_Head,(MethodInfo *)0x0);
    }
    if ((pSVar8 == (String *)0x0) ||
       (pSVar9 = mscorlib.dll::System::String::String_Split
                           (pSVar8,0x2c,StringSplitOptions__Enum_None,(MethodInfo *)0x0),
       pSVar9 == (String__Array *)0x0)) goto code_?;
    ppSVar10 = pSVar9->vector;
    while( true ) {
      if ((int)pSVar9->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pSVar9->max_length <= uVar2) break;
      pSVar8 = *ppSVar10;
      if (pSVar8 == (String *)0x0) goto code_?;
      pSVar11 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                         (pSVar8,String_TrimType__Enum_Both,(MethodInfo *)0x0);
      if ((pSVar11 == StringLiteral_fuzzy) ||
         ((((pSVar11 != (String *)0x0 && (StringLiteral_fuzzy != (String *)0x0)) &&
           ((pSVar11->fields)._stringLength == (StringLiteral_fuzzy->fields)._stringLength)) &&
          (bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar11->fields)._firstChar,
                              (uint8_t *)&(StringLiteral_fuzzy->fields)._firstChar,
                              (longlong)(pSVar11->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar12 != 0)))) {
        (this->fields).isFuzzy = 1;
        uVar2 = uVar2 + 1;
        ppSVar10 = ppSVar10 + 1;
      }
      else {
        pSVar11 = (this->fields).moreFlags;
        pSVar8 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                           (pSVar8,String_TrimType__Enum_Both,(MethodInfo *)0x0);
        pSVar8 = mscorlib.dll::System::String::String_Concat_5
                           (pSVar11,::StringLiteral___,pSVar8,(MethodInfo *)0x0);
        (this->fields).moreFlags = pSVar8;
        func_?(&(this->fields).moreFlags);
        uVar2 = uVar2 + 1;
        ppSVar10 = ppSVar10 + 1;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void set_IsFuzzy(Boolean) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_set_IsFuzzy
               (CatalogEntry *this,bool value,MethodInfo *method)

{
  (this->fields).isFuzzy = value;
  if ((this->fields).owner != (Catalog *)0x0) {
    pCVar1 = (this->fields).owner;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs,CONCAT71(in_register_00000011,1),0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    (pCVar1->fields).isDirty = 1;
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__System__EventArgs);
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pCVar1->klass->vtable).OnDirtyChanged.methodPtr)
              (pCVar1,TypeInfo__System__EventArgs->static_fields->Empty,
               (pCVar1->klass->vtable).OnDirtyChanged.method);
    return;
  }
  return;
}

