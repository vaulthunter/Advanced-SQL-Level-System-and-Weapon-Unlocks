native create_skill(const name[], max_level, skillid[], req_level);
native get_skill_level(id, skillid);
native give_xp(id, xp);
native make_primary(skillid);
native make_secondary(skillid);
native make_melee(skillid);
native user_dropped_primary(id, bool: dropped);
native user_dropped_secondary(id, bool: dropped);
native get_has_primary(id);
native get_has_secondary(id);
native get_has_melee(id);
native make_bonus(skillid);
native user_dropped_bonus(id, bool: dropped);
native get_has_bonus(id);