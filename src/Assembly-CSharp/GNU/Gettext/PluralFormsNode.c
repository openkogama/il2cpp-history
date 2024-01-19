
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Evaluate
                  (PluralFormsNode *this,int64_t n,MethodInfo *method)

{
  pPVar1 = this;
  uVar2 = (undefined1)((uint)unaff_retaddr >> 0x18);
  iVar3 = CONCAT44(unaff_EDI,unaff_ESI);
  uVar4 = (undefined2)unaff_EBP;
  uVar5 = (undefined1)((uint)unaff_EBP >> 0x10);
  uVar6 = (undefined1)((uint)unaff_EBP >> 0x18);
  uVar7 = (undefined2)unaff_EBX;
  uVar8 = (undefined1)((uint)unaff_EBX >> 0x10);
  uVar9 = (undefined1)((uint)unaff_EBX >> 0x18);
  uVar10 = (undefined2)unaff_ESI;
  uVar11 = (undefined1)((uint)unaff_ESI >> 0x10);
  uVar12 = (undefined1)((uint)unaff_ESI >> 0x18);
  uVar13 = (undefined1)((uint)unaff_EDI >> 0x18);
  pPVar14 = (this->fields).token;
  iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
  pPVar16 = this;
  if (pPVar14 == (PluralFormsToken *)0x0) goto code_?;
  uVar17 = (undefined1)((ulonglong)n >> 0x10);
  uVar18 = (undefined2)n;
  uVar19 = (undefined1)((uint)_uStack00000008 >> 0x10);
  uVar20 = (undefined1)((uint)_uStack00000008 >> 0x18);
  uVar21 = (undefined2)_uStack00000008;
  switch((pPVar14->fields).type) {
  case 2:
    return (int64_t)(((this->fields).token)->fields).number;
  case 3:
    return CONCAT44((undefined4)n,_uStack00000008);
  default:
    return 0;
  case 6:
    pPVar22 = (this->fields).nodes;
    iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar22 == (PluralFormsNode__Array *)0x0) break;
    bVar23 = 0;
    if (pPVar22->max_length != 0) {
      iVar15 = iVar3;
      pPVar16 = this;
      if (pPVar22->vector[0] != (PluralFormsNode *)0x0) {
        iVar3 = CONCAT44(_uStack00000008,(undefined4)n);
        iVar15 = CONCAT44(_uStack00000008,(undefined4)n);
        iVar24 = PluralFormsNode_Evaluate(pPVar22->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar16 = (PluralFormsNode *)iVar24;
        pPVar22 = (this->fields).nodes;
        if (pPVar22 != (PluralFormsNode__Array *)0x0) {
          bVar23 = pPVar22->max_length == 0;
          if (pPVar22->max_length < 2) goto code_?;
          iVar15 = iVar3;
          if (pPVar22->vector[1] != (PluralFormsNode *)0x0) {
            uVar7 = 0;
            uVar11 = 0;
            uVar8 = 0;
            iVar15 = PluralFormsNode_Evaluate
                               (pPVar22->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT13(uVar6,CONCAT12(uVar5,uVar4)));
            if (pPVar16 != (PluralFormsNode *)iVar15) {
              return 0;
            }
            if (CONCAT13(uVar8,CONCAT12(uVar11,uVar7)) != (int)((ulonglong)iVar15 >> 0x20)) {
              return 0;
            }
            return 1;
          }
        }
      }
      break;
    }
    goto code_?;
  case 8:
    pPVar22 = (this->fields).nodes;
    iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar22 != (PluralFormsNode__Array *)0x0) {
      bVar23 = 0;
      if (pPVar22->max_length == 0) goto code_?;
      iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
      pPVar16 = this;
      if (pPVar22->vector[0] != (PluralFormsNode *)0x0) {
        iVar3 = CONCAT44(_uStack00000008,(undefined4)n);
        iVar15 = CONCAT44(_uStack00000008,(undefined4)n);
        iVar24 = PluralFormsNode_Evaluate(pPVar22->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar16 = (PluralFormsNode *)((ulonglong)iVar24 >> 0x20);
        pPVar22 = (this->fields).nodes;
        if (pPVar22 != (PluralFormsNode__Array *)0x0) {
          bVar23 = pPVar22->max_length == 0;
          if (pPVar22->max_length < 2) goto code_?;
          iVar15 = iVar3;
          if (pPVar22->vector[1] != (PluralFormsNode *)0x0) {
            uVar7 = 0;
            uVar11 = 0;
            uVar8 = 0;
            iVar15 = PluralFormsNode_Evaluate
                               (pPVar22->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT13(uVar6,CONCAT12(uVar5,uVar4)));
            iVar25 = (int)((ulonglong)iVar15 >> 0x20);
            if ((int)pPVar16 < iVar25) {
              return 0;
            }
            if ((int)pPVar16 <= iVar25) {
              if (CONCAT13(uVar8,CONCAT12(uVar11,uVar7)) <= (uint)iVar15) {
                return 0;
              }
              return 1;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 9:
    pPVar22 = (this->fields).nodes;
    iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar22 != (PluralFormsNode__Array *)0x0) {
      bVar23 = 0;
      if (pPVar22->max_length == 0) goto code_?;
      iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
      pPVar16 = this;
      if (pPVar22->vector[0] != (PluralFormsNode *)0x0) {
        iVar3 = CONCAT44(_uStack00000008,(undefined4)n);
        iVar15 = CONCAT44(_uStack00000008,(undefined4)n);
        iVar24 = PluralFormsNode_Evaluate(pPVar22->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar16 = (PluralFormsNode *)((ulonglong)iVar24 >> 0x20);
        pPVar22 = (this->fields).nodes;
        if (pPVar22 != (PluralFormsNode__Array *)0x0) {
          bVar23 = pPVar22->max_length == 0;
          if (pPVar22->max_length < 2) goto code_?;
          iVar15 = iVar3;
          if (pPVar22->vector[1] != (PluralFormsNode *)0x0) {
            uVar7 = 0;
            uVar11 = 0;
            uVar8 = 0;
            iVar15 = PluralFormsNode_Evaluate
                               (pPVar22->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT13(uVar6,CONCAT12(uVar5,uVar4)));
            iVar25 = (int)((ulonglong)iVar15 >> 0x20);
            if ((int)pPVar16 < iVar25) {
              return 0;
            }
            if ((int)pPVar16 <= iVar25) {
              if (CONCAT13(uVar8,CONCAT12(uVar11,uVar7)) < (uint)iVar15) {
                return 0;
              }
              return 1;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 10:
    pPVar22 = (this->fields).nodes;
    iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar22 != (PluralFormsNode__Array *)0x0) {
      bVar23 = 0;
      if (pPVar22->max_length == 0) goto code_?;
      iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
      pPVar16 = this;
      if (pPVar22->vector[0] != (PluralFormsNode *)0x0) {
        iVar3 = CONCAT44(_uStack00000008,(undefined4)n);
        iVar15 = CONCAT44(_uStack00000008,(undefined4)n);
        iVar24 = PluralFormsNode_Evaluate(pPVar22->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar16 = (PluralFormsNode *)((ulonglong)iVar24 >> 0x20);
        pPVar22 = (this->fields).nodes;
        if (pPVar22 != (PluralFormsNode__Array *)0x0) {
          bVar23 = pPVar22->max_length == 0;
          if (pPVar22->max_length < 2) goto code_?;
          iVar15 = iVar3;
          if (pPVar22->vector[1] != (PluralFormsNode *)0x0) {
            uVar7 = 0;
            uVar11 = 0;
            uVar8 = 0;
            iVar15 = PluralFormsNode_Evaluate
                               (pPVar22->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT13(uVar6,CONCAT12(uVar5,uVar4)));
            iVar25 = (int)((ulonglong)iVar15 >> 0x20);
            if (iVar25 < (int)pPVar16) {
              return 0;
            }
            if (iVar25 <= (int)pPVar16) {
              if ((uint)iVar15 <= CONCAT13(uVar8,CONCAT12(uVar11,uVar7))) {
                return 0;
              }
              return 1;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0xb:
    pPVar22 = (this->fields).nodes;
    iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar22 != (PluralFormsNode__Array *)0x0) {
      bVar23 = 0;
      if (pPVar22->max_length == 0) goto code_?;
      iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
      pPVar16 = this;
      if (pPVar22->vector[0] != (PluralFormsNode *)0x0) {
        iVar3 = CONCAT44(_uStack00000008,(undefined4)n);
        iVar15 = CONCAT44(_uStack00000008,(undefined4)n);
        iVar24 = PluralFormsNode_Evaluate(pPVar22->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar16 = (PluralFormsNode *)((ulonglong)iVar24 >> 0x20);
        pPVar22 = (this->fields).nodes;
        if (pPVar22 != (PluralFormsNode__Array *)0x0) {
          bVar23 = pPVar22->max_length == 0;
          if (pPVar22->max_length < 2) goto code_?;
          iVar15 = iVar3;
          if (pPVar22->vector[1] != (PluralFormsNode *)0x0) {
            uVar7 = 0;
            uVar11 = 0;
            uVar8 = 0;
            iVar15 = PluralFormsNode_Evaluate
                               (pPVar22->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT13(uVar6,CONCAT12(uVar5,uVar4)));
            iVar25 = (int)((ulonglong)iVar15 >> 0x20);
            if (iVar25 < (int)pPVar16) {
              return 0;
            }
            if (iVar25 <= (int)pPVar16) {
              if ((uint)iVar15 < CONCAT13(uVar8,CONCAT12(uVar11,uVar7))) {
                return 0;
              }
              return 1;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0xc:
    pPVar22 = (this->fields).nodes;
    iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar22 != (PluralFormsNode__Array *)0x0) {
      bVar23 = pPVar22->max_length == 0;
      if (pPVar22->max_length < 2) goto code_?;
      iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
      pPVar16 = this;
      if (pPVar22->vector[1] != (PluralFormsNode *)0x0) {
        iVar3 = CONCAT44(_uStack00000008,(undefined4)n);
        iVar15 = CONCAT44(_uStack00000008,(undefined4)n);
        iVar24 = PluralFormsNode_Evaluate(pPVar22->vector[1],n & 0xffffffff,unaff_EDI);
        pPVar16 = (PluralFormsNode *)((ulonglong)iVar24 >> 0x20);
        if (iVar24 == 0) {
          return 0;
        }
        pPVar22 = (this->fields).nodes;
        if (pPVar22 != (PluralFormsNode__Array *)0x0) {
          bVar23 = 0;
          if (pPVar22->max_length == 0) goto code_?;
          iVar15 = iVar3;
          if (pPVar22->vector[0] != (PluralFormsNode *)0x0) {
            uVar7 = 0;
            uVar11 = 0;
            uVar8 = 0;
            PluralFormsNode_Evaluate
                      (pPVar22->vector[0],n & 0xffffffff,
                       (MethodInfo *)CONCAT13(uVar6,CONCAT12(uVar5,uVar4)));
            _uStack00000008 = CONCAT13(uVar8,CONCAT12(uVar11,uVar7));
            iVar15 = func_?();
            return iVar15;
          }
        }
      }
    }
    break;
  case 0xd:
    pPVar22 = (this->fields).nodes;
    iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar22 != (PluralFormsNode__Array *)0x0) {
      bVar23 = 0;
      if (pPVar22->max_length == 0) goto code_?;
      iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
      pPVar16 = this;
      if (pPVar22->vector[0] != (PluralFormsNode *)0x0) {
        iVar3 = CONCAT44(_uStack00000008,(undefined4)n);
        iVar15 = CONCAT44(_uStack00000008,(undefined4)n);
        iVar24 = PluralFormsNode_Evaluate(pPVar22->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar16 = (PluralFormsNode *)iVar24;
        pPVar22 = (this->fields).nodes;
        if (pPVar22 != (PluralFormsNode__Array *)0x0) {
          bVar23 = pPVar22->max_length == 0;
          if (pPVar22->max_length < 2) goto code_?;
          iVar15 = iVar3;
          if (pPVar22->vector[1] != (PluralFormsNode *)0x0) {
            uVar7 = 0;
            uVar11 = 0;
            uVar8 = 0;
            iVar15 = PluralFormsNode_Evaluate
                               (pPVar22->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT13(uVar6,CONCAT12(uVar5,uVar4)));
            if ((pPVar16 == (PluralFormsNode *)iVar15) &&
               (CONCAT13(uVar8,CONCAT12(uVar11,uVar7)) == (int)((ulonglong)iVar15 >> 0x20))) {
              return 0;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0xe:
    pPVar22 = (this->fields).nodes;
    iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar22 != (PluralFormsNode__Array *)0x0) {
      bVar23 = 0;
      if (pPVar22->max_length == 0) goto code_?;
      iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
      pPVar16 = this;
      if (pPVar22->vector[0] != (PluralFormsNode *)0x0) {
        iVar24 = PluralFormsNode_Evaluate(pPVar22->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar16 = (PluralFormsNode *)((ulonglong)iVar24 >> 0x20);
        pPVar22 = (this->fields).nodes;
        iVar3 = CONCAT44((undefined4)n,(int)iVar24);
        iVar15 = CONCAT44((undefined4)n,(int)iVar24);
        if (pPVar22 != (PluralFormsNode__Array *)0x0) {
          bVar23 = pPVar22->max_length == 0;
          if (pPVar22->max_length < 2) goto code_?;
          iVar15 = iVar3;
          if (pPVar22->vector[1] != (PluralFormsNode *)0x0) {
            iVar15 = PluralFormsNode_Evaluate
                               (pPVar22->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT13(uVar6,CONCAT12(uVar5,uVar4)));
            if (iVar24 == 0) {
              return 0;
            }
            if (iVar15 == 0) {
              return 0;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0xf:
    pPVar22 = (this->fields).nodes;
    iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar22 != (PluralFormsNode__Array *)0x0) {
      bVar23 = 0;
      if (pPVar22->max_length == 0) goto code_?;
      iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
      pPVar16 = this;
      if (pPVar22->vector[0] != (PluralFormsNode *)0x0) {
        iVar24 = PluralFormsNode_Evaluate(pPVar22->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar16 = (PluralFormsNode *)((ulonglong)iVar24 >> 0x20);
        pPVar22 = (this->fields).nodes;
        iVar3 = CONCAT44((undefined4)n,(int)iVar24);
        iVar15 = CONCAT44((undefined4)n,(int)iVar24);
        if (pPVar22 != (PluralFormsNode__Array *)0x0) {
          bVar23 = pPVar22->max_length == 0;
          if (pPVar22->max_length < 2) goto code_?;
          iVar15 = iVar3;
          if (pPVar22->vector[1] != (PluralFormsNode *)0x0) {
            iVar15 = PluralFormsNode_Evaluate
                               (pPVar22->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT13(uVar6,CONCAT12(uVar5,uVar4)));
            if (iVar24 != 0) {
              return 1;
            }
            if (iVar15 == 0) {
              return 0;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0x10:
    pPVar22 = (this->fields).nodes;
    iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar22 != (PluralFormsNode__Array *)0x0) {
      bVar23 = 0;
      if (pPVar22->max_length == 0) goto code_?;
      iVar15 = CONCAT44(unaff_EDI,unaff_ESI);
      pPVar16 = this;
      if (pPVar22->vector[0] != (PluralFormsNode *)0x0) {
        iVar3 = CONCAT44(_uStack00000008,(undefined4)n);
        iVar15 = CONCAT44(_uStack00000008,(undefined4)n);
        iVar24 = PluralFormsNode_Evaluate(pPVar22->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar16 = (PluralFormsNode *)iVar24;
        pPVar22 = (this->fields).nodes;
        if (pPVar22 != (PluralFormsNode__Array *)0x0) {
          bVar23 = pPVar22->max_length == 0;
          if (pPVar22->max_length < 2) goto code_?;
          this_00 = pPVar22->vector[1];
          iVar15 = iVar3;
          if (this_00 != (PluralFormsNode *)0x0) {
            uVar26 = 0;
            uVar27 = 0;
            uVar28 = 0;
            uVar10 = SUB42(this_00,0);
            uVar11 = (undefined1)((uint)this_00 >> 0x10);
            uVar12 = (undefined1)((uint)this_00 >> 0x18);
            uVar13 = 0x10;
            iVar3 = PluralFormsNode_Evaluate
                               (this_00,n & 0xffffffff,
                                (MethodInfo *)CONCAT13(uVar6,CONCAT12(uVar5,uVar4)));
            pPVar22 = (this->fields).nodes;
            iVar15 = iVar3;
            uVar7 = uVar21;
            uVar8 = uVar19;
            uVar9 = uVar20;
            in_stack_29 = uVar18;
            in_stack_30 = uVar17;
            if (pPVar22 != (PluralFormsNode__Array *)0x0) {
              bVar23 = pPVar22->max_length < 2;
              if (pPVar22->max_length < 3) goto code_?;
              if (pPVar22->vector[2] != (PluralFormsNode *)0x0) {
                _uStack00000008 = 0;
                iVar15 = PluralFormsNode_Evaluate(pPVar22->vector[2],0,n._4_4_);
                if (CONCAT13(uVar28,CONCAT12(uVar27,uVar26)) == 0) {
                  return iVar15;
                }
                return iVar3;
              }
            }
          }
        }
      }
    }
  }
code_?:
  this = pPVar16;
  bVar23 = 0;
  func_?();
  iVar3 = iVar15;
  pPVar16 = this;
code_?:
  this = pPVar16;
  uVar31 = (uint)((ulonglong)iVar3 >> 0x20);
  uVar32 = func_?();
  iVar25 = (int)((ulonglong)uVar32 >> 0x20);
  pPVar33 = (PluralFormsNode__Class *)&stack0xfffffffb;
  *(int *)((int)uVar32 + 0x5f + iVar25) = (int)extraout_ST0;
  *(int *)((int)uVar32 + -0x10 + iVar25) = (int)extraout_ST1;
  if (extraout_ECX == 1 || pPVar33 == (PluralFormsNode__Class *)0x0) {
    bVar34 = (byte)((ulonglong)uVar32 >> 0x28);
    bVar35 = (byte)uVar32 + bVar34;
    bVar36 = CARRY1((byte)uVar32,bVar34) || CARRY1(bVar35,bVar23);
    uVar37 = (undefined3)((ulonglong)uVar32 >> 8);
    bVar35 = bVar35 + bVar23;
    if (extraout_ECX != 2 && bVar35 != 0) {
      pPVar33 = pPVar1->klass;
      goto code_?;
    }
    pbVar38 = (byte *)(CONCAT31(uVar37,bVar35) + -0x25);
    bVar39 = CARRY1(*pbVar38,bVar34) || CARRY1(*pbVar38 + bVar34,bVar36);
    *pbVar38 = *pbVar38 + bVar34 + bVar36;
    bVar36 = CARRY1(bVar35,bVar34) || CARRY1(bVar35 + bVar34,bVar39);
    cVar40 = bVar35 + bVar34 + bVar39;
    pPVar22 = (PluralFormsNode__Array *)CONCAT31(uVar37,cVar40);
    uVar41 = extraout_ECX - 3;
    if (uVar41 == 0 || cVar40 == '\0') {
      bVar35 = (byte)((ulonglong)uVar32 >> 0x20);
      bVar34 = (byte)((uint)pPVar1 >> 8);
      bVar23 = bVar35 + bVar34;
      cVar40 = bVar23 + bVar36;
      iVar25 = CONCAT31((int3)((ulonglong)uVar32 >> 0x28),cVar40);
      *(int *)((int)pPVar22 + iVar25 + -0x76) = (int)in_ST2;
      *(longlong *)((int)pPVar22->vector + iVar25 + -0x66) =
           (longlong)(in_ST3 * (float10)*(double *)((int)pPVar22->vector + iVar25 + 10));
      *(longlong *)((int)pPVar22->vector + iVar25 + 0x2a) = (longlong)in_ST4;
      *(short *)((int)pPVar22->vector + iVar25 + -0x3f) =
           (short)(in_ST5 * (float10)*(short *)((int)pPVar22->vector + iVar25 + -0x4e) *
                  (float10)*(short *)((int)pPVar22->vector + iVar25 + 0x38));
      *(short *)((int)pPVar22->vector + iVar25 + 0x4a) = (short)in_ST6;
      if (uVar41 != 1 && cVar40 != '\0') {
        cVar40 = bVar34 * '\x02' + (CARRY1(bVar35,bVar34) || CARRY1(bVar23,bVar36));
        pPVar1 = (PluralFormsNode *)
                  CONCAT22((short)((uint)pPVar1 >> 0x10),CONCAT11(cVar40,(char)pPVar1));
        if (cVar40 != '\0') goto code_?;
        goto code_?;
      }
      in((short)iVar25);
      iVar25 = CONCAT31(uStack42,this._3_1_);
      if (iVar25 == 0) goto code_?;
      pPVar1 = (PluralFormsNode *)CONCAT31(this._0_3_,uVar2);
      in_stack_30 = (undefined1)((ulonglong)iVar3 >> 0x20);
      uVar43 = *(undefined4 *)(iVar25 + 0x14);
      uVar8 = (undefined1)uVar43;
      uVar9 = (undefined1)((uint)uVar43 >> 8);
      in_stack_29 = (undefined2)((uint)uVar43 >> 0x10);
      uVar12 = SUB41(this,0);
      uVar7 = (undefined2)((uint)this >> 8);
      uVar43 = *(undefined4 *)(iVar25 + 0x20);
      uVar13 = (undefined1)((uint)uVar43 >> 8);
      uVar10 = (undefined2)((uint)uVar43 >> 0x10);
      (**(code **)(iVar25 + 0xc))((char)uVar43);
      uVar11 = uVar2;
      goto code_?;
    }
  }
  else {
code_?:
    uVar31 = 0;
    uVar41 = 0;
    if (pPVar1 == (PluralFormsNode *)0x0) goto code_?;
    uStack42 = (undefined3)((ulonglong)iVar3 >> 8);
  }
  iVar25 = uVar31 + 0x10;
  while( true ) {
    iVar3 = CONCAT44(uVar31,iVar25);
    pPVar22 = (pPVar1->fields).nodes;
    if (pPVar22 == (PluralFormsNode__Array *)0x0) break;
    if ((int)pPVar22->max_length <= (int)uVar41) {
      pIVar44 = (pPVar33->_0).byval_arg.data.array;
      if (pIVar44 != (Il2CppArrayType *)0x0) {
        uVar45 = pIVar44[1].numsizes;
        uVar46 = pIVar44[1].numlobounds;
        uVar47 = pIVar44[1].field_0x7;
        uVar48 = CONCAT11(uVar47,uVar46);
        uVar49 = CONCAT21(uVar48,uVar45);
        _uStack00000008 = CONCAT13(uStack50,uVar49);
        iVar15 = (*(code *)pIVar44->lobounds)();
        return iVar15;
      }
      break;
    }
    if (pPVar22->max_length <= uVar31) goto code_?;
    if (*(int *)((int)pPVar22->vector + iVar25 + -0x10) != 0) {
code_?:
      PluralFormsNode_IterateNodes
                (*(PluralFormsNode **)((int)pPVar22->vector + (int)iVar3 + -0x10),
                 (PluralFormsNode_IterateNodesDelegate *)CONCAT13(uVar11,CONCAT21(uVar10,uVar13)),
                 (PluralFormsNode_IterateNodesDelegate *)CONCAT13(uVar8,CONCAT21(uVar7,uVar12)),
                 (MethodInfo *)CONCAT13(in_stack_30,CONCAT21(in_stack_29,uVar9)));
    }
    iVar3 = CONCAT44((int)((ulonglong)iVar3 >> 0x20) + 1,(int)iVar3);
code_?:
    uVar41 = (uint)((ulonglong)iVar3 >> 0x20);
    iVar25 = (int)iVar3 + 4;
    uVar31 = uVar41;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar51 = (code *)swi(3);
  iVar15 = (*pcVar51)();
  return iVar15;
}


/* Void IterateNodes(PluralFormsNode, PluralFormsNode+IterateNodesDelegate,
   PluralFormsNode+IterateNodesDelegate) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_IterateNodes
               (PluralFormsNode *node,PluralFormsNode_IterateNodesDelegate *doBefore,
               PluralFormsNode_IterateNodesDelegate *doAfter,MethodInfo *method)

{
  if (doBefore != (PluralFormsNode_IterateNodesDelegate *)0x0) {
    (*(doBefore->fields)._._.invoke_impl)
              ((doBefore->fields)._._.method_code,node,(doBefore->fields)._._.method);
    uVar1 = 0;
    if (node != (PluralFormsNode *)0x0) {
      iVar2 = 0x10;
      while( true ) {
        pPVar3 = (node->fields).nodes;
        if (pPVar3 == (PluralFormsNode__Array *)0x0) break;
        if ((int)pPVar3->max_length <= (int)uVar1) {
          if (doAfter != (PluralFormsNode_IterateNodesDelegate *)0x0) {
            (*(doAfter->fields)._._.invoke_impl)
                      ((doAfter->fields)._._.method_code,node,(doAfter->fields)._._.method);
            return;
          }
          break;
        }
        if (pPVar3->max_length <= uVar1) goto code_?;
        if (*(int *)((int)pPVar3->vector + iVar2 + -0x10) != 0) {
          PluralFormsNode_IterateNodes
                    (*(PluralFormsNode **)((int)pPVar3->vector + iVar2 + -0x10),doBefore,doAfter,
                     (MethodInfo *)0x0);
        }
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 4;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* PluralFormsNode Node(Int32) */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Node
          (PluralFormsNode *this,int32_t i,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((i < 0) || (2 < i)) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).nodes;
  if (pPVar2 == (PluralFormsNode__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pPVar6 = (PluralFormsNode *)(*pcVar5)();
    return pPVar6;
  }
  if ((uint)i < pPVar2->max_length) {
    return pPVar2->vector[i];
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pPVar6 = (PluralFormsNode *)(*pcVar5)();
  return pPVar6;
}


/* PluralFormsNode ReleaseNode(Int32) */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_ReleaseNode
          (PluralFormsNode *this,int32_t i,MethodInfo *method)

{
  pPVar1 = (this->fields).nodes;
  if (pPVar1 == (PluralFormsNode__Array *)0x0) {
    func_?();
  }
  else if ((uint)i < pPVar1->max_length) {
    pPVar2 = pPVar1->vector[i];
    if ((uint)i < pPVar1->max_length) {
      pPVar1->vector[i] = (PluralFormsNode *)0x0;
      func_?(pPVar1->vector + i,0);
      return pPVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pPVar2 = (PluralFormsNode *)(*pcVar3)();
  return pPVar2;
}


/* Void SetNode(Int32, PluralFormsNode) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_SetNode
               (PluralFormsNode *this,int32_t i,PluralFormsNode *n,MethodInfo *method)

{
  if (2 < (uint)i) {
    return;
  }
  pPVar1 = (this->fields).nodes;
  if (pPVar1 == (PluralFormsNode__Array *)0x0) {
    func_?();
  }
  else if ((n == (PluralFormsNode *)0x0) ||
          (iVar2 = func_?(n,(pPVar1->klass->_0).element_class), iVar2 != 0)) {
    if ((uint)i < pPVar1->max_length) {
      pPVar1->vector[i] = n;
      func_?(pPVar1->vector + i,n);
      return;
    }
    goto code_?;
  }
  uVar3 = func_?(0);
  func_?(uVar3);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_ToString
                   (PluralFormsNode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__Node__Token__0__);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Format
                     (StringLiteral__Node__Token__0__,(Object *)(this->fields).token,
                      (MethodInfo *)0x0);
  return pSVar1;
}


/* PluralFormsNode(PluralFormsToken) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode__ctor
               (PluralFormsNode *this,PluralFormsToken *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__PluralFormsNode);
    func_?(&TypeInfo__GNU__Gettext__RecursiveTracer);
    cRam_? = '\x01';
  }
  pPVar1 = (PluralFormsNode__Array *)func_?(TypeInfo__GNU__Gettext__PluralFormsNode,3);
  (this->fields).nodes = pPVar1;
  func_?(&(this->fields).nodes,pPVar1);
  this_00 = (RecursiveTracer *)func_?(TypeInfo__GNU__Gettext__RecursiveTracer);
  RecursiveTracer::RecursiveTracer__ctor(this_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields).tracer;
  (this->fields).tracer = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).token = token;
  func_?(&this->fields,token);
  return;
}

