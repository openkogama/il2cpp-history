
/* Void AddAutoComments(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_AddAutoComments
               (CatalogDeletedEntry *this,String *comment,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
  pLVar2 = (this->fields).autocomments;
  if (pLVar2 != (List_1_System_String_ *)0x0) {
    piVar3 = &(pLVar2->fields)._version;
    *piVar3 = *piVar3 + 1;
    pSVar4 = (pLVar2->fields)._items;
    if (pSVar4 != (String__Array *)0x0) {
      uVar5 = (pLVar2->fields)._size;
      if (uVar5 < (uint)pSVar4->max_length) {
        (pLVar2->fields)._size = uVar5 + 1;
      }
      else {
        uVar5 = (pLVar2->fields)._size;
        FUN_?(pLVar2,uVar5 + 1,
                      (pMVar1->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy
                      ,pSVar4,unaff_RDI);
        pSVar4 = (pLVar2->fields)._items;
        (pLVar2->fields)._size = uVar5 + 1;
        if (pSVar4 == (String__Array *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((uint)pSVar4->max_length <= uVar5) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = iRam_? != 0;
      pSVar4->vector[(int)uVar5] = comment;
      if (bVar7) {
        uVar5 = (uint)((ulonglong)(pSVar4->vector + (int)uVar5) >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AddReference(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_AddReference
               (CatalogDeletedEntry *this,String *reference,MethodInfo *method)

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

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_ClearAutoComments
               (CatalogDeletedEntry *this,MethodInfo *method)

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

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_ClearReferences
               (CatalogDeletedEntry *this,MethodInfo *method)

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


/* Void SetDeletedLines(String[]) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_SetDeletedLines
               (CatalogDeletedEntry *this,String__Array *lines,MethodInfo *method)

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
            ((List_1_System_Object_ *)this_00,(IEnumerable_1_System_Object_ *)lines,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  bVar1 = iRam_? != 0;
  (this->fields).deletedLines = this_00;
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
  return;
}


/* CatalogDeletedEntry(String[]) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry__ctor
               (CatalogDeletedEntry *this,String__Array *deletedLines,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_String_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)pLVar1,(IEnumerable_1_System_Object_ *)deletedLines,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  bVar2 = iRam_? != 0;
  (this->fields).deletedLines = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
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
  pLVar1 = (List_1_System_String_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).references = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).references >> 0xc);
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
  pLVar1 = (List_1_System_String_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).autocomments = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).autocomments >> 0xc);
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


/* CatalogDeletedEntry(CatalogDeletedEntry) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry__ctor_1
               (CatalogDeletedEntry *this,CatalogDeletedEntry *dt,MethodInfo *method)

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
  if (dt == (CatalogDeletedEntry *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pLVar2 = (dt->fields).deletedLines;
  pLVar3 = (List_1_System_String_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)pLVar3,(IEnumerable_1_System_Object_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  bVar4 = iRam_? != 0;
  (this->fields).deletedLines = pLVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pLVar2 = (dt->fields).references;
  pLVar3 = (List_1_System_String_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)pLVar3,(IEnumerable_1_System_Object_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  bVar4 = iRam_? != 0;
  (this->fields).references = pLVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).references >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pLVar2 = (dt->fields).autocomments;
  pLVar3 = (List_1_System_String_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)pLVar3,(IEnumerable_1_System_Object_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  iVar9 = iRam_?;
  (this->fields).autocomments = pLVar3;
  if (iVar9 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).autocomments >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar9 = iRam_?;
    } while (!bVar4);
  }
  (this->fields).flags = (dt->fields).flags;
  iVar10 = 0;
  if (iVar9 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).flags >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar10 = iRam_?;
    } while (!bVar4);
  }
  (this->fields).comment = (dt->fields).comment;
  if (iVar10 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).comment >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  return;
}


/* String[] get_AutoComments() */

String__Array *
Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_get_AutoComments
          (CatalogDeletedEntry *this,MethodInfo *method)

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


/* String[] get_DeletedLines() */

String__Array *
Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_get_DeletedLines
          (CatalogDeletedEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<System::String>__ToArray__;
  pLVar2 = (this->fields).deletedLines;
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

String * Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_get_Flags
                   (CatalogDeletedEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).flags;
  if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
    return (String *)**(undefined8 **)(lRam_? + 0xb8);
  }
  bVar2 = mscorlib.dll::System::String::String_StartsWith
                    (pSVar1,::StringLiteral___,(MethodInfo *)0x0);
  pSVar3 = ::StringLiteral____;
  pSVar1 = (this->fields).flags;
  if (bVar2 != 0) {
    return pSVar1;
  }
  if ((::StringLiteral____ != (String *)0x0) && ((::StringLiteral____->fields)._stringLength != 0))
  {
    if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
      return ::StringLiteral____;
    }
    iVar4 = (::StringLiteral____->fields)._stringLength;
    pSVar5 = (String *)FUN_?((pSVar1->fields)._stringLength + iVar4,pSVar1,0);
    if (pSVar5 == (String *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar6)();
      return pSVar1;
    }
    if ((pSVar3->fields)._stringLength <= (pSVar5->fields)._stringLength) {
      puVar7 = &(pSVar5->fields)._firstChar;
      puVar8 = &(pSVar3->fields)._firstChar;
      uVar9 = (pSVar3->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar7 - (longlong)puVar8) < (ulonglong)uVar9) ||
         ((ulonglong)((longlong)puVar8 - (longlong)puVar7) < (ulonglong)uVar9)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar7,(uint8_t *)puVar8,uVar9,(MethodInfo *)0x0);
      }
      if ((pSVar1->fields)._stringLength <= (pSVar5->fields)._stringLength - iVar4) {
        puVar8 = &(pSVar5->fields)._firstChar + iVar4;
        puVar7 = &(pSVar1->fields)._firstChar;
        uVar9 = (pSVar1->fields)._stringLength * 2;
        if (((ulonglong)((longlong)puVar8 - (longlong)puVar7) < (ulonglong)uVar9) ||
           ((ulonglong)((longlong)puVar7 - (longlong)puVar8) < (ulonglong)uVar9)) {
          FUN_?();
        }
        else {
          mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                    ((uint8_t *)puVar8,(uint8_t *)puVar7,uVar9,(MethodInfo *)0x0);
        }
        return pSVar5;
      }
      uVar10 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      pIVar11 = (IndexOutOfRangeException *)func_?(uVar10);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                (pIVar11,(MethodInfo *)0x0);
      uVar10 = func_?(&
                                  MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                 );
      FUN_?(pIVar11,uVar10);
      pcVar6 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar6)();
      return pSVar1;
    }
    uVar10 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar11 = (IndexOutOfRangeException *)func_?(uVar10);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar11,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                               );
    FUN_?(pIVar11,uVar10);
    pcVar6 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar6)();
    return pSVar1;
  }
  if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
    return pSVar1;
  }
  return (String *)**(undefined8 **)(lRam_? + 0xb8);
}


/* Boolean get_HasComment() */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_get_HasComment
               (CatalogDeletedEntry *this,MethodInfo *method)

{
  pSVar1 = (this->fields).comment;
  if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
    return 1;
  }
  return 0;
}


/* String[] get_References() */

String__Array *
Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_get_References
          (CatalogDeletedEntry *this,MethodInfo *method)

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

