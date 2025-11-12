
/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultImages::DefaultImages_Equals
               (DefaultImages *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__DefaultImages);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)0x0;
  if (obj != (Object *)0x0) {
    bVar2 = (TypeInfo__UGUI__Portal__Scripts__DefaultImages->_1).naturalAligment;
    if (((obj->klass->_1).naturalAligment < bVar2) ||
       (bVar3 = true,
       (obj->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
       (Il2CppClass *)TypeInfo__UGUI__Portal__Scripts__DefaultImages)) {
      bVar3 = false;
    }
    if (bVar3) {
      pOVar1 = obj;
    }
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar4 = (*(this->klass->vtable).Equals_2.methodPtr)
                    (this,pOVar1,(this->klass->vtable).Equals_2.method);
  return bVar4;
}


/* Boolean Equals(DefaultImages) */

bool Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultImages::DefaultImages_Equals_1
               (DefaultImages *this,DefaultImages *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__EqualityComparer<UGUI::Portal::Scripts::DefaultGameImages>__get_Default__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == other) {
    return 1;
  }
  if (other != (DefaultImages *)0x0) {
    lVar1 = (*(this->klass->vtable).get_EqualityContract.methodPtr)
                      (this,(this->klass->vtable).get_EqualityContract.method);
    lVar2 = (*(other->klass->vtable).get_EqualityContract.methodPtr)
                      (other,(other->klass->vtable).get_EqualityContract.method);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (lVar1 == lVar2) {
      pEVar3 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
               EqualityComparer_1_System_Object__get_Default
                         (
                         MethodInfo__System__Collections__Generic__EqualityComparer<UGUI::Portal::Scripts::DefaultGameImages>__get_Default__
                         );
      if (pEVar3 != (EqualityComparer_1_System_Object_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        bVar4 = (*(pEVar3->klass->vtable).__unknown.methodPtr)
                          (pEVar3,(this->fields).defaultGameImages,(other->fields).defaultGameImages
                           ,(pEVar3->klass->vtable).__unknown.method);
        return bVar4;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      bVar4 = (*pcVar5)();
      return bVar4;
    }
  }
  return 0;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultImages::DefaultImages_GetHashCode
                  (DefaultImages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__EqualityComparer<System::Type>__get_Default__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__EqualityComparer<UGUI::Portal::Scripts::DefaultGameImages>__get_Default__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
           EqualityComparer_1_System_Object__get_Default
                     (
                     MethodInfo__System__Collections__Generic__EqualityComparer<System::Type>__get_Default__
                     );
  uVar2 = (*(this->klass->vtable).get_EqualityContract.methodPtr)
                    (this,(this->klass->vtable).get_EqualityContract.method);
  if (pEVar1 != (EqualityComparer_1_System_Object_ *)0x0) {
    iVar3 = (*(pEVar1->klass->vtable).__unknown_1.methodPtr)
                      (pEVar1,uVar2,(pEVar1->klass->vtable).__unknown_1.method);
    pEVar1 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
             EqualityComparer_1_System_Object__get_Default
                       (
                       MethodInfo__System__Collections__Generic__EqualityComparer<UGUI::Portal::Scripts::DefaultGameImages>__get_Default__
                       );
    if (pEVar1 != (EqualityComparer_1_System_Object_ *)0x0) {
      iVar4 = (*(pEVar1->klass->vtable).__unknown_1.methodPtr)
                        (pEVar1,(this->fields).defaultGameImages,
                         (pEVar1->klass->vtable).__unknown_1.method);
      return iVar4 + iVar3 * -0x5aaaaad7;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Boolean PrintMembers(StringBuilder) */

bool Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultImages::DefaultImages_PrintMembers
               (DefaultImages *this,StringBuilder *builder,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_defaultGameImages___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (builder != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (builder,StringLiteral_defaultGameImages___,(MethodInfo *)0x0);
    pDVar1 = (this->fields).defaultGameImages;
    if (pDVar1 != (DefaultGameImages *)0x0) {
      value = (String *)
              (*(pDVar1->klass->vtable).ToString.methodPtr)
                        (pDVar1,(pDVar1->klass->vtable).ToString.method);
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (builder,value,(MethodInfo *)0x0);
    }
    return 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* String ToString() */

String * Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultImages::DefaultImages_ToString
                   (DefaultImages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DefaultImages);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_00,(MethodInfo *)0x0);
  if (this_00 != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (this_00,StringLiteral_DefaultImages,(MethodInfo *)0x0);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (this_00,::StringLiteral____,(MethodInfo *)0x0);
    cVar1 = (*(this->klass->vtable).PrintMembers.methodPtr)(this,this_00);
    if (cVar1 != '\0') {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                (this_00,0x20,(MethodInfo *)0x0);
    }
    pCVar2 = (this_00->fields).m_ChunkChars;
    if (pCVar2 != (Char__Array *)0x0) {
      if ((this_00->fields).m_ChunkLength < (int)pCVar2->max_length) {
        uVar3 = (this_00->fields).m_ChunkLength;
        pCVar2 = (this_00->fields).m_ChunkChars;
        (this_00->fields).m_ChunkLength = uVar3 + 1;
        if (pCVar2 == (Char__Array *)0x0) goto code_?;
        if ((uint)pCVar2->max_length <= uVar3) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          pSVar5 = (String *)(*pcVar4)();
          return pSVar5;
        }
        pCVar2->vector[(int)uVar3] = 0x7d;
      }
      else {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                  (this_00,0x7d,1,(MethodInfo *)0x0);
      }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar5 = (String *)
               (*(this_00->klass->vtable).ToString.methodPtr)
                         (this_00,(this_00->klass->vtable).ToString.method);
      return pSVar5;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* DefaultImages <Clone>$() */

DefaultImages *
Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultImages::DefaultImages__Clone__
          (DefaultImages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__DefaultImages);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (DefaultImages *)FUN_?(TypeInfo__UGUI__Portal__Scripts__DefaultImages);
  if (this == (DefaultImages *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar1 = (DefaultImages *)(*pcVar2)();
    return pDVar1;
  }
  bVar3 = iRam_? != 0;
  (pDVar1->fields).defaultGameImages = (this->fields).defaultGameImages;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&pDVar1->fields >> 0xc);
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
  return pDVar1;
}


/* DefaultImages(DefaultImages) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultImages::DefaultImages__ctor
               (DefaultImages *this,DefaultImages *original,MethodInfo *method)

{
  if (original == (DefaultImages *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (this->fields).defaultGameImages = (original->fields).defaultGameImages;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* DefaultImages() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultImages::DefaultImages__ctor_1
               (DefaultImages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__DefaultGameImages);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (DefaultGameImages *)FUN_?(TypeInfo__UGUI__Portal__Scripts__DefaultGameImages);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_placeholder_game_small_180x100_j);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_placeholder_game_large_600x240_j);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_placeholder_game_medium_350x194_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar2 = iRam_?;
  (pDVar1->fields).small = StringLiteral_placeholder_game_small_180x100_j;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&pDVar1->fields >> 0xc);
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
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (pDVar1->fields).medium = StringLiteral_placeholder_game_medium_350x194_;
  iVar8 = 0;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(pDVar1->fields).medium >> 0xc);
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
      iVar8 = iRam_?;
    } while (!bVar7);
  }
  (pDVar1->fields).large = StringLiteral_placeholder_game_large_600x240_j;
  iVar2 = 0;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(pDVar1->fields).large >> 0xc);
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
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).defaultGameImages = pDVar1;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
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
  return;
}


/* Type get_EqualityContract() */

Type * Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultImages::DefaultImages_get_EqualityContract
                 (DefaultImages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__UGUI__Portal__Scripts__DefaultImages);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__UGUI__Portal__Scripts__DefaultImages;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pIVar1 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar2 = FUN_?(pIVar1,1);
    lVar2 = lVar2 + 0x20;
    apTStackX_10[0] = (Type *)0x0;
    lStackX_8 = lVar2;
    cVar3 = FUN_?(lVar2,&lStackX_8,apTStackX_10,in_R9,unaff_RBX);
    if (cVar3 != '\0') {
      return apTStackX_10[0];
    }
    lVar4 = FUN_?(uRam_?);
    *(longlong *)(lVar4 + 0x10) = lVar2;
    pTVar5 = (Type *)FUN_?();
    return pTVar5;
  }
  return (Type *)0x0;
}


/* Boolean op_Equality(DefaultImages, DefaultImages) */

bool Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultImages::DefaultImages_op_Equality
               (DefaultImages *left,DefaultImages *right,MethodInfo *method)

{
  if (left == right) {
    return 1;
  }
  if (left == (DefaultImages *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(left->klass->vtable).Equals_2.methodPtr)
                    (left,right,(left->klass->vtable).Equals_2.method);
  return bVar1;
}


/* Boolean op_Inequality(DefaultImages, DefaultImages) */

bool Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultImages::DefaultImages_op_Inequality
               (DefaultImages *left,DefaultImages *right,MethodInfo *method)

{
  if (left == right) {
    return 0;
  }
  if (left == (DefaultImages *)0x0) {
    return 1;
  }
  cVar1 = (*(left->klass->vtable).Equals_2.methodPtr)
                    (left,right,(left->klass->vtable).Equals_2.method);
  return cVar1 == '\0';
}

