
/* PluralFormsNode EqualityExpression() */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_EqualityExpression
          (PluralFormsParser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  pPVar1 = PluralFormsParser_RelationalExpression(this,(MethodInfo *)0x0);
  if (pPVar1 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).scanner;
  if ((pPVar2 != (PluralFormsScanner *)0x0) &&
     (pPVar3 = (pPVar2->fields).token, pPVar3 != (PluralFormsToken *)0x0)) {
    iVar4 = (pPVar3->fields).type;
    if (iVar4 != 6) {
      if ((pPVar2 == (PluralFormsScanner *)0x0) || (pPVar3 == (PluralFormsToken *)0x0))
      goto code_?;
      if (iVar4 != 0xd) {
        return pPVar1;
      }
    }
    if (pPVar2 != (PluralFormsScanner *)0x0) {
      this_00 = (ScaleAnimationBase *)func_?(TypeInfo__GNU__Gettext__PluralFormsToken);
      ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
      if (pPVar3 != (PluralFormsToken *)0x0) {
        (this_00->fields)._._._._.m_CachedPtr = (void *)(pPVar3->fields).type;
        (this_00->fields).state = (pPVar3->fields).number;
        this_01 = (PluralFormsNode *)func_?(TypeInfo__GNU__Gettext__PluralFormsNode);
        PluralFormsNode::PluralFormsNode__ctor
                  (this_01,(PluralFormsToken *)this_00,(MethodInfo *)0x0);
        pPVar2 = (this->fields).scanner;
        if (pPVar2 != (PluralFormsScanner *)0x0) {
          bVar5 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
          if ((bVar5 == 0) ||
             (n = PluralFormsParser_RelationalExpression(this,(MethodInfo *)0x0),
             n == (PluralFormsNode *)0x0)) {
            return (PluralFormsNode *)0x0;
          }
          if (this_01 != (PluralFormsNode *)0x0) {
            PluralFormsNode::PluralFormsNode_SetNode(this_01,1,n,(MethodInfo *)0x0);
            PluralFormsNode::PluralFormsNode_SetNode(this_01,0,pPVar1,(MethodInfo *)0x0);
            return this_01;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  pPVar1 = (PluralFormsNode *)(*pcVar6)();
  return pPVar1;
}


/* PluralFormsNode Expression() */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_Expression
          (PluralFormsParser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  pPVar1 = PluralFormsParser_LogicalOrExpression(this,(MethodInfo *)0x0);
  if (pPVar1 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).scanner;
  if ((pPVar2 != (PluralFormsScanner *)0x0) &&
     (pPVar3 = (pPVar2->fields).token, pPVar3 != (PluralFormsToken *)0x0)) {
    if ((pPVar3->fields).type != 0x10) {
      return pPVar1;
    }
    if (pPVar2 != (PluralFormsScanner *)0x0) {
      this_00 = (ScaleAnimationBase *)func_?(TypeInfo__GNU__Gettext__PluralFormsToken);
      ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
      if (pPVar3 != (PluralFormsToken *)0x0) {
        (this_00->fields)._._._._.m_CachedPtr = (void *)(pPVar3->fields).type;
        (this_00->fields).state = (pPVar3->fields).number;
        this_01 = (PluralFormsNode *)func_?(TypeInfo__GNU__Gettext__PluralFormsNode);
        PluralFormsNode::PluralFormsNode__ctor
                  (this_01,(PluralFormsToken *)this_00,(MethodInfo *)0x0);
        pPVar2 = (this->fields).scanner;
        if (pPVar2 != (PluralFormsScanner *)0x0) {
          bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
          if ((bVar4 == 0) ||
             (pPVar5 = PluralFormsParser_Expression(this,(MethodInfo *)0x0),
             pPVar5 == (PluralFormsNode *)0x0)) {
            return (PluralFormsNode *)0x0;
          }
          if (this_01 != (PluralFormsNode *)0x0) {
            PluralFormsNode::PluralFormsNode_SetNode(this_01,1,pPVar5,(MethodInfo *)0x0);
            pPVar2 = (this->fields).scanner;
            if ((pPVar2 != (PluralFormsScanner *)0x0) &&
               (pPVar3 = (pPVar2->fields).token, pPVar3 != (PluralFormsToken *)0x0)) {
              if ((pPVar3->fields).type != 0x11) {
                return (PluralFormsNode *)0x0;
              }
              bVar4 = PluralFormsParser_NextToken(this,(MethodInfo *)0x0);
              if (bVar4 == 0) {
                return (PluralFormsNode *)0x0;
              }
              pPVar5 = PluralFormsParser_Expression(this,(MethodInfo *)0x0);
              if (pPVar5 == (PluralFormsNode *)0x0) {
                return (PluralFormsNode *)0x0;
              }
              PluralFormsNode::PluralFormsNode_SetNode(this_01,2,pPVar5,(MethodInfo *)0x0);
              PluralFormsNode::PluralFormsNode_SetNode(this_01,0,pPVar1,(MethodInfo *)0x0);
              return this_01;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  pPVar1 = (PluralFormsNode *)(*pcVar6)();
  return pPVar1;
}


/* PluralFormsNode LogicalAndExpression() */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_LogicalAndExpression
          (PluralFormsParser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  pPVar1 = PluralFormsParser_RelationalExpression(this,(MethodInfo *)0x0);
  if (pPVar1 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).scanner;
  if ((pPVar2 == (PluralFormsScanner *)0x0) ||
     (pPVar3 = (pPVar2->fields).token, pPVar3 == (PluralFormsToken *)0x0)) goto code_?;
  iVar4 = (pPVar3->fields).type;
  if (iVar4 == 6) {
code_?:
    if (pPVar2 == (PluralFormsScanner *)0x0) goto code_?;
    pSVar5 = (ScaleAnimationBase *)func_?(TypeInfo__GNU__Gettext__PluralFormsToken);
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar5,0.0,method_00);
    if (pPVar3 == (PluralFormsToken *)0x0) goto code_?;
    (pSVar5->fields)._._._._.m_CachedPtr = (void *)(pPVar3->fields).type;
    (pSVar5->fields).state = (pPVar3->fields).number;
    pPVar6 = (PluralFormsNode *)func_?(TypeInfo__GNU__Gettext__PluralFormsNode);
    PluralFormsNode::PluralFormsNode__ctor(pPVar6,(PluralFormsToken *)pSVar5,(MethodInfo *)0x0);
    pPVar2 = (this->fields).scanner;
    if (pPVar2 == (PluralFormsScanner *)0x0) goto code_?;
    bVar7 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      return (PluralFormsNode *)0x0;
    }
    pPVar8 = PluralFormsParser_RelationalExpression(this,(MethodInfo *)0x0);
    if (pPVar8 == (PluralFormsNode *)0x0) {
      return (PluralFormsNode *)0x0;
    }
    if (pPVar6 == (PluralFormsNode *)0x0) goto code_?;
    PluralFormsNode::PluralFormsNode_SetNode(pPVar6,1,pPVar8,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    PluralFormsNode::PluralFormsNode_SetNode(pPVar6,0,pPVar1,(MethodInfo *)0x0);
  }
  else {
    if ((pPVar2 == (PluralFormsScanner *)0x0) || (pPVar3 == (PluralFormsToken *)0x0))
    goto code_?;
    pPVar6 = pPVar1;
    if (iVar4 == 0xd) goto code_?;
  }
  if (pPVar6 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).scanner;
  if ((pPVar2 != (PluralFormsScanner *)0x0) &&
     (pPVar3 = (pPVar2->fields).token, pPVar3 != (PluralFormsToken *)0x0)) {
    if ((pPVar3->fields).type != 0xe) {
      return pPVar6;
    }
    if (pPVar2 != (PluralFormsScanner *)0x0) {
      pSVar5 = (ScaleAnimationBase *)func_?(TypeInfo__GNU__Gettext__PluralFormsToken);
      ScaleAnimationBase::ScaleAnimationBase_Play(pSVar5,0.0,method_00);
      if (pPVar3 != (PluralFormsToken *)0x0) {
        (pSVar5->fields)._._._._.m_CachedPtr = (void *)(pPVar3->fields).type;
        (pSVar5->fields).state = (pPVar3->fields).number;
        pPVar1 = (PluralFormsNode *)func_?(TypeInfo__GNU__Gettext__PluralFormsNode);
        PluralFormsNode::PluralFormsNode__ctor(pPVar1,(PluralFormsToken *)pSVar5,(MethodInfo *)0x0);
        pPVar2 = (this->fields).scanner;
        if (pPVar2 != (PluralFormsScanner *)0x0) {
          bVar7 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
          if ((bVar7 == 0) ||
             (pPVar8 = PluralFormsParser_LogicalAndExpression(this,(MethodInfo *)0x0),
             pPVar8 == (PluralFormsNode *)0x0)) {
            return (PluralFormsNode *)0x0;
          }
          pPVar3 = (pPVar8->fields).token;
          if ((pPVar3 != (PluralFormsToken *)0x0) && (pPVar1 != (PluralFormsNode *)0x0)) {
            if ((pPVar3->fields).type == 0xe) {
              PluralFormsNode::PluralFormsNode_SetNode(pPVar1,0,pPVar6,(MethodInfo *)0x0);
              pPVar6 = PluralFormsNode::PluralFormsNode_ReleaseNode(pPVar8,0,(MethodInfo *)0x0);
              PluralFormsNode::PluralFormsNode_SetNode(pPVar1,1,pPVar6,(MethodInfo *)0x0);
              PluralFormsNode::PluralFormsNode_SetNode(pPVar8,0,pPVar1,(MethodInfo *)0x0);
              return pPVar8;
            }
            PluralFormsNode::PluralFormsNode_SetNode(pPVar1,0,pPVar6,(MethodInfo *)0x0);
            PluralFormsNode::PluralFormsNode_SetNode(pPVar1,1,pPVar8,(MethodInfo *)0x0);
            return pPVar1;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  pPVar1 = (PluralFormsNode *)(*pcVar9)();
  return pPVar1;
}


/* PluralFormsNode LogicalOrExpression() */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_LogicalOrExpression
          (PluralFormsParser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  pPVar1 = PluralFormsParser_LogicalAndExpression(this,(MethodInfo *)0x0);
  if (pPVar1 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).scanner;
  if ((pPVar2 != (PluralFormsScanner *)0x0) &&
     (pPVar3 = (pPVar2->fields).token, pPVar3 != (PluralFormsToken *)0x0)) {
    if ((pPVar3->fields).type != 0xf) {
      return pPVar1;
    }
    if (pPVar2 != (PluralFormsScanner *)0x0) {
      this_00 = (ScaleAnimationBase *)func_?(TypeInfo__GNU__Gettext__PluralFormsToken);
      ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
      if (pPVar3 != (PluralFormsToken *)0x0) {
        (this_00->fields)._._._._.m_CachedPtr = (void *)(pPVar3->fields).type;
        (this_00->fields).state = (pPVar3->fields).number;
        this_01 = (PluralFormsNode *)func_?(TypeInfo__GNU__Gettext__PluralFormsNode);
        PluralFormsNode::PluralFormsNode__ctor
                  (this_01,(PluralFormsToken *)this_00,(MethodInfo *)0x0);
        pPVar2 = (this->fields).scanner;
        if (pPVar2 != (PluralFormsScanner *)0x0) {
          bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
          if ((bVar4 == 0) ||
             (this_02 = PluralFormsParser_LogicalOrExpression(this,(MethodInfo *)0x0),
             this_02 == (PluralFormsNode *)0x0)) {
            return (PluralFormsNode *)0x0;
          }
          pPVar3 = (this_02->fields).token;
          if ((pPVar3 != (PluralFormsToken *)0x0) && (this_01 != (PluralFormsNode *)0x0)) {
            if ((pPVar3->fields).type == 0xf) {
              PluralFormsNode::PluralFormsNode_SetNode(this_01,0,pPVar1,(MethodInfo *)0x0);
              pPVar1 = PluralFormsNode::PluralFormsNode_ReleaseNode(this_02,0,(MethodInfo *)0x0);
              PluralFormsNode::PluralFormsNode_SetNode(this_01,1,pPVar1,(MethodInfo *)0x0);
              PluralFormsNode::PluralFormsNode_SetNode(this_02,0,this_01,(MethodInfo *)0x0);
              return this_02;
            }
            PluralFormsNode::PluralFormsNode_SetNode(this_01,0,pPVar1,(MethodInfo *)0x0);
            PluralFormsNode::PluralFormsNode_SetNode(this_01,1,this_02,(MethodInfo *)0x0);
            return this_01;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pPVar1 = (PluralFormsNode *)(*pcVar5)();
  return pPVar1;
}


/* PluralFormsNode MultiplicativeExpression() */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_MultiplicativeExpression
          (PluralFormsParser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  pPVar1 = PluralFormsParser_PmExpression(this,(MethodInfo *)0x0);
  if (pPVar1 != (PluralFormsNode *)0x0) {
    pPVar2 = (this->fields).scanner;
    if ((pPVar2 != (PluralFormsScanner *)0x0) &&
       (pPVar3 = (pPVar2->fields).token, pPVar3 != (PluralFormsToken *)0x0)) {
      if ((pPVar3->fields).type != 0xc) {
        return pPVar1;
      }
      if (pPVar2 != (PluralFormsScanner *)0x0) {
        this_00 = (ScaleAnimationBase *)func_?(TypeInfo__GNU__Gettext__PluralFormsToken);
        ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
        if (pPVar3 != (PluralFormsToken *)0x0) {
          (this_00->fields)._._._._.m_CachedPtr = (void *)(pPVar3->fields).type;
          (this_00->fields).state = (pPVar3->fields).number;
          this_01 = (PluralFormsNode *)func_?(TypeInfo__GNU__Gettext__PluralFormsNode);
          PluralFormsNode::PluralFormsNode__ctor
                    (this_01,(PluralFormsToken *)this_00,(MethodInfo *)0x0);
          pPVar2 = (this->fields).scanner;
          if (pPVar2 != (PluralFormsScanner *)0x0) {
            bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
            if ((bVar4 == 0) ||
               (n = PluralFormsParser_PmExpression(this,(MethodInfo *)0x0),
               n == (PluralFormsNode *)0x0)) {
              return (PluralFormsNode *)0x0;
            }
            if (this_01 != (PluralFormsNode *)0x0) {
              PluralFormsNode::PluralFormsNode_SetNode(this_01,1,n,(MethodInfo *)0x0);
              PluralFormsNode::PluralFormsNode_SetNode(this_01,0,pPVar1,(MethodInfo *)0x0);
              return this_01;
            }
          }
        }
      }
    }
    func_?(0);
    pcVar5 = (code *)swi(3);
    pPVar1 = (PluralFormsNode *)(*pcVar5)();
    return pPVar1;
  }
  return (PluralFormsNode *)0x0;
}


/* Boolean NextToken() */

bool Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_NextToken
               (PluralFormsParser *this,MethodInfo *method)

{
  this_00 = (this->fields).scanner;
  if (this_00 != (PluralFormsScanner *)0x0) {
    bVar1 = PluralFormsScanner::PluralFormsScanner_NextToken(this_00,(MethodInfo *)0x0);
    return bVar1 != 0;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean Parse(PluralFormsCalculator) */

bool Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_Parse
               (PluralFormsParser *this,PluralFormsCalculator *calculator,MethodInfo *method)

{
  pPVar1 = (this->fields).scanner;
  if ((pPVar1 != (PluralFormsScanner *)0x0) &&
     (pPVar2 = (pPVar1->fields).token, pPVar2 != (PluralFormsToken *)0x0)) {
    if ((pPVar2->fields).type != 5) {
      return 0;
    }
    if (pPVar1 != (PluralFormsScanner *)0x0) {
      bVar3 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar1,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return 0;
      }
      pPVar1 = (this->fields).scanner;
      if ((pPVar1 != (PluralFormsScanner *)0x0) &&
         (pPVar2 = (pPVar1->fields).token, pPVar2 != (PluralFormsToken *)0x0)) {
        if ((pPVar2->fields).type != 7) {
          return 0;
        }
        if (pPVar1 != (PluralFormsScanner *)0x0) {
          bVar3 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar1,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            return 0;
          }
          pPVar1 = (this->fields).scanner;
          if ((pPVar1 != (PluralFormsScanner *)0x0) &&
             (pPVar2 = (pPVar1->fields).token, pPVar2 != (PluralFormsToken *)0x0)) {
            if ((pPVar2->fields).type != 2) {
              return 0;
            }
            pPVar2 = PluralFormsParser_get_Token(this,(MethodInfo *)0x0);
            if (pPVar2 != (PluralFormsToken *)0x0) {
              pPVar1 = (PluralFormsScanner *)(pPVar2->fields).number;
              bVar3 = PluralFormsParser_NextToken(this,(MethodInfo *)0x0);
              if (bVar3 == 0) {
                return 0;
              }
              pPVar2 = PluralFormsParser_get_Token(this,(MethodInfo *)0x0);
              if (pPVar2 != (PluralFormsToken *)0x0) {
                if ((pPVar2->fields).type != 0x12) {
                  return 0;
                }
                bVar3 = PluralFormsParser_NextToken(this,(MethodInfo *)0x0);
                if (bVar3 == 0) {
                  return 0;
                }
                pPVar2 = PluralFormsParser_get_Token(this,(MethodInfo *)0x0);
                if (pPVar2 != (PluralFormsToken *)0x0) {
                  if ((pPVar2->fields).type != 4) {
                    return 0;
                  }
                  bVar3 = PluralFormsParser_NextToken(this,(MethodInfo *)0x0);
                  if (bVar3 == 0) {
                    return 0;
                  }
                  pPVar2 = PluralFormsParser_get_Token(this,(MethodInfo *)0x0);
                  if (pPVar2 != (PluralFormsToken *)0x0) {
                    if ((pPVar2->fields).type != 7) {
                      return 0;
                    }
                    bVar3 = PluralFormsParser_NextToken(this,(MethodInfo *)0x0);
                    if (bVar3 == 0) {
                      return 0;
                    }
                    pPVar4 = (PluralFormsParser__Class *)
                             PluralFormsParser_Expression(this,(MethodInfo *)0x0);
                    if (pPVar4 == (PluralFormsParser__Class *)0x0) {
                      return 0;
                    }
                    pPVar5 = (this->fields).scanner;
                    if ((pPVar5 != (PluralFormsScanner *)0x0) &&
                       (pPVar2 = (pPVar5->fields).token, pPVar2 != (PluralFormsToken *)0x0)) {
                      if ((pPVar2->fields).type != 0x12) {
                        return 0;
                      }
                      pPVar2 = PluralFormsParser_get_Token(this,(MethodInfo *)0x0);
                      if (pPVar2 != (PluralFormsToken *)0x0) {
                        if ((pPVar2->fields).type != 0x12) {
                          return 0;
                        }
                        bVar3 = PluralFormsParser_NextToken(this,(MethodInfo *)0x0);
                        if (bVar3 == 0) {
                          return 0;
                        }
                        pPVar2 = PluralFormsParser_get_Token(this,(MethodInfo *)0x0);
                        if (pPVar2 != (PluralFormsToken *)0x0) {
                          if ((pPVar2->fields).type != 1) {
                            return 0;
                          }
                          if (this != (PluralFormsParser *)0x0) {
                            this[1].klass = pPVar4;
                            (this->fields).scanner = pPVar1;
                            return 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}


/* PluralFormsNode ParsePlural() */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_ParsePlural
          (PluralFormsParser *this,MethodInfo *method)

{
  pPVar1 = PluralFormsParser_Expression(this,(MethodInfo *)0x0);
  if (pPVar1 != (PluralFormsNode *)0x0) {
    pPVar2 = (this->fields).scanner;
    if ((pPVar2 == (PluralFormsScanner *)0x0) ||
       (pPVar3 = (pPVar2->fields).token, pPVar3 == (PluralFormsToken *)0x0)) {
      func_?(0);
      pcVar4 = (code *)swi(3);
      pPVar1 = (PluralFormsNode *)(*pcVar4)();
      return pPVar1;
    }
    if ((pPVar3->fields).type == 0x12) {
      return pPVar1;
    }
  }
  return (PluralFormsNode *)0x0;
}


/* PluralFormsNode PmExpression() */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_PmExpression
          (PluralFormsParser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).scanner;
  if ((pPVar1 == (PluralFormsScanner *)0x0) ||
     (pPVar2 = (pPVar1->fields).token, pPVar2 == (PluralFormsToken *)0x0)) goto code_?;
  iVar3 = (pPVar2->fields).type;
  if (iVar3 != 3) {
    if ((pPVar1 == (PluralFormsScanner *)0x0) || (pPVar2 == (PluralFormsToken *)0x0))
    goto code_?;
    if (iVar3 != 2) {
      if (iVar3 != 0x13) {
        return (PluralFormsNode *)0x0;
      }
      bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar1,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return (PluralFormsNode *)0x0;
      }
      pPVar5 = PluralFormsParser_Expression(this,(MethodInfo *)0x0);
      if (pPVar5 == (PluralFormsNode *)0x0) {
        return (PluralFormsNode *)0x0;
      }
      pPVar2 = PluralFormsParser_get_Token(this,(MethodInfo *)0x0);
      if (pPVar2 != (PluralFormsToken *)0x0) {
        if ((pPVar2->fields).type != 0x14) {
          return (PluralFormsNode *)0x0;
        }
        bVar4 = PluralFormsParser_NextToken(this,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          return pPVar5;
        }
        return (PluralFormsNode *)0x0;
      }
      goto code_?;
    }
  }
  if (pPVar1 != (PluralFormsScanner *)0x0) {
    this_00 = (ScaleAnimationBase *)func_?(TypeInfo__GNU__Gettext__PluralFormsToken);
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,unaff_retaddr);
    if (pPVar2 != (PluralFormsToken *)0x0) {
      (this_00->fields)._._._._.m_CachedPtr = (void *)(pPVar2->fields).type;
      (this_00->fields).state = (pPVar2->fields).number;
      pPVar5 = (PluralFormsNode *)func_?();
      PluralFormsNode::PluralFormsNode__ctor(pPVar5,(PluralFormsToken *)this_00,(MethodInfo *)0x0);
      pPVar1 = (this->fields).scanner;
      if (pPVar1 != (PluralFormsScanner *)0x0) {
        bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar1,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          return (PluralFormsNode *)0x0;
        }
        return pPVar5;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pPVar5 = (PluralFormsNode *)(*pcVar6)();
  return pPVar5;
}


/* PluralFormsNode RelationalExpression() */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_RelationalExpression
          (PluralFormsParser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  pPVar1 = PluralFormsParser_MultiplicativeExpression(this,(MethodInfo *)0x0);
  if (pPVar1 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).scanner;
  if ((pPVar2 != (PluralFormsScanner *)0x0) &&
     (pPVar3 = (pPVar2->fields).token, pPVar3 != (PluralFormsToken *)0x0)) {
    iVar4 = (pPVar3->fields).type;
    if (iVar4 != 8) {
      if ((pPVar2 == (PluralFormsScanner *)0x0) || (pPVar3 == (PluralFormsToken *)0x0))
      goto code_?;
      if ((iVar4 != 10) && ((iVar4 != 9 && (iVar4 != 0xb)))) {
        return pPVar1;
      }
    }
    if (pPVar2 != (PluralFormsScanner *)0x0) {
      this_00 = (ScaleAnimationBase *)func_?(TypeInfo__GNU__Gettext__PluralFormsToken);
      ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
      if (pPVar3 != (PluralFormsToken *)0x0) {
        (this_00->fields)._._._._.m_CachedPtr = (void *)(pPVar3->fields).type;
        (this_00->fields).state = (pPVar3->fields).number;
        this_01 = (PluralFormsNode *)func_?(TypeInfo__GNU__Gettext__PluralFormsNode);
        PluralFormsNode::PluralFormsNode__ctor
                  (this_01,(PluralFormsToken *)this_00,(MethodInfo *)0x0);
        pPVar2 = (this->fields).scanner;
        if (pPVar2 != (PluralFormsScanner *)0x0) {
          bVar5 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
          if ((bVar5 == 0) ||
             (n = PluralFormsParser_MultiplicativeExpression(this,(MethodInfo *)0x0),
             n == (PluralFormsNode *)0x0)) {
            return (PluralFormsNode *)0x0;
          }
          if (this_01 != (PluralFormsNode *)0x0) {
            PluralFormsNode::PluralFormsNode_SetNode(this_01,1,n,(MethodInfo *)0x0);
            PluralFormsNode::PluralFormsNode_SetNode(this_01,0,pPVar1,(MethodInfo *)0x0);
            return this_01;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  pPVar1 = (PluralFormsNode *)(*pcVar6)();
  return pPVar1;
}


/* PluralFormsToken get_Token() */

PluralFormsToken *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_get_Token
          (PluralFormsParser *this,MethodInfo *method)

{
  pPVar1 = (this->fields).scanner;
  if (pPVar1 != (PluralFormsScanner *)0x0) {
    return (pPVar1->fields).token;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pPVar3 = (PluralFormsToken *)(*pcVar2)();
  return pPVar3;
}

